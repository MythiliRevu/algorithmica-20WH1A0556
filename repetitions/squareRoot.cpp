#include<bits/stdc++.h>
using namespace std;
int main(){
	float x,guess;
	cout<<"Enter x: ";
	cin>>x;
	guess=x/2;
	while(abs((guess*guess)-x)>=pow(10,-3)){
	guess=(guess+(x/guess))/2;	
	}
	cout<<guess;
}
