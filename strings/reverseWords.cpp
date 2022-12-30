#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s){
	int i;
	reverse(s.begin(), s.end());
	s.insert(s.end(), ' ');
	int n=s.length();
	int j=0;
	for(i=0; i<n; i++){
		if(s[i]==' '){
			reverse(s.begin()+j, s.begin()+i);
			j=i+1;
		}
	}
	return s;
}
int main(){
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	cout<<reverseWords(s);
}

