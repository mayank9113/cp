#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
      long long sum_first=0, sum_second=0;
       
       for(int i=0; i<n; )
       {
           sum_first = sum_first + a[i];
           sum_second=sum_second + b[i];
           
           if(i+1<n)
            {
               sum_first = sum_first + b[i+1];
               sum_second=sum_second + a[i+1];
            }
           i=i+2;
       }
  return (sum_first< sum_second) ? sum_first:sum_second;  
    }
};

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
