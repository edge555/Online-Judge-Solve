#include <bits/stdc++.h>

#define sc scanf
#define pf printf
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    in1(n);
    while (n--)
    {
        ll a,b;
        sc("%lld %lld",&a,&b);
        pf("%lld\n",a*b);
    }
}
