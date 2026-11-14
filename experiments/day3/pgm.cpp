#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number:"<<endl;
cin>>n;
if(n<0){
cout<<"enter a positive number"<<endl;
return 1;
}
long long sum = 0;
for(int i=1;i<=n;i++){
   sum = sum + i;
}
cout<<sum<<endl;
return 0;
}
