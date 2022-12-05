#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float s1,s2,s3;
	cout<<"Enter s1: ";
	cin>>s1;
	cout<<"Enter s2: ";
	cin>>s2;
	cout<<"Enter s3: ";
	cin>>s3;
	float s;
	s=(s1+s2+s3)/2;
	cout<<"s is "<<s<<"\n";
	float area;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"Area of a triangle is "<<area;
}
