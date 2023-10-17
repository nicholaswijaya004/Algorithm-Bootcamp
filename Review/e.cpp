#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i=0; i<tc; i++) {
        char arr[255];
        scanf("%s", arr);
        int len = strlen(arr);

        int counter=0;
        for (int i=0; i<len; i++) {
            if (arr[i] == '4') {
                counter++;
            } else {
                counter+=0;
            }
        }
        printf("%d\n", counter);
    }
}
