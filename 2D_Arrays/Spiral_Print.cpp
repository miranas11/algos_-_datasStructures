/****************
*Spiral Print
*Prints elemnts taken from array in spiral form
*asked in interviews
****************/

#include<iostream>
using namespace std;


void spiral_pattern(int a[][100],int m,int n);

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

    spiral_pattern(a,m,n);
}


void spiral_pattern(int a[][100],int m,int n)
{
    int start_row=0;
    int end_row=m-1;
    int start_col=0;
    int end_col=n-1;

    cout<<"\nThe Spiral Pattern is :"<<endl;

    while(start_row<=end_row && start_col<=end_col)
    {
        for(int col=start_col;col<=end_col;col++)
        {
            cout<<a[start_row][col]<<" ";
        }
        start_row++;

        for(int row=start_row;row<=end_row;row++)
        {
            cout<<a[row][end_col]<<" ";
        }
        end_col--;

        if(end_row>=start_row)
        {
            for(int col=end_col;col>=start_col;col--)
            {
                cout<<a[end_row][col]<<" ";
            }
            end_row--;
        }
        

        if(end_col>=start_col)
        {
            for(int row=end_row;row>=start_row;row--)
            {
                cout<<a[row][start_col]<<" ";
            }
            start_col++;
        }
        

    }
}
