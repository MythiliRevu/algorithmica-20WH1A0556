#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float cost,tax,tip,total,grand;
	cout<<"Enter cost: ";
	cin>>cost;
	tax=cost*0.18;
	cout<<"tax amount is "<<tax<<"\n";
	tip=cost*0.05;
	cout<<"tip amount is "<<tip<<"\n";
	total=tax+tip;
	grand=cost+total;
	cout<<"total amount is "<<grand;
}
