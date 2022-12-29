#include<bits/stdc++.h>
using namespace std;
int encrpytWiyhCaesar(string s){
	int i,key;
	for(i=0; s[i]!='\0'; i++){
	if(s[i] >= 'a' && s[i] <= 'z')
         s[i] = s[i] + 3;
         if (s[i] > 'z')
            s[i] = s[i] - 'z' + 'a' - 1;
     }
     cout<<s;
}
int main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	return encrpytWiyhCaesar(s);
}
