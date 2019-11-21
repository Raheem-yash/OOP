#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,largest,smallest;
	cout<<"Enter a an Integers";
	cin>>a;
		cout<<"Enter b an Integers";
	cin>>b;
	cout<<"Enter c an Integers";
	cin>>c;
	cout<<"Enter d an Integers";
	cin>>d;
	cout<<"Enter e an Integers";
	cin>>e;
	smallest=a;
	if(b<smallest)
	smallest=b;
	if(c<smallest)
	smallest=c;
	if(d<smallest)
	smallest=d;
	if(e<smallest)
	smallest=e;
	largest=a;
	if(b>largest)
	b=largest;
	if(c>largest)
	c=largest;
	if(d>largest)
	largest=d;
	if(e>largest)
	largest=e;
	cout<<"largest is"<<largest<<"\n"<<"smallest is"<<"\n"<<smallest<<endl;

	return 0;
}
