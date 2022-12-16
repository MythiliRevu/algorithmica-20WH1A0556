#include<iostream>
using namespace std;
int main(){
	int q,r,product=1,result=0;
	cout<<"Enter decimal number: ";
	cin>>q;
	while(q>0){
	r=q%2;
	result=result+(r*product);
	q=q/2;
	product=product*10;
    }
    cout<<result;

}
