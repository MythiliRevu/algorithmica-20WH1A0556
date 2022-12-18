#include<iostream>
using namespace std;
int checkPassword(string s){
	int i,up,low,dig;
	char ch;
	if(s.length()==8){
		for(i=0; i<s.length(); i++){
			ch=s[i];
            if(isupper(ch))
               up=1;
            else if(islower(ch))
               low=1;
            else if(isdigit(ch))
               dig=1;
		}
		if(up==1 && low==1 && dig==1)
            cout<<"true";
        else
            cout<<"false";
   }
   else{
   	cout<<"false";
   }
}
int main(){
	string s;
	cout<<"Enter password: ";
	cin>>s;
	return checkPassword(s);
}
