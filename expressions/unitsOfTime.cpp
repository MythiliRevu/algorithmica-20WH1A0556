#include<iostream>
using namespace std;
int main(){
	int sec,days,hours,minutes,seconds;
	cout<<"Enter seconds: ";
	cin>>sec;
	seconds = (sec % 60);
    minutes = (sec % 3600) / 60;
    hours = (sec % 86400) / 3600;
    days = (sec % (86400 * 30)) / 86400;
    cout<<days<<":"<<hours<<":"<<minutes<<":"<<seconds;
}
