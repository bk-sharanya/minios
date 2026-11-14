#include<iostream>
using namespace std;
int* makenumber(){
int* p = new int(42);
return p;
}
int main(){
int* x = makenumber();
cout<<*x<<endl;
delete x;
x = nullptr;
return 0;
}
