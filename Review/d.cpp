#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i=0; i<tc; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        int min, max;
        if (a<=b) {
            min = a;
            max = b;
        } else if (a>=b) {
            max = a;
            min = b;
        }
        printf("%d %d\n", max, max+min);
    }
}
