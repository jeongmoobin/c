#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0; //시작 위치를 0으로 설정
    int right = size -1; //끝 위치를 배열 크기 -1로 설정

    while(left <= right){//시작 위치가 곧 위치보다 작거나 같은 동안 반복
        int mid = (left + right) /2;//중간 위치 계산

        if(arr[mid] == target){
            return mid + 1;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if(result != -1){
        printf("원소 %d는  인덱스%d에 존재합니다. \n", target, result);
    }
}
