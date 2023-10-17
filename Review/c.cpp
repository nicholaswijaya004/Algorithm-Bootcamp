#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i=0; i<tc; i++) {
        int m,s;
        scanf("%d %d", &m, &s);
        int result;
        result = m/s;
        printf("%d\n", result);
    }
}
