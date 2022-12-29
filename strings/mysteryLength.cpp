#include<iostream>
#include<string>
using namespace std;
string removeMysteryLength(string s){
	int i;
	int stoi;
	int len=s.length();
	for(i=len-1; i>=0; --i){
		len--;
		if(len == stoi(s.substr(i))){
			return s.substr(0, len);
		}
	}
	return "error";
}
int main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	cout<<removeMysteryLength(s);
}
