//https://www.spoj.com/problems/EASYMATH/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, m, c, d, t, ans, cont, denom, MAXLL = 1e18+5;
ll arr[5];

ll gcd(ll a, ll b){
    if (a == 0) return b;
    return gcd(b%a, a);
}

ll lcm(ll a, ll b){
    a = a/ gcd(a,b);
    return (a > MAXLL / b)? MAXLL : a*b;
}

//0110
int32_t main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld%lld%lld", &n, &m, &c, &d);
        arr[0] = c, arr[1] = c+d, arr[2] = c+2*d, arr[3] = c+3*d, arr[4] = c+4*d;
        ll subsets = (1<<5) - 1;
        ans = 0;
        for(ll i = 1; i <= subsets; ++i){
            cont = 0, denom = 1;
            for(ll b = 0; b <= 4; ++b){
                if(i & (1<<b)){
                    cont++;
                    denom = lcm(denom, arr[b]);
                }
            }
            ll divisors = (m / denom) - ceil(n/float(denom)) + 1;
            if(cont & 1){
                ans += divisors;
            }
            else{
                ans -= divisors;
            }
        }
        printf("%lld\n", m - n + 1 - ans);
    }
    return 0;
}
// 1 - 100
// (100 - min / razon) +1
// 0001 -> 2    -> 5
// 0010 -> 4    -> 2
// 0011 -> 2 4  -> 1
// 0100 -> 8    -> 1
// 0101 -> 2 8
// 0110 -> 4 8
// 0111 -> 2 4 8
// 1000 -> 10   -> 1
// 1001 -> 2 10
// 1010 -> 4 10
// 1011 -> 2 4 10
// 1100 -> 8 10
// 1101 -> 2 8 10
// 1110 -> 4 8 10
// 1111 -> 2 4 8 10
