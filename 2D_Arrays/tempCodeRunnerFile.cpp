/****************
*SUM OF ALL ELEMNTS OF MATRIX #2
*O(n^4)
****************/

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int presum=0;
    cin>>n>>m;
    int a[100][100]={0};
    int pre[100][100]={0};

    // input the array and adds the elements in rows
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            presum+=a[i][j];
            pre[i][j]=presum;
        }
        presum=0;
    }

    // adds the elements the in columns
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            presum+=pre[i][j];
            pre[i][j]=presum;
        }
        presum=0;
    }

    cout<<endl;

    int sum=0;
    
    for(int ti=0;ti<n;ti++)
    {
        for(int tj=0;tj<m;tj++)
        {
            for(int bi=ti;bi<n;bi++)
            {
                for(int bj=tj;bj<m;bj++)
                {
                    sum+=pre[bi][bj]-pre[ti-1][bj]-pre[bi][tj-1]+pre[ti-1][tj-1];
                }
            }
        }
    }

    cout<<sum;
    return 0;
}

