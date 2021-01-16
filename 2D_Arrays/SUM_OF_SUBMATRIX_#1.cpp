/****************
*SUM OF ALL  SUBMATRIX #1
*BRUTE WAY FORCE
****************/

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[100][100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int sum=0;
    
    for(int ti=0;ti<n;ti++)
    {
        for(int tj=0;tj<m;tj++)
        {
            for(int bi=ti;bi<n;bi++)
            {
                for(int bj=tj;bj<m;bj++)
                {
                    for(int i=ti;i<=bi;i++)
                    {
                        for(int j=tj;j<=bj;j++)
                        {
                            sum+=a[i][j];
                        }
                    }
                }
            }
        }
    }

    cout<<sum;

}

