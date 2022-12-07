#include<iostream>
using namespace std;
int main(){
	string s;
	int d;
	cout<<"Enter month and day: ";
	cin>>s>>d;
	if((s=="march")&&(d>=20&&d<=30)||(s=="april")&&(d>=1&&d<=30)||(s=="may")&&(d>=1&&d<=31)||(s=="june")&&(d>=1&&d<21)){
		cout<<"spring";
	}
	else if((s=="june")&&(d>=21&&d<=30)||(s=="july")&&(d>=1&&d<=30)||(s=="august")&&(d>=1&&d<=31)||(s=="september")&&(d>=1&&d<22)){
		cout<<"summer";
	}
	else if((s=="september")&&(d>=22&&d<=30)||(s=="october")&&(d>=1&&d<=31)||(s=="november")&&(d>=1&&d<=30)||(s=="december")&&(d>=1&&d<21)){
		cout<<"fall";
	}
	else if((s=="december")&&(d>=21&&d<=31)||(s=="january")&&(d>=1&&d<=31)||(s=="february")&&(d>=1&&d<=29)||(s=="march")&&(d>=1&&d<20)){
		cout<<"winter";
	}
	else{
		cout<<"Enter correct date";
	}
}
