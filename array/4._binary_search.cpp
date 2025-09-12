#include<iostream>
using namespace std;

int binarysearch(int *arr,int n , int key){
  int start = 0;
  int end = n-1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] == key) {
      cout << "the key found on the index " << mid << endl;
      break;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
}

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
            
  int n = sizeof(arr)/sizeof(int);

  binarysearch(arr,n,23);
  return 0;  
}
