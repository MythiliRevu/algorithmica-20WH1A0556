#include<iostream>
using namespace std;
int main(){
	int i,sum;
	cout<<"degC"<<"\t"<<"degF"<<"\n";
	for(i=0; i<=100; i++){
		if(i%10==0){
			sum=(i*1.8)+32;
			cout<<i<<"\t"<<sum<<"\n";
		}
	}
}
