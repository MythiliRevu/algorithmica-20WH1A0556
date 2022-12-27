#include<bits/stdc++.h>
using namespace std;
int convertBase(int b, int n){
	if(b==2){
		int a[10],i;
		for(i=0; n>0; i++){    
        a[i]=n%2;    
        n= n/2;  
        }    
        cout<<"Binary number: ";    
        for(i=i-1 ;i>=0 ;i--){    
        cout<<a[i];    
        }    
	}
	else if(b==8){
		int octal=0, placeValue=1;
        while(n!= 0){
        octal+=(n%8)*placeValue;
        n/=8;
        placeValue*=10;
        }
        cout<<"Octal number: "<<octal;
	}
	else if(b==16){
		char a[100];
        int i=0,j;
        while(n!=0){
        int temp=0;
        temp=n%16;
        if(temp<10){
            a[i]=temp+48;
            i++;
        } 
		else{
            a[i]=temp+55;
            i++;
        }
        n=n/16;
        }
        cout<<"hexadecimal number: ";
        for(j=i-1; j>=0; j--)
            cout<<a[j];
	}
	else{
		cout<<"error";
	}
}
int convertBaseTen(int b, int n){
	if(b==2){
		int dec=0,i=0,rem;
        while(n!=0){
        rem=n%10;
        n/=10;
        dec+=rem*pow(2, i);
        ++i;
        }
		cout<<"decimal number: "<<dec;
	}
	else if(b==8){
		int dec=0,i=0,rem;
        while(n!=0){
        rem=n%10;
        n/=10;
        dec+=rem*pow(8, i);
        ++i;
        }
		cout<<"decimal number: "<<dec;
	}
	else if(b==16){
		int dec=0,i=0,rem;
        while(n!=0){
        rem=n%10;
        n/=10;
        dec+=rem*pow(16, i);
        ++i;
        }
		cout<<"decimal number: "<<dec;
	}
	else{
		cout<<"error";
	}
}
int main(){
	int b,n,choice;
	while(1){
        cout<<"1. arbitrary base to base 10\n2. base 10 to an arbitrary base\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:cout<<"Enter base and input number: ";
            cin>>b>>n;
            return convertBase(b,n);
                   break;
            case 2:cout<<"Enter base and input number: ";
            cin>>b>>n;
            return convertBaseTen(b,n);
                   break;
        }
    }
}
