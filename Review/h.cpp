#include <stdio.h>
#include <string.h>

int main() {
    char arr[255];
    scanf("%s", arr);
    int len = strlen(arr);

    int temp=0;
    for (int i=0; i<len; i++) {
        if (arr[i] == '.') {
            temp++;
        } else if (arr[i] == '-') {
            if (arr[i+1] == '.') {
                temp++;
                i++;
            } else if (arr[i+1] == '-') {
                temp++;
                i++;
            }
        }
    }

    int dictionary[temp];
    for (int i=0; i<temp; i++) {
        dictionary[i] = 0;
    }

    for (int i=0,j=0; i<len; i++) {
        if (arr[i] == '.') {
            dictionary[j] = 0;
            j++;
        } else if (arr[i] == '-') {
            if (arr[i+1] == '.') {
                dictionary[j] = 1;
                j++;
                i++;
            } else if (arr[i+1] == '-') {
                dictionary[j] = 2;
                j++;
                i++;
            }
        }
    }
    for (int i=0; i<temp; i++) {
        printf("%d", dictionary[i]);
    }
}
