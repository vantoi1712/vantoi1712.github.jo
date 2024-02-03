#include<bits/stdc++.h>
using namespace std;
long frime(int k){
	if(k==0||k==1){
	
	
	return 1;
}
    else if(k%2!=0){
	long kq=1;
	for(int i=3; i<=k; i+=2){
		kq*=i;
	}
	return kq;
}
else{
	long kq1=1;
	for(int j=2; j<=k; j+=2){
		kq1*=j;
	}
	return kq1;
}
}
int main(){
	int n;
	cin >> n;
	if(n<=30)
	cout << frime(n) << endl;
	else
	cout <<"moi ban nhap lai so nho hon hoac bang 30! ";
    
	return 0;
}

