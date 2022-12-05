#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,i;
	float sum=0,s=0,d,a[10];
	cout<<"Enter number of containers: ";
	cin>>n;
	cout<<"Enter size of each container:\n";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		if(a[i]<=1){
			sum=sum+0.10;
		}
		else{
			s=s+0.25;
		}
		d=sum+s;
	}
	cout<<"$"<<setprecision(2)<<d;
}
