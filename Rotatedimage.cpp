/*
  Leetcode question number=48(Matrix is rotated by 90 degree in clockwise direction)
  Approach:
  1. Transpose of the matrix
  2. reverse the transposed matrix
*/

#include<iostream>
using namespace std;
void rotatematrix(int matrix[][3],int m,int n){
   // transpose of the matrix
   for (int i = 0; i <m ; i++)
   {
    for (int j = i; j <n; j++)
    {
       swap (matrix[i][j],matrix[j][i]);
    }
    
   }
   //reverse of the matrix
   for (int i = 0; i < m; i++)
   {
     for (int j = 0; j <n/2; j++)
     {
        swap(matrix[i][j],matrix[i][n-1-j]);
     }
     
   }
   // printing the matrix
   for (int i = 0; i < m; i++)
   {
   for (int j = 0; j <n; j++)
   {
   cout<<matrix[i][j]<<" ";
   }
     cout<<endl;
   }
   
   
   
}
int main(){
    int noofrows=3;
    int noofcolumns=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotatematrix(matrix,noofrows,noofcolumns);
    return 0;
}