#include<iostream>
using namespace std;
int main(){
  int t,n,x,r;
  cin>>t;
  int arr[t];
  for(int i=0;i<t;i++){
    cin>>n>>x;
    if(n==1 || n==2){
      r=1;
    }
    else if((n-2)%x==0){
      n = n-2;
      r=(n/x)+1;
    }
    else{
      n = n-2;
      r=(n/x)+2;
    }
    arr[i]=r;
  }
  for(int i=0;i<t;i++){
    cout<<arr[i]<<endl;
  }
  return  0;
}