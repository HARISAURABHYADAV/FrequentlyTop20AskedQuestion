//sum of digit
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	int sum=0, digit;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	cout<<"Sum of digit is : "<<sum<<endl;;
}
