#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, j, key;
    
    for (i = 1; i < n; i++) {
        key = arr[i]; // 이번에 정렬할 타겟 데이터
        j = i - 1;
        
        // 정렬된 배열을 뒤에서부터 탐색하며 key보다 큰 데이터를 한 칸씩 뒤로 밀어냄
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // 적절한 위치에 key를 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    insertionSort(arr, n);

    printf("정렬된 상태 배열: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}