#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int binary_search(int a[],int n,int key)
{
    int s=0,e=n-1;
    while(e>=s)
    {
        int m=(s+e)/2;
        if(key==a[m])
        {
            return m;
        }
        else if (a[m]>key)
        {