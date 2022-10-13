package tree;

public class bst {

    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data=data;
        }
    }
    public static Node insert(Node root, int val){
        if(root==null){
            root = new Node(val);
            return root;
        }

        if(root.data>val){
            root.left = insert(root.left, val);
        }
        else{
            root.right = insert(root.right, val);
        }

        return root;
    }
    public static void inorder(Node root){

        if(root==null){
            return;
        }
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    public static void main(String[] args) {
        int values[] = {5, 10, 3, 2, 4, 7};
        Node root = null;

//        int length = values.length;
        for(int i = 0; i<values.length; i++){
            root = insert(root, values[i]);
        }
        inorder(root);
        System.out.println();
    }
}
