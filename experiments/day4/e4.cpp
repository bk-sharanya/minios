#include<iostream>
using namespace std;
void printaddress(int a[],int size){
for(int i=0;i<size;i++){
cout<<&a[i]<<endl;
}
}
void printarray(int a[],int size){
for(int i=0;i<size;i++){
cout<<a[i]<<endl;
}
}
int main(){
int arr[5] = {10,20,30,40,50};
printaddress(arr,5);
cout<<sizeof(arr)<<endl;
cout<<sizeof(arr)/sizeof(arr[0])<<endl;
printarray(arr,5);
cout<<endl;
int* ptr = &arr[0];
cout<<*ptr;
return 0;
}
