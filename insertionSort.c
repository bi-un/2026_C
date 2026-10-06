#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;
    
    for (i = 1; i < n; i++) {
        key = arr[i]; // 현재 삽입할 데이터
        j = i - 1;
        
        // 정렬된 배열을 뒤에서부터 탐색하며 key보다 큰 데이터를 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // 올바른 위치에 key 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {31, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("[삽입 정렬]\n");
    printf("정렬 전: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    insertionSort(arr, n);
    
    printf("정렬 후: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}