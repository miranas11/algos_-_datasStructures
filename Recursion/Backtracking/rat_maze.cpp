#include<iostream>
using namespace std;

bool solve(char maze[][100],int output[][100],int i,int j,int n,int m)
{
    //base case
    if(i==n && j==m)
    {   

        output[i][j]=1;
        //print output
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                cout<<output[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        return true;
    }

    //if goes outof bound when going right or left
    if(i>n || j>m)
        return false;

    //if encounters a block
    if(maze[i][j]=='x' || maze[i][j]=='X')
        return false;

    output[i][j]=1;

    //recursive cases
    bool rightsuccess=solve(maze,output,i,j+1,n,m);
    bool downsuccess=solve(maze,output,i+1,j,n,m);

    //backtrack
    output[i][j]=0;
    
    if(rightsuccess || downsuccess)
        return true;

    return false;    

}

int main()
{
    int n,m;
    cin>>n>>m;
    char maze[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>maze[i][j];
        }
    }
    cout<<endl;
    int output[100][100];

    bool check=solve(maze,output,0,0,n-1,m-1);

    if(check==false)
        cout<<"Not possible paths";
}