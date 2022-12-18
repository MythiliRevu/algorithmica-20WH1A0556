#include<bits/stdc++.h>
using namespace std;
int getHypotenuse(int l1, int l2){
	int l3=sqrt((l1*l1) + (l2*l2));
	return l3;
}
int main(){
	int l1,l2;
	cout<<"Enter l1,l2: ";
	cin>>l1>>l2;
	cout<<getHypotenuse(l1,l2);
}
