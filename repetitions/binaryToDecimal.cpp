#include<iostream>
using namespace std;
int main(){
	int n,result=0,product=1,rem;
	cout<<"Enter binary number: ";
	cin>>n;
	while(n>0){
	rem=n%10;
	result=result+(rem*product);
	product=product*2;
	n=n/10;
    }
	cout<<result;
}
