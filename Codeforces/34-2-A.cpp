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
    vector<int>vec;
    int i,n,k;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
    }
    int x,y,ans=INT_MAX;
    rep0(i,n)
    {
        if(i==n-1)
        {
            k=abs(vec[i]-vec[0]);
            if(k<ans)
            {
                ans=k;
                x=i+1;
                y=1;
            }
        }
        else
        {
            k=abs(vec[i+1]-vec[i]);
            if(k<ans)
            {
                ans=k;
                x=i+2;
                y=i+1;
            }
        }
    }
    cout<<x<<" "<<y;
}
