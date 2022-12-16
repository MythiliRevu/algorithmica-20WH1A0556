#include<iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Enter value: ";
	cin>>n;
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			cout<<" ";
		}
		for(k=n; k>i; k--){
		    cout<<"*"<<" ";
	    }
	    cout<<"\n";
	}
	for(i=0; i<n; i++){
		for(j=1; j<n-i; j++){
			cout<<" ";
		}
		for(k=0; k<=i; k++){
		    cout<<"*"<<" ";
	    }
	    cout<<"\n";
	}
}
