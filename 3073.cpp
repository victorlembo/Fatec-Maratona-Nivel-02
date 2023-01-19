#include <stdio.h>
#include <string.h>

#define MAXN 100
#define MAXD 20

int d, n, w[MAXN][MAXD + 1], v[MAXN];

int main() {
    scanf("%d%d", &d, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
        for (int j = 1; j <= d; j++) {
            scanf("%d", &w[i][j]);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int value = 0;
        for (int j = 1; j <= d; j++) {
            value += w[i][j];
        }
        ans += value;
    }
    printf("%d\n", ans);
    return 0;
}
