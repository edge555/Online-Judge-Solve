#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 20001
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
unordered_map<string,int>mp;
unordered_map<int,int>indeg;
vector<int>grid[N];
vector<int>vec;
priority_queue<int,vector<int>,greater<int> >pq;
bool vis[N];
int ind;
void reset(int n)
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        vis[i]=false;
    }
    mp.clear();
    vec.clear();
    indeg.clear();
}
void topsort()
{
    int i;
    rep(i,ind)
    {
        if(!indeg[i])
            pq.push(i);
    }
    while(!pq.empty())
    {
        int k=pq.top();
        pq.pop();
        vec.pb(k);
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            indeg[p]--;
            if(!indeg[p])
                pq.push(p);
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i;
        sf(n);
        ind=0;
        rep0(i,n)
        {
            string a,b;
            cin>>a>>b;
            if(!mp[a])
                mp[a]=++ind;
            if(!mp[b])
                mp[b]=++ind;
            int x=mp[a],y=mp[b];
            grid[x].pb(y);
            indeg[y]++;
        }
        topsort();
        pf("Case %d: ",t);
        if(vec.size()==ind)
            pf("Yes\n");
        else
            pf("No\n");
        reset(ind);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
