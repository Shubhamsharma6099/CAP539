#include<iostream>
using namespace std;
int fact(long int n,long int x)
{
if(x==n){
return n;
}else{
return x*fact(n,x+1);
}
}
int main(){
long int n,rsl;
long int x = 1;
cout<<"enter a no.:"<<endl;
cin>>n;
rsl=fact(n,x);
cout<<"The factorial of:"<<endl;
 <<factorial(num)<<endl;
 return 0;
 }
