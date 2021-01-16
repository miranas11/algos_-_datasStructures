/****************
*SUM OF ALL ELEMNTS OF MATRIX for a single submatrix
*
****************/

#include<iostream>
using  namespace std;
int main()
{
    int q;
    cin>>q;
    int n,m,a[100][100]={0};
    int pre[100][100]={0};
    int presum=0;


    for(int t=0;t<q;t++)
    {
        cin>>n>>m;
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


        int a,b,c,d;
        cout<<"Enter the subarray top i - j and bottom i -j"<<endl;
        cin>>a>>b>>c>>d;

        int s1=pre[c][d];
        int s2=pre[c][b-1];
        int s3=pre[a-1][d];
        int s4=pre[a-1][b-1];
        //the same formula as sum of submatrix #2
        cout<<s1-s2-s3+s4<<endl;

    }
}