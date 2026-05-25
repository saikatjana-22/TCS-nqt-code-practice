  #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    string s;
    getline (cin,s);
     
    int vowels=0,consonent=0,space=0;
    for (int i =0;i<s.size();i++)
    {
      char ch  = tolower (s[i]);
      if (s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      {
         vowels++;
      }
      else if (s[i]>='a'&&s[i]<='z')
      {
         consonent++;
      }
      else space++;
    }
    cout <<"vowels are "<< vowels<<endl;
    cout << "consonent are "<< consonent<< endl;
    cout << "Space are" << space << endl;
 }
