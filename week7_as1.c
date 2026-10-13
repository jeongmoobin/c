#include <stdio.h>

int main() {
    int a;
    int *p;

    printf("=== 포인터 연산식 동작 결과 비교 (초기값 a = 5) ===\n\n");

    // 1. (*p)++ : 현재 값을 반환하고 이후 값을 증가시킨다[cite: 1].
    a = 5;
    p = &a;
    printf("[1] (*p)++\n");
    printf("    - 연산식의 결과 값 : %d\n", (*p)++);
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 2. (*p)+1 : 값을 변경하지 않고 1만큼 더한 결과를 반환한다[cite: 1].
    a = 5;
    p = &a;
    printf("[2] (*p)+1\n");
    printf("    - 연산식의 결과 값 : %d\n", (*p) + 1);
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 3. *p+=1 : 값을 1 증가시키고 결과를 다시 저장한다[cite: 1].
    a = 5;
    p = &a;
    printf("[3] *p+=1\n");
    *p += 1;
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 4. (*p)+=1 : *p+=1과 동일하다[cite: 1].
    a = 5;
    p = &a;
    printf("[4] (*p)+=1\n");
    (*p) += 1;
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 5. *p = *p + 1 : 값을 1 더하고 결과를 저장한다[cite: 1].
    a = 5;
    p = &a;
    printf("[5] *p = *p + 1\n");
    *p = *p + 1;
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 6. ++*p : 값을 먼저 1 증가시키고 증가된 값을 반환한다[cite: 1].
    a = 5;
    p = &a;
    printf("[6] ++*p\n");
    printf("    - 연산식의 결과 값 : %d\n", ++(*p));
    printf("    - 연산 후 변수 a   : %d\n\n", a);

    // 7. ++(*p) : ++*p와 동일하며, 연산 순서를 명확히 표현한 것이다[cite: 1].
    a = 5;
    p = &a;
    printf("[7] ++(*p)\n");
    printf("    - 연산식의 결과 값 : %d\n", ++(*p));
    printf("    - 연산 후 변수 a   : %d\n", a);

    return 0;
}