/*
Leetcode problem:2022. Convert 1D Array Into 2D Array
Brute forces uses two loops to fill the 2D array, but we can do it in one loop by using the formula:
row = i / number_of_columns
column = i % number_of_columns
This way, we can directly calculate the position in the 2D array for each element in the 1D array without needing nested loops. The time complexity of this approach is O(n), where n is the number of elements in the 1D array, since we are iterating through it once. The space complexity is O(m*p) for the 2D array, where m is the number of rows and p is the number of columns.
*/

#include<iostream>
using namespace std;
void convertarray(int *array,int n){
    int m=3; int p=2;
    int matrix[m][p]; int idx=0;
    if (n!= m*p)
    {
       cout<<" 2D matrix is not possible for this array";
    }
    for (int i = 0; i < n; i++)
    {
        int r=i/p;
        int c=i%p;
        matrix[r][c]=array[i];
    }
    
    for (int i = 0; i <m; i++)
    {
       for (int j = 0; j < p; j++)
       {
        cout<<matrix[i][j]<<" ";
       }
       cout<<"\n";
    }
    
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    convertarray(arr,n);
    return 0;
}