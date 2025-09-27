#include<iostream>
#include <climits>
using namespace std;

int diagonalsum (int matrix[][4],int n , int m){
  int  sum = 0;
  for ( int i = 0 ; i < n; i++){
    sum = sum + matrix[i][i];
    if(i != n-i-1){                   // if it is false it points to the center element and will add the element twice 
      sum = sum + matrix [i][n-i-1];  // the condition is the edge case for odd matrix
    }
  }
  cout << "sum of digonals is " << sum ;
  return sum;
}


int main (){
    
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16},};

    diagonalsum(matrix,4,4);
    

}