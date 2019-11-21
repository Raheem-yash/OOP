/*write a program that ask the user to enter two integers, obtained the numbers from the user. If the number are not equal, print the message "these numbers are not equal", 
then prinrt the smaller number followed by the word "is smaller"*/
#include<iostream>
using namespace std; 
int main()
{
	int a,b;
	cout<<"Enter a number a"<<endl;
	cin>>a;
	cout<<"Enter a number b"<<endl;
	cin>>b;
	if (a!=b)
	{
		cout<< "These numbers are Not equal"<<endl;
 };
	if(a<b)
	{
	cout<<a<<"is smaller"<<endl;
	};
	if(b<a)
	{
		cout<<b<<" is smaller"<<endl;
	};
	return 0;
}
