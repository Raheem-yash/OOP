#include<iostream>
using namespace std;
int main()
{
	int a,b,c,smallest,largest;
	cout<<"Enter three integers";
	cin>>a,b,c,smallest,largest;
	largest= a;
	if(b>largest)
	largest=b;
	if(c>largest)
	largest=c;
	smallest=a;
	if(b<smallest)
	smallest=b;
	if(c<smallest)
	smallest=c;
	cout<<"sumis"<<a+b+c
	<<"\naverage is"<<(a+b+c)/3
	<<"\nproduct is"<<a*b*c
	<<"\nsmallest is"<<smallest
	<<"\nlargest is"<<largest<<endl;
	return 0;
}
