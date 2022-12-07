#include<iostream>
using namespace std;
int main(){
	string c;
	cout<<"Enter letter: ";
	cin>>c;
	if(c=="a"||c=="e"||c=="i"||c=="o"||c=="u"){
		cout<<"Letter is a vowel";
	}
	else if(c=="y"){
		cout<<"sometimes y is a vowel and sometimes y is a consonant";
	}
	else{
		cout<<"Letter is consonant";
	}
}
