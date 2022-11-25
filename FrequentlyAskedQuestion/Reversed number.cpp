//reversed of number
#include<iostream>
using namespace std;
// reverse number
int main()
{
	int n;
	cout<<"Enter number for reverse : ";
	cin>>n;
	int digit, rev=0;
	while(n>0){
		digit=n%10;  // last digit find ho jayegi
		rev=rev*10+digit; //pahle rev=0 hoga usme last digit judati jayegi
		n=n/10; // ek ek digit kam karte jayenge
	}
	cout<<"reversed number is : ";
	cout<<rev<<endl;
}
