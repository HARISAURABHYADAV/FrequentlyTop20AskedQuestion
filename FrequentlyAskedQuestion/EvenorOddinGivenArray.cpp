//even or odd in array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter element of array : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Even number of array : ";
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
		}
	}
	cout<<"Odd number of array : ";
	for(int i=0; i<n; i++){
		if(arr[i]%2!=0){
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
