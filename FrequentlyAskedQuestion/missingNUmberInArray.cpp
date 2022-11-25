//missing number in array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter first array's element : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int arr1[n];
	cout<<"Enter second array's element : ";
	for(int i=0; i<n; i++){
		cin>>arr1[i];
	}
	cout<<"Missing number in array is : ";
	for(int i=0; i<n; i++){
		if(arr[i]!=arr1[i]){
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
