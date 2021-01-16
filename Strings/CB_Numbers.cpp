/***********
*CB NUMBERS
*https://online.codingblocks.com/app/player/94092/content/77979/4749/code-challenge
*Deepak and Gautam are having a discussion on a new type of number that they call Coding Blocks Number or CB Number. They use following criteria to define a CB Number.
*
*0 and 1 are not a CB number.
*2,3,5,7,11,13,17,19,23,29 are CB numbers.
*Any number not divisible by the numbers in point 2( Given above) are also CB numbers.
*Deepak said he loved CB numbers.Hearing it, Gautam throws a challenge to him.
*
*Gautam will give Deepak a string of digits. Deepak's task is to find the number of CB numbers in the string.
*
*CB number once detected should not be sub-string or super-string of any other CB number.
*Ex- In 4991, both 499 and 991 are CB numbers but you can choose either 499 or 991, not both.
*
*Further, the CB number formed can only be a sub-string of the string.
*Ex - In 481, you can not take 41 as CB number because 41 is not a sub-string of 481.
*
*As there can be multiple solutions, Gautam asks Deepak to find the maximum number of CB numbers that can be formed from the given string.
*
*Deepak has to take class of Launchpad students. Help him by solving Gautam's challenge.
*************/

#include<iostream>
#include<string>

using namespace std;

bool isCB(long long sub)
{
    
    if(sub==0||sub==1)
    {
        //cout<<endl;
        return false;
    }

    int cb[10]={2,3,5,7,11,13,17,19,23,29};
    for(int i=0;i<10;i++)
    {
        if(sub==cb[i])
        {
            return true;
        }
    }

    for(int i=0;i<10;i++)
    {
        if(sub%cb[i]==0)
        {
            return false;
        }
    }

    return true;
}

bool isvalid(string sub,bool isvisited[],int start,int end)
{
    for(int i=start;i<end;i++)
    {
        if(isvisited[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin.get();
    getline(cin,s);
    bool isvisited[s.length()];
    for(int i=0;i<s.length();i++)
    {
        isvisited[i]=false;
    }
    for(int len=1;len<s.length();len++)
    {
        for(int start=0;start<=s.length()-len;start++)
        {
            int end=start+len;

            string substring=s.substr(start,len);               //string substr (size_t pos = 0, size_t len = npos);
            //cout<<start<<","<<end<<","<<substring<<"   ";

            if(isCB(stoll(substring)) && isvalid(substring,isvisited,start,end))
            {
                count++;
                cout<<substring<<" ";
                for(int i=start;i<end;i++)
                {
                    
                    isvisited[i]=true;
                }
            }
        }
    }

    cout<<count;
   
}