#include<iostream>
using namespace std;
void swapref(int& a,int& b){
int temp;
temp = a;
a=b;
b=temp;
}
void swapright(int* a,int* b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int a = 10;
int b = 20;
swapref(a,b);
cout<<a<<endl;
cout<<b<<endl;
swapright(&a,&b);
cout<<a<<endl;
cout<<b<<endl;
return 0;
}

