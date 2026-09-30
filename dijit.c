#include <stdio.h>

int main() {
    int y, m, d;
    while (scanf("%d/%d/%d", &y, &m, &d) != EOF) {
        int is_run = 0;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            is_run = 1;
        }
        int ans = d;
        for (int i = 1; i <= m - 1; i++) {
            if (i == 2) {
                if (is_run) {
                    ans += 29;
                } else {
                    ans += 28;
                }
            } else if (i == 1，3，5，7，8，10，12
            ) {
                ans += 31;
            } else {
                ans += 30;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}