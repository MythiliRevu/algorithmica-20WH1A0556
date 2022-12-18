#include<iostream>
using namespace std;
int isPrime(int n){
	if(n%2==0 || n%3==0  || n%5==0 || n%7==0)
	cout<<"not prime";
	else
	cout<<"prime";
}
int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	return isPrime(n);
}
