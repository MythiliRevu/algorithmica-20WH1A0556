#include<bits/stdc++.h>
using namespace std;
int decode(char c){
	return c;
}
char encode(int n){
	return n;
}
int main(){
	char c;
	int n;
	cout<<"Enter character and number: ";
	cin>>c>>n;
    cout<<decode(c)<<"\n";
    cout<<encode(n);
}
