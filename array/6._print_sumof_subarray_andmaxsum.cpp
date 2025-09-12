#include<iostream>
using namespace std;

void printconti(int *arr, int n){ 
    int maxsum = 0;
    for(int start = 0 ; start < n ; start++){     // to get a start point
        for(int end = start ; end < n ; end++){   // to get a end point
            int sum = 0;

            for(int k = start ; k <= end ; k++){
                sum = sum + arr[k];
                
                if(sum > maxsum){
                    maxsum = sum;
                } 
            }
            
            cout<<sum<<","; 

        } 
        cout<<endl;
    }
    cout<<"Maximum sum is : "<<maxsum<<endl;
}


int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printconti(arr,n);
    return 0;
}
