//Greater number in given three numbers
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Enter third number : ";
	cin>>c;
	if(a>b && a>c){
		cout<<"Greater number is : "<<a<<endl;
	}
	else if(b>a && b>c){
		cout<<"Greater number is : "<<b<<endl;
	}
	else{
		cout<<"Greater number is : "<<c<<endl;
	}
}
