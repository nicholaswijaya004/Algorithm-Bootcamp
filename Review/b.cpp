#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i=0; i<tc; i++) {
        char arr[255];
        scanf("%s", &arr);
        int len = strlen(arr);
        int result = (arr[0]-'0')+(arr[len-1]-'0');
        printf("%d\n", result);
    }
}
