/****************
*Ladder Problem
*recursion
*book 1 --page 201
*Find all patterns for n queens to be placed in a nxn board
*tip- one row can only keep one queen
****************/
#include<iostream>
using namespace std;

bool issafe(int board[][10],int i,int j,int n)
{   
    //check vertically 
    for(int row=0;row<=i;row++)
    {
        if(board[row][j]==1)
            return false;     
    }

    int x=i;
    int y=j;
    //check left diagonally
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
            return false;

        x--;
        y--;    
    }
    x=i;
    y=j;
    //check right diagonally
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
            return false;

        x--;
        y++;    
    }

    return true;
}

bool solvequeen(int board[][10],int n,int i)
{   
    //base case
    if(i==n)
    {
        for(int row=0;row<n;row++)
        {
            for(int column=0;column<n;column++)
            {
                if(board[row][column]==0)
                    cout<<"_ ";
                else
                    cout<<"Q ";    
            }
            cout<<endl;
        }
        cout<<endl;

        //return true;
        //we use return false instead cause if return true then the loop in previous function will terminate and it wont check other 
        //possible value so return false even after getting a pattern it continues loop in previous function and searchs for all 
        //other patterns 
        return false;
    }


    //traverse in a row board[i][j];  
    for(int j=0;j<n;j++)
    {
        if(issafe(board,i,j,n))
        {   
            //place queen
            board[i][j]=1;

            bool nextqueenrahegie=solvequeen(board,n,i+1);
            //if recursive cases return true then return true and end loop
            if(nextqueenrahegie)
            {
                return true;
            }
            //if condition fails i.e dont satisfy then backtrack and remove the queen from its place and continue the loop
            board[i][j]=0;
           
        }
    }
    //if cant place queen then returns call to pervious function and continues loop in there;
    return false;
}

int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solvequeen(board,n,0);
}