    /**
     *    author:  Mohammad Irtisum
     *    created: 09.03.2023           
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
    #define     sp                  " "
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
        
    void solve()
    {
      ll x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
     
      ll dx = x2 - x1 ;
      ll dy = y2 - y1 ;
     
      double ans = sqrt(dx * dx  + dy * dy );
      cout<<setprecision(12)<<fixed<<ans;
    }
    int main()
    {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
         
        // int t = 1;
         
        // cin >> t;
         
        // for( int test_case = 1; test_case <= t; test_case++ )
        // {
        //      //cout << "Case " << test_case << ": ";
        //      solve();
        // }
         
          solve();
        return 0;
    }