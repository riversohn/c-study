#include <stdio.h> // preprocessor instruction(전처리기): 컴파일 하기 전에 처리하는 부분

int main(void) // main의 이름을 가진 함수 정의 시작, 운영체제가 프로그램 시작 시 main 함수를 가장 우선 시 실행
{ // scope의 시작
    // declaration
    // 변수: 메모리 사용 선언
    int x; // 정수 하나를 담을 만한 메모리 공간을 확보했고 그 공간을 x라는 변수를 통해 접근할 수 있다는 의미
    int y;
    int z;

    // assignment
    x= 1; // 변수에 값을 넣는다는 의미
    y= 2;
    z= x+ y; // 연산자 우선 순위에 의해 + 부터 실행 

    printf("Result is %i", z); // call or invoke

    return 0; // 결과 값을 반환
    // return 0 이후의 것들은 무시됨
} // scope의 끝