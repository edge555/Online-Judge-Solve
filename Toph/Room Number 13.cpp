#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;
int ara[1000005];
int main()
{
    int t;
    sf(t);
    while(t--)
    {
        int n,mx,i;
        sf(n);
        bool chk=false;
        for (i=0;i<n;i++)
            scanf("%d",&ara[i]);
        mx=ara[n-1];
        int cnt=0;
        for (i=n-1;i>=0;)
        {
            cnt++;
            while(ara[i]<=mx && i>=0)
            {
              ara[i]=-1;
              i--;
            }
            mx=max(mx,ara[i]);
        }
        cout<<cnt<<endl;
    }
}
