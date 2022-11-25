//reversed string
#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter your string : ";
	cin>>str;
	int n=str.length();
	cout<<"reversed string : ";
	for(int i=0; i<n; i++){
		cout<<str[n-i-1];
	}
}
