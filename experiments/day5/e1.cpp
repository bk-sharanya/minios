#include<iostream>
using namespace std;
int main(){
int* p = new int(5);
cout<<"heap adress: and its value"<<endl;
cout<<p<<endl;
cout<<*p<<endl;
delete p;
p = nullptr;
cout<<"stack aadrress and its value:"<<endl;
int x = 10;
cout<<&x<<endl;
cout<<x<<endl;
return 0;
}
