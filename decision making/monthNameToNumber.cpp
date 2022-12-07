#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter month: ";
	cin>>s;
	if(s=="january"||s=="march"||s=="may"||s=="july"||s=="august"||s=="october"||s=="december"){
		cout<<"31 days";
	}
	else if(s=="february"){
		cout<<"28 or 29 days";
	}
	else{
		cout<<"30 days";
	}
}
