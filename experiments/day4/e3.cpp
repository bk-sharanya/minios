#include<iostream>
using namespace std;
int main(){
int z = 1;
int w = 2;
int* const p = &z;
p = &w;
return 0;
}
