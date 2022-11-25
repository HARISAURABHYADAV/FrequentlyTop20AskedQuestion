//sum of element in array
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"ENter size of array : ";
	cin>>n;
	int arr[n];
	int sum=0;
	cout<<"Enter the value of : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	cout<<"sum of array is : "<<sum<<endl;
	return 0;
}
