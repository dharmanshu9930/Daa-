#include<iostream>

using namespace std;

int main()
{
	int number, temp, reminder, reverse = 0;
	
	cout << "Please Enter the Number to Check Palindrome or Not =  ";
	cin >> number;
	temp = number;
	while (temp > 0)
	{
    	reminder = temp % 10;
    	reverse = reverse * 10 + reminder;
    	temp = temp / 10;
	}
	cout << "\nReverse of given Number = " << reverse << "\n\n";
	if(number == reverse) {
		cout << number << " is a Palindrome Number";
	}	
	else {
		cout << number << " is Not a Palindrome Number";
	}
 	return 0;
}
