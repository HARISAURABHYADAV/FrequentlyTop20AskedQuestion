//prime or not
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	int count=0;
	for(int i=2; i<=num/2; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==0){
		cout<<"Number is Prime : "<<endl;
	}
	else{
		cout<<"Number is not Prime : "<<endl;
	}
}
