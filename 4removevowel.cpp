 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 { string s;
    getline (cin,s);
    string ans =" ";
    for (int i=0;i<s.size();i++)
    {
        char ch =tolower (s[i]);
        if (s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
          ans = ans+s[i];
        }
     
    }
       cout << ans;
    return 0;
 }
