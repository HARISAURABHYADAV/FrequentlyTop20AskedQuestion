//dublicate in array
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
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				cout<<arr[i];
				break;
			}
		}
	}
	return 0;
}
