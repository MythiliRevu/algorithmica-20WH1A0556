#include<iostream>
using namespace std;
int main(){
	int n;
	string c;
	cout<<"Enter character and integer: ";
	cin>>c>>n;
	if(((c=="a"||c=="c"||c=="e"||c=="g")&&(n==2||n==4||n==6||n==8))||((c=="b"||c=="d"||c=="f"||c=="h")&&(n==1||n==3||n==5||n==7))){
		cout<<"white";
	}
	else{
		cout<<"black";
	}
}
