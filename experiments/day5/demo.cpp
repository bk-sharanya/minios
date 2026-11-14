#include<iostream>
using namespace std;
int main(){
int* a = new int(5);
int* b = new int(6);
delete a;
a=b;
delete b;
a = b = nullptr;
cout<<"success";
return 0;
}
