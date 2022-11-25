#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter your string : ";
	cin>>str;
	int n=str.length();
	int count=0;
	string str1;
	for(int i=0; i<n; i++){
		str1[i]= str[n-i-1];
	}
	for(int i=0; i<n; i++){
		if(str[i]!=str1[i]){
			count++;
		}
    } 
    if(count==0){
    	cout<<"Pelendrome hai!"<<endl;
    }
    else{
		cout<<"Pelendrome nahi hai!"<<endl;
	}
	return 0;
	
	return 0;
}
