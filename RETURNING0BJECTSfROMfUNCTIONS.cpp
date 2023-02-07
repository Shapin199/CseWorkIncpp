/**
 *    author:  Mohammad Irtisum
 *    created: 7.02.2023        
**/
#include<bits/stdc++.h>
using namespace std;
     
using       ll          =       long long int;
using       ull         =       unsigned long long int;
     
#define     all(x)              x.begin(), x.end()
#define     rall(x)             x.rbegin(), x.rend() 
     
    
#define     in                  insert
#define     pb                  push_back
#define     ff                  first
#define     ss                  second
#define     mp                  make_pair
#define     ub                  upper_bound
#define     lb                  lower_bound
     
#define     endl                "\n"
#define     nl                  cout << "\n"
#define     YES                 cout << "YES\n"
#define     NO                  cout << "NO\n"
#define     Yes                 cout << "Yes\n"
#define     No                  cout << "No\n"
#define     debug(x)            cout << "Debug of " << #x << ": " << x << endl;
     
const int   mod         =       1e9 + 7;
     
     
bool        odd(ll num)         { return ((num & 1) == 1);  }
bool        even(ll num)        { return ((num & 1) == 0);  }
ll          sum(ll n)           { return ( (n*(n+1)) / 2 ); }
ll          ceil(ll a,ll b)     { return ( (a+(b-1)) / b ); }
     
      
class  Stu
{
   public:
   double marks1, marks2;
};

 Stu createStudent()
{
    Stu student;
    student.marks1 = 96.5;
    student.marks2 = 75.0;
    
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;
    return student;
}
     
int main()
{
   Stu dist;
  dist = createStudent();

return 0;
}