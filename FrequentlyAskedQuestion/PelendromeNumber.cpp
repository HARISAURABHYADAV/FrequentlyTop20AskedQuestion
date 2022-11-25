#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number for pelendrome : ";
	cin>>num;
	int digit,rev=0;
	while(num>0){
		digit=num%10;
		rev=rev*10 + digit;
		num=num/10;
	}
	if(num==rev){
		cout<<"Pelendrome hai!"<<endl;
	}
	else{
		cout<<"Pelendrome nahi hai!"<<endl;
	}
	return 0;
}
