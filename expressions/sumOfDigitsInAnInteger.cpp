#include<iostream>
using namespace std;
int main(){
	int n,sum,s=0,i;
	cout<<"Enter 4-digit number: ";
	cin>>n;
	for(i=0; i<4; i++){
	sum=n%10;
	s=s+sum;
	n=n/10;
    }
	cout<<s;	
}
