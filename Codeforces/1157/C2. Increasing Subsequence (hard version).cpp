#include <bits/stdc++.h>
using namespace std;

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

#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()

#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))

#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >

#define nl puts("")
#define line puts("-------");
#define dbb(x) cout<<#x<<" : "<<x<<"\n";

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const queue<T> &x)
{queue<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.front() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const stack<T> &x)
{stack<T>temp=x;cerr<<"\n-----\n";while(!temp.empty())
{cerr << temp.top() << endl;temp.pop();}cerr<<"-----\n";}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif
using ll = long long;
const int N = 100005;
const int MOD = 1000000007;

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int i,n,k;
    deque<int>dq;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        dq.pb(k);
    }
    string s="";
    int last=0;
    while(!dq.empty())
    {
        int x=dq.front(),y=dq.back();
        int mn=min(x,y),mx=max(x,y);
        if(x==y)
        {
            deque<int>dql=dq,dqr=dq;
            int lastl=last,lastr=last;
            string sl="",sr="";
            int cntl=0,cntr=0;
            while(!dql.empty() && dql.front()>lastl)
            {
                cntl++;
                sl+="L";
                lastl=dql.front();
                dql.pop_front();
            }
            while(!dqr.empty() && dqr.back()>lastr)
            {
                cntr++;
                sr+="R";
                lastr=dqr.back();
                dqr.pop_back();
            }
            //db(last,s,x,y,cntl,cntr);
            if(cntl>cntr)
                s+=sl;
            else
                s+=sr;
            break;
        }
        else if(mn>last)
        {
            if(x==mn)
            {
                s+="L";
                dq.pop_front();
            }
            else
            {
                s+="R";
                dq.pop_back();
            }
            last=mn;
        }
        else if(mx>last)
        {
            if(x==mx)
            {
                s+="L";
                dq.pop_front();
            }
            else
            {
                s+="R";
                dq.pop_back();
            }
            last=mx;
        }
        else
            break;
    }
    cout<<s.size()<<endl<<s;
}
