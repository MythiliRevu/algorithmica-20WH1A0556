#include<iostream>
using namespace std;
int isPerfect(int n){
	int j,sum=1;
		for(j=2; j*j<=n; j++){
			if(n%j==0){
				if(j*j!=n)
                sum = sum + j + n/j;
            else
                sum=sum+j;
			}
		}
		if(sum==n && n!=1){
			return true;
		}
		return false;
}
int main(){
	int n;
	for(n=1; n<10000; n++){
		if(isPerfect(n))
		cout<<n<<"\n";
	}
	return 0;
}
