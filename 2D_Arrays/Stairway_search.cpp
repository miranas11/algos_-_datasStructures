/****************
*Staircase Search
*Most optimised way to search in  sorted 2D array
*asked in interview
*better than linear or binary search
****************/

#include<iostream>
#include<algorithm>
using namespace std;


void staircase_search(int a[][100],int m,int n,int k);

int main()
{
    int m,n,key;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>m>>n;
    int a[100][100];
    cout<<"Enter the sorted array :"<<endl;
    for(int rows=0;rows<m;rows++)
    {
        for (int col = 0; col < n; col++)
        {
            cin>>a[rows][col];
        }  
    } 
 

    cout<<"\nEnter the element to be searched :";
    cin>>key;

    staircase_search(a,m,n,key);
}


void staircase_search(int a[][100],int m,int n,int k)
{
    int i=0;
    int j=n-1;
    while(i<m && j>=0)
    {
        cout<<a[i][j]<<" ";
        if(a[i][j]== k)
        {
            cout<<"Found "<<k<<" at row: "<<i+1<<" and column: "<<j+1;
            return;
        }
        else if(k>a[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<"Not Found"<<endl;
    return;
}
