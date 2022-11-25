//swap of two number
#include<iostream>
using namespace std;

int main()
{   
    int a,b;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	//with third variable
	int c=a;
	a=b;
	b=c;
	cout<<"swaped numbers are : ";
	cout<<a<<" "<<b<<endl; 
	
	//without variable
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"swaped numbers are : ";
	cout<<a<<" "<<b<<endl;
}
