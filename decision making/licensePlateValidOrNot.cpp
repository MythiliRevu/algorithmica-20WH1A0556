#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	if(s.length()==6){
	if((s[0]>='A'&&s[4]<='Z')&&(s[1]>='A'&&s[4]<='Z')&&(s[2]>='A'&&s[4]<='Z')&&s[3]>=0&&s[4]>=0&&s[5]>=0){
		cout<<"older style license plate"<<"\n"<<"valid";
	}
	else{
		cout<<"not valid";
	}
}
else if(s.length()==7){
	if(s[0]>=0&&s[1]>=0&&s[2]>=0&&s[3]>=0&&(s[4]>='A'&&s[4]<='Z')&&(s[5]>='A'&&s[5]<='Z')&&(s[6]>='A'&&s[6]<='Z')){
		cout<<"newer style license plate"<<"\n"<<"valid";
	}
	else{
		cout<<"not valid";
	}
}
else{
	cout<<"not valid";
}
}
