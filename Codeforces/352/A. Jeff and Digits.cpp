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
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,i,fv=0,zr=0,k;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        if(k==0)
            zr++;
        else
            fv++;
    }
    if(zr==0)
    {
        pf("-1");
        return 0;
    }
    fv/=9;
    if(fv==0)
        pf("0");
    else
    {
        rep0(i,fv*9)
            pf("5");
        rep0(i,zr)
            pf("0");
    }
}
