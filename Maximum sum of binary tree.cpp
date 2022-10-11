
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left, * right;
};


Node* newNode(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}


Node* insertLevelOrder(int arr[],
					int i, int n)
{
	Node *root = nullptr;
	
	if (i < n)
	{
		root = newNode(arr[i]);
		
	
		root->left = insertLevelOrder(arr,
				2 * i + 1, n);

		
		root->right = insertLevelOrder(arr,
				2 * i + 2, n);
	}
	return root;
}


void inOrder(Node* root)
{
	if (root != NULL)
	{
		inOrder(root->left);
		cout << root->data <<" ";
		inOrder(root->right);
	}
}
int findMaxUtil(Node* root, int& res)
{
   
    if (root == NULL)
        return 0;
 
   
    int l = findMaxUtil(root->left, res);
    int r = findMaxUtil(root->right, res);
 
  
    int max_single
        = max(max(l, r) + root->data, root->data);
 
    
    int max_top = max(max_single, l + r + root->data);
 
    res = max(res, max_top); 
 
    return max_single;
}
 

int findMaxSum(Node* root)
{
    
    int res = INT_MIN;
 
    
    findMaxUtil(root, res);
    return res;
}

int main()
{
	int n, i;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
	Node* root = insertLevelOrder(arr, 0, n);
	inOrder(root);
    cout<<endl;
    cout << "Max path sum is " << findMaxSum(root);
    return 0;
}


