//even or odd in range of 1 to num
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	int count=0, count1=0;
	for(int i=1; i<=num; i++){
		if(i%2==0){
			count++;
		}
		else{
			count1++;
		}
	}
	cout<<"Even numbers are : "<<count<<" Odd numbers are : "<<count1<<endl;
}
