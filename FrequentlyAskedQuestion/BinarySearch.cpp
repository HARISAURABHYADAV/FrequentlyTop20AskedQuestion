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
	cout<<"Enter the key :  ";
	cin>>key;
	int s=0;
	int e=n-1;
	int mid=(s+e)/2;
	while(s<e){
		for(int i=0; i<n;i++){	
		    if(arr[mid]==key){
			   cout<<mid;
	      	}
		    else if(arr[mid]>key){
			   s=mid+1;
		    }
		    else{
			e=mid-1;
	    	}
    	}
	}
	return 0;
}
