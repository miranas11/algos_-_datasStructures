/****************
*Rotate square image by 90
*memory efficient method
****************/

#include<iostream>
using namespace std;


void rotate_image(int a[][100],int n);

int main()
{
    int m,n;
    cout<<"Enter the number of elements to be put in array : ";
    cin>>m>>n;
    int val=1;
    int a[100][100];
    for(int rows=0;rows<m;rows++)
    {
        for (int col = 0; col < n; col++)
        {
            a[rows][col]=val;
            val++;
            cout<<a[rows][col]<<" ";
        }
        cout<<endl;      
    } 

    rotate_image(a,n);

    cout<<"\n The rotated array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


void rotate_image(int a[][100],int n)
{
    //reverse rows
    
    /*
    *We can also use STL reverse()
    *reverse(a[i],a[i] + n);
    */

    for(int i=0;i<n;i++)
    {
        int start_col=0;
        int end_col=n-1;
        while(end_col>start_col)
        {
            swap(a[i][start_col],a[i][end_col]);
            start_col++;
            end_col--;
        }
    }

    //transpose matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }
}
