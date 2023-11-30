#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int ans=0,mod=1e9+7;
        int i,j;
        for(i=n;i>=1;i--)
        { long long int p=1;
            for(j=n;j>=i;j--)
            p=p*j;
            ans=(ans+p)%mod;
        }
        cout << (ans+1)%mod << "\n";
    }
}