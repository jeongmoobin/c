#include <stdio.h>

#include <ctype.h>

int main()
{
    char ch ='M'; //이 예제에서 검사할 문자
    printf("문자: %c\n", ch); //ch에 저장된 값을 화면에 출력하는 역할

    printf("알파벳 여부: %s\n", isalpha(ch)? "예":"아니요"); //ch가 알파벳(a~z, A~Z)인지 확인

    printf("대문자 여부: %s\n", isupper(ch)? "예":"아니요"); //ch가 알파벳 대문자(A~Z)인지 확인

    printf("소문자 여부: %s\n", islower(ch)? "예":"아니요"); //ch가 알파벳 소문자 (a~z)인지 확인
    
    printf("숫자 여부: %s\n", isdigit(ch)? "예":"아니요"); //ch가 숫자(0~9)인지 확인
    
    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch)? "예":"아니요"); //ch가 알파벳 또는 숫자인지 확인
    
    printf("16진수 숫자 여부: %s\n", isxdigit(ch)? "예":"아니요"); //ch가 16진수(0~9, a~f, A~F)에 해당하는지 확인
    
    printf("구두점 여부: %s\n", ispunct(ch)? "예":"아니요"); //ch가 구두점 문자인지 확인. 구두점 문자는 알파벳, 숫자, 공백이 아닌 프린터블(printable, 인쇄 가능한)문자를 말한다
    
    printf("인쇄 가능 문자 여부: %s\n", isprint(ch)? "예":"아니요"); //ch가 프린터블 문자인지 확인. 프린터블 문자에는 출력 가능한 모든 문자(알파벳, 숫자, 구두점, 공백)가 포함
    
    printf("제어 문자 여부: %s\n", iscntrl(ch)? "예":"아니요"); //ch가 제어 문자(control character)인지 확인. 제어 문자에는 줄 바꿈, 탭 등이 포함
    
    printf("아스키 문자 여부: %s\n", isascii(ch)? "예":"아니요"); //ch가 아스키 문자 집합에 포함되는지 확인. 이 함수는 표준 C 라이브러리의 일부는 아니지만 많은 시스템에서 지원된다

    return 0;
}