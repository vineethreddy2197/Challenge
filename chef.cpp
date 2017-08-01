#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0;
    int b=0;
    int f1=0;
    int f2=0;
    if(s.length()%2!=0)
    {
    for(int i=0;i<s.length()-1;i=i+2)
    {
        if(i=s.length()-2)
        {
            if(s.at(i)=='0')
            {
                break;
            }
            else
            {
                a++;
                break;
            }
        }

        if(s.at(i)=='0')
        {
            f1=1;
        }
        else if(s.at(i+1)=='1')
        {
            f2=1;
        }
        if(f1==1 && f2==1)
        {
            f1=0;
            f2=0;
            continue;
        }
        else if((f1==0 && f2==1) || (f2==0 && f1==1))
        {
            f1==0;
            f2==0;
            a++;
        }
        else if(f2=0 && f1==0)
        {
            f1==0;
            f2==0;
            a=a+2;
        }
    f1=0;
    f2=0;
    for(int i=0;i<s.length();i=i+2)
    {
        if(i=s.length()-2)
        {
            if(s.at(1)=='1')
            {
                break;
            }
            else
            {
                b++;
                break;
            }
        }

        if(s.at(i)=='1')
        {
            f1=1;
        }
        else if(s.at(i+1)=='0')
        {
            f2=1;
        }
        if(f1==1 && f2==1)
        {
            f1=0;
            f2=0;
            continue;
        }
        else if((f1==0 && f2==1) || (f2==0 && f1==1))
        {
            f1==0;
            f2==0;
            b++;
        }
        else if(f2=0 && f1==0)
        {
            f1==0;
            f2==0;
            b=b+2;
        }
    }
    }

    }
    for(int i=0;i<s.length();i=i+2)
    {
        if(s.at(i)=='0')
        {
            f1=1;
        }
        else if(s.at(i+1)=='1')
        {
            f2=1;
        }
        if(f1==1 && f2==1)
        {
            f1=0;
            f2=0;
            continue;
        }
        else if((f1==0 && f2==1) || (f2==0 && f1==1))
        {
            f1==0;
            f2==0;
            a++;
        }
        else if(f2=0 && f1==0)
        {
            f1==0;
            f2==0;
            a=a+2;
        }
    }
    f1=0;
    f2=0;
    for(int i=0;i<s.length();i=i+2)
    {
        if(s.at(i)=='1')
        {
            f1=1;
        }
        else if(s.at(i+1)=='0')
        {
            f2=1;
        }
        if(f1==1 && f2==1)
        {
            f1=0;
            f2=0;
            continue;
        }
        else if((f1==0 && f2==1) || (f2==0 && f1==1))
        {
            f1==0;
            f2==0;
            b++;
        }
        else if(f2=0 && f1==0)
        {
            f1==0;
            f2==0;
            b=b+2;
        }
    }
    if(a>=b)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
}
