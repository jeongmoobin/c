#include <stdio.h>

int main(void) {
    int A, B, C;
    int count[10] = {0};
    int result;
    
    scanf("%d %d %d", &A, &B, &C);
    
    result =  A * B * C;
    
    while (result > 0) {
        count[result % 10]++;
        result /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }
    
    return 0;
}