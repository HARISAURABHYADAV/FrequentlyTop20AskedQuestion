//Count digit in given number
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	int count=0;
	while(num>0){
		num=num/10;
		count++;	
	}
	cout<<"The digits are : ";
	cout<<count<<endl;
}
