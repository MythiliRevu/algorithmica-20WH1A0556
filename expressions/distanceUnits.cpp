#include<iostream>
using namespace std;
int main(){
	float feet,inch,yard,mile;
	cout<<"Enter measurement in feet: ";
	cin>>feet;
	inch=feet*12;
	cout<<"inches is "<<inch<<"\n";
	yard=feet/3;
	cout<<"yards is "<<yard<<"\n";
	mile=feet/5280;
	cout<<"miles is "<<mile<<"\n";
}
