#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_index, temp;
    
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        // 최솟값 인덱스 찾기
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // 최솟값을 현재 위치와 교환
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("[선택 정렬]\n");
    printf("정렬 전: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    selectionSort(arr, n);
    
    printf("정렬 후: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}