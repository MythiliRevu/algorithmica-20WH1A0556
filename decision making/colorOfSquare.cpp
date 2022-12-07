#include<iostream>
using namespace std;
int main(){
	int n;
	string c;
	cout<<"Enter character and integer: ";
	cin>>c>>n;
	if((c=="a"||c=="c"||c=="e"||c=="g") && (n==2||n==4||n==6||n==8)){
		cout<<"white";
	}
	else{
		cout<<"black";
	}
}
