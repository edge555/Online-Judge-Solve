#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 1000005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
vector<ll>fib={1,1};
unordered_map<ll,bool>mp;
unordered_map<ll,int>pos,rpos;
int ind[N];
int main()
{
    mp[1]=true;
    int i;
    ll p;
    reps(i,2,31)
    {
        p=fib[i-1]+fib[i-2];
        fib.pb(p);
        pos[i]=p;
        rpos[p]=i;
        mp[p]=true;
    }
    int n,k;
    sf(n);
    queue<int>one;
    vector<int>vec;
    rep0(i,n)
    {
        sf(k);
        ind[k]=i+1;
        if(k==1)
            one.push(i+1);
        vec.pb(k);
    }
    if(one.size()>=2)
    {
        cout<<one.front();
        one.pop();
        cout<<" "<<one.front();
        return 0;
    }
    rep0(i,vec.size())
    {
        if(vec[i]==1)
            continue;
        if(mp[vec[i]])
        {
            int x=rpos[vec[i]];
            int next=fib[x+1];
            if(ind[next]!=0)
            {
                cout<<ind[vec[i]]<<" "<<ind[next]<<endl;
                return 0;
            }
        }
    }
    puts("impossible");
}
