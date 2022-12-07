#include<iostream>
using namespace std;
int main(){
	int wl;
	cout<<"Enter wavelength: ";
	cin>>wl;
	if(wl>=380 && wl<450){
		cout<<"violet";
	}
	else if(wl>=450 && wl<495){
		cout<<"blue";
	}
	else if(wl>=495 && wl<570){
		cout<<"green";
	}
	else if(wl>=570 && wl<590){
		cout<<"yellow";
	}
	else if(wl>=590 && wl<620){
		cout<<"orange";
	}
	else if(wl>=620 && wl<750){
		cout<<"red";
	}
	else{
		cout<<"the wavelength entered by the user is outside of the visible spectrum";
	}
	
}
