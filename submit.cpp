
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define REP($, a, b) for (int $ = (a); $ < (b); $++)
#define LSOne(x) ((x) & (-x))


//global variables
int T, N, K;

int main() {
    int ans, p, q;
    scanf("%d", &T);
    REP(i, 0, T) {
        scanf("%d %d", &N, &K);
        ans = p = 0;
        REP(j, 0, N) {
            scanf("%d", &q);
            ans += q - p <= K ? 0 : (q - p + K - 1) / K - 1;
            p = q;
        }
        printf("%d\n", ans);
    }
    return 0;
}

