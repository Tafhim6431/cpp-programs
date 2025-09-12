#include<iostream>
#include <climits>
using namespace std;

int maxarrsum(int *arr,int n){
    int maxsum = 0;
    int crrsum = 0;
    for (int i = 0 ; i < n ; i++){
        crrsum += arr[i];
        maxsum= max(crrsum,maxsum);
        if(crrsum<0){
            crrsum = 0;
        }

    }
    cout <<"max sum of subarray is array " << maxsum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxarrsum(arr, n);
    return 0;
}