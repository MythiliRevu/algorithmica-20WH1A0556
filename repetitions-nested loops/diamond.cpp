#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Enter value: ";
	cin>>n;
    for(i=1; i<=n; i++){
        for(j=n; j>i; j--){
            cout<<" ";
        }
        for(k=0; k<i*2-1; k++){
            cout << "*";
        }
        cout << "\n";
    }
    for(i=1; i<=n-1; i++){
        for(j=0; j<i; j++){
            cout << " ";
        }
        for(k=(n-i)*2-1; k>0; k--){
            cout << "*";
        }
        cout << "\n";
    }
}
