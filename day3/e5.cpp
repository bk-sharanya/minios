#include<iostream>
using namespace std;
void g(){
int c = 30;
cout<<"address of c "<<&c<<endl;
}
void f(){
int b = 20;
cout<<"address of b "<<&b<<endl;
g();
}
int main(){
int a = 10;
cout<<"address of a "<<&a<<endl;
f();
f();
return 0;
}
