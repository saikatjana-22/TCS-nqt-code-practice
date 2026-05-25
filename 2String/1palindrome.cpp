#include<bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    getline (cin,s);
    int start =0, end= s.size()-1;
    bool ispalindrome=true;
    while (start<end)
    {
        if (s[start]!=s[end])
        {
            ispalindrome=false;
        }
        start++;
        end--;

    }

    if(ispalindrome)
    {
        cout<<"true";
    }
    else 
    cout<< false;
}


