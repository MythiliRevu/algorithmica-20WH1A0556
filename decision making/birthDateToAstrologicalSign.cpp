#include<iostream>
using namespace std;
int main(){
	string s;
	int d;
	cout<<"Enter month and day: ";
	cin>>s>>d;
	if((s=="december")&&(d>=22&&d<=31)||(s=="january")&&(d>=1&&d<=19)){
		cout<<"capricorn";
	}
	else if((s=="january")&&(d>=20&&d<=31)||(s=="february")&&(d>=1&&d<=18)){
		cout<<"aquarius";
	}
	else if((s=="february")&&(d>=19&&d<=29)||(s=="march")&&(d>=1&&d<=20)){
		cout<<"pisces";
	}
	else if((s=="march")&&(d>=21&&d<=31)||(s=="april")&&(d>=1&&d<=19)){
		cout<<"aries";
	}
	else if((s=="april")&&(d>=20&&d<=30)||(s=="may")&&(d>=1&&d<=20)){
		cout<<"taurus";
	}
	else if((s=="may")&&(d>=21&&d<=31)||(s=="june")&&(d>=1&&d<=20)){
		cout<<"gemini";
	}
	else if((s=="june")&&(d>=21&&d<=30)||(s=="july")&&(d>=1&&d<=22)){
		cout<<"cancer";
	}
	else if((s=="july")&&(d>=23&&d<=31)||(s=="august")&&(d>=1&&d<=22)){
		cout<<"leo";
	}
	else if((s=="august")&&(d>=23&&d<=31)||(s=="september")&&(d>=1&&d<=22)){
		cout<<"virgo";
	}
	else if((s=="september")&&(d>=23&&d<=30)||(s=="october")&&(d>=1&&d<=22)){
		cout<<"libra";
	}
	else if((s=="october")&&(d>=23&&d<=31)||(s=="november")&&(d>=1&&d<=21)){
		cout<<"scorpio";
	}
	else if((s=="november")&&(d>=22&&d<=30)||(s=="december")&&(d>=1&&d<=21)){
		cout<<"sagittarius";
	}
	else{
		cout<<"Enter correct month and day";
	}
}
