#include<iostream>
using namespace std;
void takeinput(int* arr,int size){
for(int i=0;i<size;i++){
cin>>arr[i];
}
}
void printsquare(int* arr,int size){
for(int i=0;i<size;i++){
arr[i]=arr[i]*arr[i];
cout<<arr[i]<<endl;
}
}
int main(){
int n;
cout<<"enter the size:"<<endl;
cin>>n;
int* arr =  new int[n];
cout<<"enter the values:"<<endl;
takeinput(arr,n);
printsquare(arr,n);
delete[] arr;
arr = nullptr;
return 0;
}
