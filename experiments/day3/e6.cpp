#include<iostream>
using namespace std;
int* bad(){
int x=5;
return &x;
}
int main(){
bad();
return 0;
}

