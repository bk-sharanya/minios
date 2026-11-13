#include<iostream>
using namespace std;

int main(){
    char arr[5] = {'a','b','c','d','e'};
    char* p = arr;
    
    cout << (void*)p << endl;
    cout << (void*)(p + 1) << endl;
    cout << (void*)(p + 2) << endl;
    cout << (void*)(p + 3) << endl;
    cout << *(p + 2) << endl;
    cout << p[2] << endl;
cout<<&p;
    
    return 0;
}

