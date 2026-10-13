#include <stdio.h>

#define MAX_STUDENT 50

void bubbleSort(int*arr, int size);

void bubbleSort(int*arr, int size){
    for (int i = 0; i < size -1; i++){
        for (int j = 0; j < size -i -1; i++){
            if (*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{   
    int numStudents;
    printf("학생수를 입력하세요 (최대 50): ", MAX_STUDENT);
    scanf("%d", &numStudents);
    if (numStudents > MAX_STUDENT) {
        printf("학생 수를 초과했습니다. \n");
        return 1;
    }
    
    int*gradesPointer;
    int grades[MAX_STUDENT];
    gradesPointer = grades;
     for (int i = 0; i<numStudents; i++){
        printf("%d번째 학생의 성적을 입력하세요: ", i + 1);
        scanf("%d", gradesPointer + i);
    }

    bubbleSort(gradesPointer, numStudents);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i<numStudents; i++){
        printf("%d ", *(gradesPointer + i));
    }
    printf("\n\n최고 성적 : %d\n", *(gradesPointer + numStudents - 1));
    printf("최하 성적 : %d\n", *gradesPointer);

    return 0;
}