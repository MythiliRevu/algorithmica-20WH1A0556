#include<iostream>
using namespace std;
int isValidTriangle(int a,int b, int c){
	if(a<=0 || b<=0 || c<=0){
		return false;
	}
	else{
	if(a>=(b+c) || b>=(a+c) || c>=(a+b)){
		cout<<"cannot form triangle";
	}
	else{
		cout<<"form a triangle";
	}
}
}
int main(){
	int a,b,c;
	cout<<"Enter a,b,c: ";
	cin>>a>>b>>c;
	return isValidTriangle(a,b,c);
}
