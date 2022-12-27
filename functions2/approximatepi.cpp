#include<bits/stdc++.h>
using namespace std;
double approximatePi(float m,float pi,float n,float si){
	int i;
	for(i=0; i<m; i++){
    pi=pi+(si*(4/((n)*(n + 1)*(n + 2))));
    si=si*(-1);
    n+=2;
    }
    return pi;
}
int main(){
	float n=2,pi=3,si=1;
	float m;
	cout<<"Enter m term: ";
	cin>>m;
	cout<<"pi="<<approximatePi(m,pi,n,si);
}
