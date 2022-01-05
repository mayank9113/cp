#include<bits/stdc++.h>
using namespace std;

int solve (int N) 
{  
    int x;
  for(x=2; x<=sqrt(N); x++)
   { if(N % x == 0)
     break;  }
     if (x>sqrt(N))
      { cout<<"No"; }
     else 
     cout<<"Yes";
     return 0;
}

int main() {

    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        solve(N);
        cout<<"\n"; 
    }
}