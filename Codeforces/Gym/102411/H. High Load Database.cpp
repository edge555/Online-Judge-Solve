#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
unordered_map<ll,ll>mp;
int main()
{
    ll i,n,k,mx=-1;
    vector<ll>vec={0};
    sl(n);
    rep(i,n)
    {
       sl(k);
       mx=max(mx,k);
       vec.pb(vec[i-1]+k);
    }
    int q;
    sf(q);
    while(q--)
    {
        sl(k);
        if(k<mx)
        {
            puts("Impossible");
            continue;
        }
        if(mp[k])
        {
            pf("%lld\n",mp[k]);
            continue;
        }
        ll now,cnt=0,x=1;
        while(1)
        {
            if(x>n)
                break;
            now=vec[x-1]+k;
            ll ind=upper_bound(all(vec),now)-vec.begin();
            cnt++;
            x=ind;
        }
        mp[k]=cnt;
        pf("%lld\n",cnt);
    }
}
