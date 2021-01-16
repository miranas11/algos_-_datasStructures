#include<iostream>
using namespace std;

void subset(char a[],int i,int j,char output[])
{
    //base case
    if(a[i]=='\0')
    {
        output[j]='\0';
        cout<<output<<" ";
        return;
    }

    //include the current char
    output[j]=a[i];
    subset(a,i+1,j+1,output);

    //exclude the current char
    output[j]='\0';
    subset(a,i+1,j,output);
        




}


int main()
{
    int n;
    cin>>n;
    char a[n];
    char output[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    subset(a,0,0,output);
}