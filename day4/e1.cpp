#include<iostream>
using namespace std;
int  main(){
int x = 5;
int& r = x;
cout<<" x is :"<<x<<endl;
cout<<"r is :"<<r<<endl;
cout<<"&x is  :"<<&x<<endl;
cout<<"&r is :"<<&r<<endl;
r = 9;
cout<<" x is :"<<x<<endl;
int y = 100;
r = y;
cout<<" x is :"<<x<<endl;
cout<<"r is :"<<r<<endl;
cout<<"y is  :"<<y<<endl;
return 0;
}
