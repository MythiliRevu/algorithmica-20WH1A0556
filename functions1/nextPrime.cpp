#include<iostream>
using namespace std;
int nextPrime(int n){
	int i;
	n++;
      for(i=2; i<n; i++){
         if(n%i==0){
            n++;
            i=2;
         } 
		 else{
            continue;
         }
    }
    return n;	
}
int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	cout<<nextPrime(n);
}
