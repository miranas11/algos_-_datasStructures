/****************
*MAX SUBMATRIX SUM
*SORTED ROW AND COLUMN WISE MATRIX
****************/

#include<iostream>
#include<algorithm>
using namespace std;

void getsmaxsubarraysum(int a[][100],int n,int m)
{
    int sufsum[100][100]={0};
    int sum=0;

    //gets the suffix sum matrix
    for(int i=n-1;i>=0;i--)
    {
        sum=0;
        for(int j=m-1;j>=0;j--)
        {
            sum+=a[i][j];
            sufsum[i][j]=sum+sufsum[i+1][j];
        }
    }
    

    int maximumsum=sufsum[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            maximumsum=max(maximumsum,sufsum[i][j]);
        }
    }
    cout<<"MAX SUBARRAY SUM IS: "<<maximumsum<<endl;

}




int main()
{
    int m,n,key;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>n>>m;
    int a[100][100];
    cout<<"Enter the sorted array :"<<endl;
    for(int rows=0;rows<n;rows++)
    {
        for (int col = 0; col < m; col++)
        {
            cin>>a[rows][col];
        }  
    } 

    getsmaxsubarraysum(a,n,n);
    



 
}
