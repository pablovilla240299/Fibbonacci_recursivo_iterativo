#include <iostream>
#include <stdlib.h>
using namespace std;

int fibo(int n);

int main(){
	double n, i;
	do{
	cout<<"Digite la cantidad de digitos de la serie:"<<endl;
	cin>>n;
}while(n<=0);
	for(i = 0; i<n; i++){
	cout<<endl;
	cout<<"Iteracion"<<"["<<i+1<<"]"<<":"<<fibo(i)<<" ";
	}
	return 0;
}
int fibo(int n){
	if( n == 0 || n == 1){
		return n;
	}
	return fibo(n-1) + fibo(n-2);
}

