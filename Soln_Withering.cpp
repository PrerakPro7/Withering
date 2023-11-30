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
        long long int p=1,ans=0,mod=1e9+7;
        int i;
        for(i=n;i>=1;i--)
        {
            p=(p*i)%mod;
            ans=(ans+p)%mod;
        }
        cout << (ans+1)%mod << "\n";
    }
}