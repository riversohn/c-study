#include <stdio.h>

void hello(); // function declaration

int main()
{
    hello();
    hello();
    hello();
    // main 함수에서 호출 가능
    // 컴파일이 끝나고 링킹에서 아래의 정의된 것을 가져다가 사용함.
}

void hello() // function definition
{
    printf("Hello , World!\n");

    return;
}