#include<iostream>
#include <climits>
using namespace std;

void maxarrsum(int *arr, int n){
    int maxsum = INT_MIN;
    for(int start = 0 ; start < n; start++){
        int sum = 0;
        
        for(int end = start; end < n; end++){
            sum += arr[end]; 
            maxsum = max(maxsum, sum);
        }
        
        cout << sum << ",";
    }
    cout << endl;
    cout << "Maximum subarray sum is: " << maxsum; 
}


int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxarrsum(arr, n);
    return 0;
}