//max and min in given array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i=0; i<n; i++){
		if(arr[i]>maxNo){
			maxNo=arr[i];
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i]<minNo){
			minNo=arr[i];
		}
	}
	cout<<"Max number is "<<maxNo<<" Min number is "<<minNo<<endl;
}
