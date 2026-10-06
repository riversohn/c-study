#include <stdio.h>

void hello()
{
    printf("Hello , World!\n");

    return; // void 함수의 경우 생략 가능
}

int main()
{
    hello();
    hello();
    hello();
}

/*
main 함수 아래에 함수를 넣으면 선언이 없어서 컴파일 에러가 남.
하고 싶으면 프로토타입을 사용 -> 선언을 위에서 정의는 아래서
void hello()
{
    printf("Hello , World!\n");

    return; // void 함수의 경우 생략 가능
}
*/
