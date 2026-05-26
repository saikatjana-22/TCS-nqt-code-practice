#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline (cin,s);
    string ans=" "; 

    for (int i=0;i<s.size();i++)
    {
        if (s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            ans= ans+s[i];
        }
    }
    cout <<ans;
}