/****************
*soduko solver
*recursion
*book 1 --page 203
*Find all patterns for n queens to be placed in a nxn board
*tip- one row can only keep one queen
****************/
#include<iostream>
#include<cmath>
using namespace std;

//check if a number can be placed at i,j
bool canplacenumber(int soduko[][9],int i,int j,int n,int number)
{   
    //checks vertically and horizontally
    for(int x=0;x<n;x++)
    {
        if(soduko[i][x]==number || soduko[x][j]==number)
            return false;
    }

    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;

    //checks in the subbox
    for(int x=sx;x<sx+rn;x++)
    {
        for(int y=sy;y<sy+rn;y++)
        {
            if(soduko[x][y]==number)
                return false;
        }
    }

    return true;


}



bool solvesoduko(int soduko[][9],int i,int j,int n)
{   
    //base case
    if(i==n)
    {       
        int sr=sqrt(n);
        //prints solution
        for(int x=0;x<n;x++)
        {   
            //prints spaces
            for(int k=1;k<sr;k++)
            {
                if(x==k*sr)
                    cout<<endl;
            }

            for(int y=0;y<n;y++)
            {   
                //prints new line
                for(int m=1;m<sr;m++)
                {
                    if(y==m*sr)
                        cout<<" ";
                }

                cout<<soduko[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //if goes outof bound from right
    if(j==n)
        return solvesoduko(soduko,i+1,0,n);

    //if there already exists a number at i,j
    if(soduko[i][j]!=0)
        return solvesoduko(soduko,i,j+1,n);

    //loops from 1 to n to check which number can be placed
    for(int number=1;number<=n;number++)
    {
        if(canplacenumber(soduko,i,j,n,number))
        {
            //assume
            soduko[i][j]=number;

            bool couldwesolve=solvesoduko(soduko,i,j+1,n);

            if(couldwesolve)
                return true;

        }
    }       
    //backtrack
    soduko[i][j]=0;
    return false; 
}

int main()
{
    int soduko[9][9]=
                {
                    {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
                    {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
                    {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
                    {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
                    {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
                    {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
                    {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
                    {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
                    {0, 0, 5, 2, 0, 6, 3, 0, 0}, 
                };
                    
    solvesoduko(soduko,0,0,9);                
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cin>>soduko[i][j];
    //     }
    // }
}