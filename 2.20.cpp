#include<iostream>
#include<string>
using namespace std;
int main()
{
	int radius,diameter,circumference,area;

	const float pi =3.14159;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>radius;
	cout<<"diameter="<<2*radius<<"\n"<<"circumference="<<pi*radius*radius<<"\n"<<"area="<<2*pi*radius<<endl;
	return 0;
	
}
