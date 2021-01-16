/****************
*Wave Print
*Prints elemnts taken from array in wave form
****************/

#include<iostream>
using namespace std;


int main()
{
    int m,n;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>m>>n;

    int a[100][100];
    for(int rows=0;rows<m;rows++)
    {
        for (int col = 0; col < n; col++)
        {
            cin>>a[rows][col];
        }
        
    }

    cout<<"The 2D array is :"<<endl;
    for(int rows=0;rows<m;rows++)
    {
        for (int col = 0; col < n; col++)
        {
            cout<<a[rows][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nThe Wave Pattern is :"<<endl;
    for(int col=0;col<n;col++)
    {
        if (col%2==0)
        {
            for(int row=0;row<m;row++)
            {
                cout<<a[row][col]<<" ";
            }
        }
        else
        {
            for(int row=m-1;row>=0;row--)
            {
                cout<<a[row][col]<<" ";
            }
        }
        
        
        
    }


  
}
