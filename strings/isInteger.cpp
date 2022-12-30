#include <bits/stdc++.h>
using namespace std;
bool isInteger(string s){
	int i;
    for(i=0; i<s.length(); i++){
    	if(s[0]=='+' || s[0]=='-'){
    		return true;
		}
		if(s[i]>='0' && s[i]<='9'){
			return true;
		}
		else if(s[i]>='a' || s[i]<='z'){
			return false;
		}
    }
}
int main(){
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	cout<<isInteger(s);
}
