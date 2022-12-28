#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string s){
	string a=s;
	reverse(a.begin(), a.end());
	if(s==a) {
		cout<<"is palindrome";
	}
	else{
		cout<<"is not palindrome";
	}
}
int main(){
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	return isPalindrome(s);
}

