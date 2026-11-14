#include<iostream>
using namespace std;
int main(){
int x = 10;
int y = 20;
double d = 30.3;
cout<<"value of x: "<<x<<endl;
cout<<"value of y: "<<y<<endl;
cout<<"value of d: "<<d<<endl;
cout<<"address of the variable x: "<<&x<<endl;
cout<<"address of the variable y: "<<&y<<endl;
cout<<"address of the variable d: "<<&d<<endl;
cout<<sizeof(int)<<endl;
cout<<sizeof(int*)<<endl;
cout<<sizeof(double)<<endl;
cout<<sizeof(double*)<<endl;
return 0;
}
