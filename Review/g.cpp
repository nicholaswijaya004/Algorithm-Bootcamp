#include <stdio.h>
#include <string.h>

void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void scanArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int leftSize = mid + 1 - left;
    int rightSize = right - mid;
    int leftArr[leftSize], rightArr[rightSize];

    for (int i=0; i<leftSize; i++) {
        leftArr[i] = arr[left+i];
    }
    for (int i=0; i<rightSize; i++) {
        rightArr[i] = arr[mid + i + 1];
    }
    int rightIdx=0, leftIdx=0, idx = left;
    while (rightIdx < rightSize && leftIdx < leftSize) {
        if (rightArr[rightIdx] < leftArr[leftIdx]) {
            arr[idx] = rightArr[rightIdx];
            rightIdx++;
            idx++;
        } else {
            arr[idx] = leftArr[leftIdx];
            leftIdx++;
            idx++;
        }
    }

    while (rightIdx < rightSize) {
        arr[idx] = rightArr[rightIdx];
        rightIdx++;
        idx++;
    }
    while (leftIdx < leftSize) {
        arr[idx] = leftArr[leftIdx];
        leftIdx++;
        idx++;
    }
}


void mergeSort(int arr[], int left, int right) {
    int mid;
    if (left >= right) {
        return;
    }
    mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    merge(arr, left, mid, right);
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    scanArr(arr, n);
    mergeSort(arr, 0, n-1);
    int median;
    for (int i=0; i<n; i++) {
        if (i == n/2) {
            median = arr[i];
        }
    }
    printf("%d", median);
}
