#include<iostream>
using namespace std ;
int main(){
 long posicion;
 cout<<"Ingrese la posicion a evaluar de la serie Fibonacci: "<<endl;
 cin>>posicion;
 
 double fibo[posicion];
 
 fibo[0]=0;
 fibo[1]=1;
 cout<<"Fibonacci [0]:"<<fibo[0]<<endl;
 cout<<"Fibonacci [1]:"<<fibo[1]<<endl;
 
 for(long i=2;i<=posicion;i++){
  fibo[i]=fibo[i-1]+fibo[i-2];
  cout<<"Fibonacci ["<<i<<"]:"<<fibo[i]<<endl;
 }
 return 0;
}
