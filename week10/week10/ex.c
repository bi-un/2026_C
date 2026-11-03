#include <stdio.h>

int binarySearch (int arr[], int size, int target) {
    int left = 0;   //시작 위피를 0으로설정
    int right = size - 1;   //끝 위치 배열 크기를 -1
    //시작 위치가 끝 위치보다 작더나 같은 동안 반복한다.
    while(left <= right){
        int mid = (left + right);   //중간 위치 계산
        //만약 중간 위치의 값이 찾을 값과 같다면 중간위치를 반환하고 탐색을 종료한다.
        if (arr[mid] == target) {
            return mid;
        }
        //그렇지 않고 중간 위치와 같이 찾을 값보다 작다면 시작 위치를 중간 위치 +1로 변경
        else if (arr[mid]<target) {
            left = mid +1;
        }
        //그렇지 않다면 끝 위치를 중간 위치 -1로 변경
        else {
            right = mid -1;
        }

    }
    return -1; //반복이 종료될 떄 까지 값을 찾지 못했다면 -1을 반환한다.
}

int main() {
    int arr[] = [2,5,8,12,16,23,38,56,72,91];
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
}