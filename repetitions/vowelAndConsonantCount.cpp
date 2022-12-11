#include<iostream>
using namespace std;
int main(){
	string s;
	int i,cou=0,count=0;
	cout<<"Enter string: ";
	cin>>s;
	for(i=0; i<s.length(); i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			count=count+1;
		}
		else{
			cou=cou+1;
		}
	}
	cout<<"vowels "<<count<<"\n"<<"consonants "<<cou;
}
