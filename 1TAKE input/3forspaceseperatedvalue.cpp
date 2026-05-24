//   #include<bits/stdc++.h>
// using namespace std;
// int main ()

// {
// // for space separated value;
// string s;
// getline (cin,s);
// stringstream ss(s);
// vector<int>arr;
// int num;
// while (ss>>num)
// {
// arr.push_back(num);
// }

// for (int a: arr)
// {
// cout<< a<< " ";
// }
// }

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline (cin,s);
    stringstream ss(s);
      vector<int>arr;
      int num ;
      while (ss>> num) // jotokhon ss er value num e insert korte parchi 
      {
        arr.push_back(num);
      }
      for (int a: arr)
      {
        cout<< a << " ";
      }
}



