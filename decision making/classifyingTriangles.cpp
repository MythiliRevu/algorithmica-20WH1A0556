#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"Enter sides of triangle: ";
	cin>>s1>>s2>>s3;
	if(s1==s2==s3){
		cout<<"tiangle is equilateral";
	}
	else if(s1==s2||s2==s3||s3==s1){
		cout<<"triangle is isosceles";
	}
	else{
		cout<<"triangle is scalene";
	}
}
