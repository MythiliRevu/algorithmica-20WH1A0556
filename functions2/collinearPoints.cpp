#include<iostream>
using namespace std;
int isCollinear(int x1,int y1,int x2,int y2,int x3,int y3){
	int m,n;
	m=x3*(y2-y1)-x2*(y2-y1);
	n=x2*(y3-y2)-x1*(y3-y2);
	if(m==n){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
int main(){
	int x1,x2,x3,y1,y2,y3;
	cout<<"Enter x1,y1: ";
	cin>>x1>>y1;
	cout<<"Enter x2,y2: ";
	cin>>x2>>y2;
	cout<<"Enter x3,y3: ";
	cin>>x3>>y3;
	return isCollinear(x1,y1,x2,y2,x3,y3);
}
