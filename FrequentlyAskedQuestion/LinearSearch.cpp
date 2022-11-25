//linear search
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
	int key;
	cout<<"Enter value for find: ";
	cin>>key;
	for(int i=0; i<n; i++){
		if(arr[i]==key){
			cout<<"address of key : "<<i<<endl;
		}
	}
	return 0;
}
