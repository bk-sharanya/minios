#include<iostream>
using namespace std;
int main(){
for(int i=0;i<5;i++){
int* p = new int(i);
delete p;
}
return 0;
}
