#include<iostream>
using namespace std;
int main(){
int* p = nullptr;
if(p){
   cout<<"the pointer has a value: "<<endl;
}
else{
cout<<"the pointer is empty ."<<endl;
}
cout<<*p;
return 0;
}

