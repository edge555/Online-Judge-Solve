#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int q;
    sf(q);
    while(q--)
    {
        int n,i;
        sf(n);
        string a;
        cin>>a;
        bool chk=false;
        for (i=0;i<n/2;i++)
        {
            if(abs(a[i]-a[n-i-1])==2 || a[i]==a[n-1-i])
                continue;
            chk=true;
            puts("NO");
            break;
        }
        if(!chk)
            puts("YES");
    }
}
