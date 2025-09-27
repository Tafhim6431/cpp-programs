#include<iostream>
using namespace std;


void matsort (int mat[][4], int n , int m, int key){
    for ( int i = 0 ; i<n ; i++){
        int start = 0;
        int end = m-1;

        while (start <= end ){
            int mid = (start + end )/2;

            if (mat [i][mid] == key){
                cout << "key found on the index (" << i <<  "," << mid <<")" << endl;
                break;
            }

            else if ( mat[i][mid] > key){
                end = mid - 1;

            }

            else{
                start = mid + 1;
            }
        }
    }
}
int main(){
    int mat [4][4] = {{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};


matsort(mat,4,4,33);
}