/****************
*SORT THE STRINGS (HACKER BLOCKS)
*https://hack.codingblocks.com/app/practice/1/1042/problem
****************/

#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

//to get the number corresponding to key
string extracttokenfromkey(string s,int key)
{
    char *c=strtok((char *)s.c_str()," ");
    key--;
    
    while (key>0)
    {
        c=strtok(NULL," ");
        key--;
    }
    
    return (string)c;
}


int convertToInt(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=(s[i]-'0') * p;
        p *= 10;
    }
    return ans;
}

//comperator to put in sort
bool numericCompare(pair<string,string> s1,pair<string,string> s2)
{
    string k1=s1.second;
    string k2=s2.second;

    return convertToInt(k1) < convertToInt(k2);
}

bool lexioCompare(pair<string,string> s1,pair<string,string> s2)
{
    string k1=s1.second;
    string k2=s2.second;

    return k1 < k2;
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    
    string reversal,ordering;
    int key;

    cin>>key>>reversal>>ordering;

    //creates a pair of input string and the no. extracted from the key no.
    pair<string,string> strpair[100];
    for(int i=0;i<n;i++)
    {
        strpair[i].first=s[i];
        strpair[i].second=extracttokenfromkey(s[i],key);
    }

    //sorts the array numeric or lexiographic
    if(ordering=="numeric")
    {
        sort(strpair,strpair+n,numericCompare);
    }
    else
    {
        sort(strpair,strpair+n,lexioCompare);
    }

    //reverses the array
    if(reversal=="true")
    {
        for(int i=0;i<n;i++)
        {
            reverse(s,s+n);
        }
    }

    //prints the array
    for(int i=0;i<n;i++)
    {
        cout<<strpair[i].first<<endl;
    }
    

}