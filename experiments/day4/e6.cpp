#include<iostream>
using namespace std;
void printsize(int a[]){
cout<<sizeof(a);
}
int main(){
int arr[5] = {10,20,30,40,50};
cout<<sizeof(arr)<<endl;
printsize(arr);
return 0;
}
