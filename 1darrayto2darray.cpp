#include<iostream>
using namespace std;
void convertarray(int *array,int n){
    int m=3; int p=2;
    int matrix[m][p]; int idx=0;
    if (sizeof(array)!= m*p)
    {
       cout<<" 2D matrix is not possible for this array";
    }
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < p; j++)
        {
           matrix[i][j]=array[idx];
           idx++;
        }
        
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