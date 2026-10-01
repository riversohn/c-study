# C 공부 작업 방식

## 1. 작업 시작
1. 시작 메뉴에서 Ubuntu 실행 (관리자 PowerShell에서 들어가지 않기)
2. `cd ~/c-study`
3. `git pull` (GitHub 웹에서 고친 게 있으면 먼저 받아오기)
4. `code .` (왼쪽 아래 `WSL: Ubuntu` 표시 확인)
5. VS Code 안에서 터미널 열기: Ctrl + `

## 2. 파일 규칙
- 위치: `ex/chNN/` (섹션별 폴더)
- 강의 코드: `섹션_강의번호_주제.c` (예: `11_02_pointer_arith.c`)
- 연습문제: `prac_번호_주제.c` (예: `prac_01_my_strlen.c`)
- 이름은 영어 소문자와 밑줄만, 번호는 두 자리
- 컴파일 전에 저장 확인

## 3. 컴파일과 실행
```
cd ex/chNN
gcc -Wall -Wextra -g 파일.c -o 파일.out
./파일.out
```
- `-Wall -Wextra`: 경고 최대로 보기, `-g`: 디버깅 정보 넣기, `-o`: 실행 파일 이름
- 실행 파일은 항상 `.out`으로 (.gitignore가 커밋에서 빼줌)
- 경고가 나오면 에러처럼 보고 원인 확인하기

## 4. 디버깅 (gdb)
```
gdb ./파일.out
```
| 명령 | 의미 |
|---|---|
| `break main` / `break 12` | main 또는 12번째 줄에 중단점 |
| `run` | 실행 (중단점에서 멈춤) |
| `next` | 한 줄 실행 (함수 안으로는 안 들어감) |
| `step` | 한 줄 실행 (함수 호출이면 안으로 들어감) |
| `print 변수` | 변수 값 보기 |
| `continue` | 다음 중단점까지 실행 |
| `quit` | 종료 |

## 5. 메모리 검사 (valgrind)
```
valgrind ./파일.out
valgrind --leak-check=full ./파일.out   # 누수 자세히 보기
```
- `ERROR SUMMARY: 0 errors` 확인
- malloc/free 쓰기 시작하면 매번 돌리기

## 6. 기록 남기기
```
cd ~/c-study
git status          # .out 파일이 안 보이는지 확인
git add .
git commit -m "메시지"
git push
```
- 메시지 예: `Add ch02 lecture code`, `Solve ch05 practice 01`

## 7. 강의(Visual Studio)와 다른 점
- `scanf_s`-> `scanf`로 쓰기
- `#define _CRT_SECURE_NO_WARNINGS` 줄은 빼기
- 실행 버튼 대신 3번 명령으로 컴파일·실행
- 디버거 화면 대신 4번 gdb 사용

## 기타
- `undefined reference to 'main'`: 파일 저장 안 함. Ctrl + S 후 `cat 파일.c`로 내용 확인
- `code .` 했는데 윈도우 폴더가 열림: /mnt/c 위치에서 실행했기 때문. `cd ~` 후 `pwd`로 /home/river 확인하고 실행