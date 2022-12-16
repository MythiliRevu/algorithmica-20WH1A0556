#include<iostream>
using namespace std;
int main(){
	string s;
	int i,key;
	cout<<"Enter string: ";
	cin>>s;
	for(i=0; s[i]!='\0'; i++){
	if(s[i] >= 'a' && s[i] <= 'z')
         s[i] = s[i] + 3;
         if (s[i] > 'z')
            s[i] = s[i] - 'z' + 'a' - 1;
     }
     cout<<s;
}
