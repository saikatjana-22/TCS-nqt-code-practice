 #include<bits/stdc++.h>
 using namespace std;
 void reversestring (string &str)
 {
    int start=0,end =str.size()-1;
    while (start<end)
    {
        swap (str[start],str[end]);
        start++;
        end--;
    }
 };
 int main ()
 {
    string s;
    getline (cin ,s);
     reversestring(s);
     cout <<s;
 }