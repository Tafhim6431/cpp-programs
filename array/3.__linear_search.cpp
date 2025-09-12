#include<iostream>
using namespace std;

int linearsearch(int *arr,int n , int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      cout<<"the key found on the index "<<i<<endl;
      return i;
    }
  }
  cout<<"the key is not found"<<endl;
  return -1;
}


int main(){
    int arr[] = {1,23,45,67,45,34,22,11,31,42,80,97,68,54,32,21,11,9,7,5,3,2,1};
    int n = sizeof(arr)/sizeof(int);                                         
    linearsearch(arr,n,97);
    return 0;
}