#include<iostream>
#include <climits>
using namespace std;

void watertrap(int *bars , int n){
    int leftmax [100000];
    leftmax[0] = bars[0];

    int rightmax[100000];
    rightmax[n-1] = bars[n-1];
   
    for(int i = 1 ; i < n ; i++){
        leftmax[i] = max(bars[i-1], leftmax[i-1]);
    }

    for(int i = n-2 ; i >= 0 ; i--){
        rightmax[i] = max(bars[i+1], rightmax[i+1]);
    }
    
     int arr[1000000];
     arr[0] = 0;

     for (int i = 1;i < n-1; i++){
        int mini  = min(leftmax[i], rightmax[i]);
        arr[i] = max(0, mini - bars[i] );
     }

     int water = 0;
     for (int i = 0; i< n; i++){
        water = water + arr[i];
     }

     cout << "water trapped is " << water;
}

int main(){
    int bars[7] = {4,2,0,6,3,2,5};
    int n = sizeof(bars)/sizeof(int);

    cout << "hello" << endl;
    
    watertrap(bars, n);
    return 0;
}