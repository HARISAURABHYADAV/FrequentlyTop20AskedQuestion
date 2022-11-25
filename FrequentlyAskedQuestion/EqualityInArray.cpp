//Equality in given two array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	int count=0;
	cout<<"Enter element of array 1: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int arr1[n];
	cout<<"Enter element of array 2: ";
	for(int i=0; i<n; i++){
		cin>>arr1[i];
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]!=arr1[i]){
			count++;
		}
	}
	if(count==0){
		cout<<"Equal value in arrays : "<<endl;
	}
	else{
		cout<<"Not Equal value in arrays : "<<endl;
	}
	return 0;
}
