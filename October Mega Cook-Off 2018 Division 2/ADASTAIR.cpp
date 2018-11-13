#include "../competitive.h"

namespace ADASTAIR {
// **DELIM**: DON'T REMOVE THIS LINE!!!

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

// **DELIM**: DON'T REMOVE THIS LINE!!!
}