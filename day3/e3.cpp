#include<iostream>
using namespace std;
void swapwrong(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
cout<<&a<<endl;
cout<<&b<<endl;
}
void swapright(int* p1,int* p2){
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
cout<<p1<<endl;
cout<<p2<<endl;
}
int main(){
int a = 10;
int b = 20;
swapwrong(a,b);
cout<<a<<endl;
cout<<b<<endl;
swapright(&a,&b);
cout<<a<<endl;
cout<<b<<endl;
cout<<"main address as follows"<<endl;
cout<<&a<<endl;
cout<<&b<<endl;
return 0;
}
