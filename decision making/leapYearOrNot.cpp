#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a year: ";
	cin>>n;
	if(n%400==0 && n%4==0){
		cout<<"it is a leap year";
	}
	else if(n%100==0){
		cout<<"it is not a leap year";
	}
	else{
		cout<<"it is not a leap year";
	}
}
