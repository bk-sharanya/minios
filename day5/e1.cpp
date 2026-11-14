#include<iostream>
using namespace std;
int main(){
int* p = new int(5);
cout<<p<<endl;
cout<<*p<<endl;
delete p;
p = nullptr;
int x = 10;
cout<<&x;
return 0;
}
