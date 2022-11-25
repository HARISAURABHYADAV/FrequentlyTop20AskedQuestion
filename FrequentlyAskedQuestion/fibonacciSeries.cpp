//fibonacci series
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=0, b=1,c;
	int num;
	cout<<"Enter number for fibonacci number : "<<endl;
	cin>>num;
	cout<<"fibonacci series : "<<a<<" "<<b<<" ";
	for(int i=2; i<num ; i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
    return 0;	
}
