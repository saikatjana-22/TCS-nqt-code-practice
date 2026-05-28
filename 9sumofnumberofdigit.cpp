 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    string s;
    getline (cin,s);
    int sum=0,num=0;
    int c=0;

    for (int i=0;i<s.size();i++)
    {
        if (s[i]>='0'&& s[i]<='9')
        {
            c++;
            num = num*10+(s[i]-'0');
        }
        else 
        {
            sum =sum+num;
            num =0;
        }
    }
    sum = sum +num;
    cout << sum ;
    cout << c;
 }