#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float dep,interest,amount;
	int i;
	cout<<"Enter deposit amount: ";
	cin>>dep;
	for(i=1; i<=3; i++){
		interest=dep*0.04;
		amount=dep+interest;
		cout<<"amount after "<<i<<" year is "<<amount<<"\n";
		dep=amount;
    }
	
}
