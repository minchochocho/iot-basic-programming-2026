# iot-basic-programming-2026
IoT 개발자과정 기초 프로그래밍 언어 학습 리포지토리

## 1일차(02.02)

### 개발환경 구성
- Git, github Desktop 설치
    - https://git-scm.com/ 에서 Install for Windows로 다운로드 후 설치
    - https://desktop.github.com/download/ 에서 다운로드 후 설치
- Visual Studio Code 설치
    - https://code.visualstudio.com/download 에서 운영체제별 다운로드 버튼 클릭
    - 특정폴더에 지정해서 설치 (예, C:\DEV\IDE)
- VS Code에서 readme 미리보기 : Ctrl + Shift + V

### C언어 학습 순서
- 기본
    1. 프로그램 기본
    2. 상수와 데이터 출력
    3. 변수와 데이터 입력
    4. 연산자
    5. 제어문, `분기문`과 `반복문`
    6. 함수

- 고급
    1. 배열
    2. `포인터`!
    3. 배열과 포인터
    4. 문자열과 포인터
    5. 변수의 영역과 데이터 고유
    6. 다차원 포인터
    7. 구조체 자료형
    8. 파일 입출력
    9. 전처리와 분할 컴파일


### 프로그램 개요
- 프로그램이란 : 컴퓨팅환경(PC, 모바일, 임베디드 등)에서 `사용자의 요구`에 따라 `데이터`를 처리(표현, 이동, 저장, 로드..)할 수 있는 `소프트웨어`
    - 일의 순서를 의미. 일의 순서를 컴퓨터 내에서 실행하는 것
- 프로그램을 만드는 작업 : 프로그래밍(코딩, SW개발, 소프트엔지니어링)

### C언어
- 1972년 켄 톰슨과 데니스 리치가 Unix 운영체제를 개발하기 위해서 만든 언어
- C++, JAVA, C#, Python 등 모든 언어의 기본이 되는 언어
- C99 표준에 따라서 학습

### 컴파일과 컴파일러
- 컴파일(빌드) : 소스코드 파일(텍스트파일)을 컴퓨터가 실행할 수 있는 파일로 변경, 생성
    - 전처리, 오브젝트화, 링킹을 통해 실행파일을 만드는 과정
    - c, cpp -> 확장자 exe 파일로 생성
- 컴파일러 : IDE(Integrity Development Environment)툴을 사용
    - `Visual Studio`, Visual Studio Code, Rider, Eclipse...
    - 컴파일러 - C/C++ 컴파일러(`MSVC`, gcc...), Java 컴파일러, C# 등 언어자체를 컴파일하는 프로그램
    
### Visual Studio
- https://visualstudio.microsoft.com/ko/ 에서 무료 다운로드 받기 버튼 클릭

    1. Visual Studio Installer 실행

        ![alt text](image.png)

    2. 설치중

        ![alt text](image-1.png)

    3. 설치 완료 및 시작

        ![alt text](image-2.png)


### 비주얼 스튜디오 프로젝트 생성
1. 새 프로젝트 만들기

    ![alt text](image-6.png)

2. 새 프로젝트 구성
    - 프로젝트 이름, 솔루션 이름을 다르게 지정
    - 위치는 깃허브 저장소 하위에 위치 시킬 것

    ![alt text](image-3.png)

3. 새 프로젝트 추가

    - 기존 솔루션에 새 프로젝트 추가

    ![alt text](image-7.png)

4. 소스코드 확장자를 변경
    - *.cpp -> *.c로 변경

5. 01, 02.c 코딩

6. 메뉴 디버그 > 디버그 하지 않고 시작 (Ctrl + F5) 클릭

7. 전체 컴파일 과정

    ![alt text](image-8.png)

8. 프로젝트가 여러개
    - `솔루션의 속성` > `시작 프로젝트 구성` > `현재 선택 영역`으로 선택
    ![alt text](image-17.png)

    - 포커스 중인 프로젝트가 시작 프로젝트로 설정됨



### C 기본 문법

1. 기본 사용법
    - 메인함수 작성법 : [소스](./Day01/Chap02-Solution/Chap02-01-app/main.c)
    - 데이터 출력방법 : [소스](/Day01/Chap02-Solution/Chap02-02-app/main.c)

    - 기본 사용방법 : 아래확인
        - 2진수 -> 컴퓨터의 데이터가 모두 0,1로만 저장되어 있으므로
        - 8진수 -> 비트로 데이터를 처리할 때 비트단위가 8이므로
        - 16진수 -> 255까지의 수를 짧게 표현하고자 사용
        - 10진수 - 현실세계(사람)에서 주로 사용

    - 진수별 표현법 : [소스](./Day01/Chap02-Solution/Chap02-03-app/main.c)
        |10진수|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|
        |:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
        |8진수|00|01|02|03|04|05|06|07|010|011|012|013|014|015|016|017|
        |16진수|0x0|0x1|0x2|0x3|0x4|0x5|0x6|0x7|0x8|0x9|0xA|0xB|0xC|0xD|0xE|0xF|

## 2일차(02.03)

### C 기본 문법 계속

1. 기본 문법
    - 데이터형 : [소스](./Day02/Chap03-Solution/Chap03-01-app/main.c)
        - 많은 데이터형 중에서 char(1), int(4), double(8)만 우선적으로 기억

    - 실수형 및 변수 : [소스](./Day02/Chap03-Solution/Chap03-02-app/main.c)
    - 데이터 입력 : [소스](./Day02/Chap03-Solution/Chap03-03-app/main.c)

    - 연산자 : [소스](./Day02/Chap04-Solution/Chap04-01-app/main.c)
        - 산술연산, 대입연산, 논리연산, 관계연산, 비트연산, ...
2. 퀴즈 : [소스](./Day02/Chap04-Solution/Chap04-quiz4/main.c)
    - bmi = 몸무게 / (키 / 100) * (키 / 100)


## 3일차(02.04)

### C 기본 문법 계속

1. 제어문 - 선택문/분기문
    - if문 : [소스](./Day03/Chap05-Solution/Chap05-01-app/main.c)
    - switch~case문 : [소스](./Day03/Chap05-Solution/Chap05-02-app/main.c)
    
2. 반복문
    - while, do~while문 : [소스](./Day03/Chap06-Solution/Chap06-01-app/main.c)
    - for문 : [소스](./Day03/Chap06-Solution/Chap06-02-app/main.c)
    - 구구단 : [소스](./Day03/Chap06-Solution/Chap06-03-app/main.c)
    - 무한루프 : [소스](./Day03/Chap06-Solution/Chap06-04-app/main.c)
    - continue, break : [소스](./Day03/Chap06-Solution/Chap06-05-app/main.c)

3. **디버깅 기본**
    - 단축키
        - F5 : 디버깅 시작
        - Shift + F5 : 디버깅 종료
        - F9 : 브레이크포인트 토글
        - F10 : 소스코드 한 줄 실행, 함수를 실행하고 그냥 넘어감
        - F11 : 소스코드 내 `함수`나 `클래스`가 존재하면 내부로 진입
        - 로컬, 조사식 창을 활용

4. 함수

    - 함수 기본 : [소스](./Day03/Chap07-Solution/Chap07-01-app/main.c)


## 4일차(02.05)

### C 기본 문법 계속
1. 함수 계속
    - 함수 유형 : [소스](./Day03/Chap07-Solution/Chap07-02-app/main.c)   
        - 매개변수가 없는 함수
        - 반환 값이 없는 함수 
        - 매개변수, 반환값이 없는 함수
        - `매개변수, 반환값이 있는 함수`
    - 재귀호출 함수 : [소스](./Day03/Chap07-Solution/Chap07-03-app/main.c)

2. 배열 : 
    - 동일 자료형의 묶음 - `arr[10]`
    - 배열 선언, 초기화 : [소스](./Day04/Chap08-Solution/Chap08-01-app/main.c)
    - 문자배열(문자열) : [소스](./Day04/Chap08-Solution/Chap08-03-app/main.c)
    - 대소문자 변환 : [소스](./Day04/Chap08-Solution/Chap08-quiz/main.c)
        ![alt text](image-10.png)

3. 포인터
    - 변수 스코프 : [소스](./Day04/Chap09-Solution/Chap09-01-app/main.c)
    - 변수에 담긴 데이터를 공유하기 위해서 
    - 프로그램에서 사용하는 `메모리를 절약`하기 위한 목적
    - 메모리 주소
        - 주소 연산자 & : [소스](./Day04/Chap09-Solution/Chap09-02-app/main.c)
        - 간접 참조 연산자(포인터 연산자) * : [소스](./Day04/Chap09-Solution/Chap09-03-app/main.c)
        
## 5일차(02.06)

### C 기본 문법 문법

1. 포인터
    ![alt text](image-11.png)
    - 포인터 이해 : [소스](./Day05/Chap09-Solution/Chap09-04-app/main.c)
        - 변수의 주소(메모리상)를 담고, 간접참조연산자(*)로 그 변수의 값을 사용하기 위한 것
        - 변수의 주소를 변경하여, `여러 변수 사용 가능`, 함수도 주소를 변경해서 여러 함수 사용가능
        - 변수의 주소는 바뀌지 않는 값&(상수). 변수의 주소는 바꿀 수 없다.
        - 변수를 가리키는 값(*)은 변경 가능(변수)
        - 포인터에 주소를 저장할때는 자료형이 동일해야한다. int -> int*

    - 포인터 크기 : [소스](./Day05/Chap09-Solution/Chap09-05-app/main.c)
        - 주소의 크기와 동일 - 8byte(64비트체계 이므로)

    - 포인터 사용 이유 : [소스](./Day05/Chap09-Solution/Chap09-07-app/main.c)
        - 용량이 제한된 [임베디드 시스템](https://ko.wikipedia.org/wiki/%EC%9E%84%EB%B2%A0%EB%94%94%EB%93%9C_%EC%8B%9C%EC%8A%A4%ED%85%9C)에서 데이터를 공유하는 목적
        - 함부로 변수를 마구 찍어서 만들수 없음(용량제한)!
        - 주소를 공유해서 함수 어디서나 변수의 값을 변경할 수 있음
        - 함수간에 효과적으로 데이터를 공유하고, 용량(메모리)을 절약!

2. 배열과 포인터 : [소스](./Day05/Chap10-Solution/Chap10-01-app/main.c)
    - 배열과 포인터는 매우 흡사해서 유사하게 사용가능
    - scanf() 배열 str[80] 선언 후, &str(배열의 이름자체가 주소 == &)로 사용
    - 직접적인 연관이 있음
    - 실무에서 데이터를 공유하면 보통 배열도 많이 사용됨
    - 배열을 그대로 매개변수로 전달하면 메모리를 많이 사용하게 됨
    - int arr[100] -> main에서 400bytes, 함수에서 400bytes의 메모리 공간을 확보('메모리 부족사태')
    - 배열의 주소를 함수에 전달 : [소스](./Day05/Chap10-Solution/Chap10-03-app/main.c)

3. 문자 : [소스](./Day05/Chap11-Solution/Chap11-01-app/main.c)
    - getchar() 입력버퍼 한글자 지우기 : [소스](./Day05/Chap11-Solution/Chap11-02-app/main.c)

4. 문자열 기본 : [소스](./Day05/Chap12-Solution/Chap12-01-app/main.c)
    - 문자열 상수와 문자 포인터 변수 사용법

## 6일차(02.09)

### C 중급 문법 계속

4. 문자열과 포인터
    - 문자열 연산 함수 : 자주 사용하는 문자열 처리 내장 함수

5. Tip
    - #pragma region, #pragma endregion : 소스코드 여역에서 일부 내용을 축소(확장)시키고자 할때

6. 변수 영역 : [소스](./Day06/Chap13-Solution/Chap13-01-app/main.c)
    - 같은 이름의 변수가 있으면 코드블록내의 변수가 우선적으로 사용됨!!
    - `auto` : 지역변수를 뜻함. auto라는 키워드 사용X
    - 전역 : 전역, ~~global~~ 단어를 사용하는게 아님
    - `static` : 정적, 소스코드 전체가 실행되는 동안 살아있는 변수 [소스](./Day06/Chap13-Solution/Chap-13-02-app/main.c)
    - `register` : CPU내 존재하는 메모리를 뜻함. 데이터 처리속도가 가장 빠름. 거의 쓸일X
    - `extern` : 외부 소스에서 사용할 변수

7. 데이터 공유 방법!!! : [소스](./Day06/Chap13-Solution/Chap-13-03-app/main.c)
    - 데이터를 필요할때마다 복사하는 것보다, 같이 메모리를 절악하는 방법
    - `값을 복사해서 전달(Call by value)`과 `주소를 전달(Call by reference)`
    - 포인터변수로 리턴

8. 다차원 배열 : [소스](./Day06/Chap14-Solution/Chap14-01-app/main.c)
    - 1차원 배열 : score[4] 크기 4의 배열 score
    - 2차원 배열 : score[4]의 배열이 3개. score[3][4]. 3행(row) 4열(column)

9. 포인터 배열 : [소스](./Day06/Chap14-Solution/Chap14-02-app/main.c)
    - 2차원 배열과 유사

10. 이중포인터 : 
    - 값은 a = 10 밖에 없음! 나머지는 주소
    ![alt text](image-14.png)

    - [단일포인터](./Day05/Chap10-Solution/Chap10-03-app/main.c) vs [이중포인터배열](./Day06/Chap15-Solution/Chap15-02-app/main.c)

## 7일차

### C 중급 문법

1. 함수와 void 포인터 : [소스](./Day07/Chap15-Solution/Chap15-04-app/main.c)
    - 함수 포인터 - 함수도 메모리 상에 주소(&)를 가지고 있음
    - 변수와 동일하게 함수도 주소를 통해서 여러 함수를 변경해서 사용
    - `어떤 함수를 연결하느냐에 따라 동작이 바뀐다.`
    - 실행시점에 어떤 함수가 실행될지 모를때 : [소스](./Day07/Chap15-Solution/Chap15-05-app/main.c)
    - 조건문을 줄이고, 구조를 유연하게 만들기 위해 사용
    - 사용 예 : 임베디드 하드웨어 이벤트 인터럽트, 상태머신, GUI 이벤트, 게임 상태별 로직

2. void 포인터 : [소스](./Day07/Chap15-Solution/Chap15-06-app/main.c)
    - void : 리턴값이 없을때, 매개변수가 없을때 사용
    - 포인터 특징 : int형 = int*, double형 = double* 와 같이 타입형이 일치해야 한다
    - 가리키는 자료형이 달라도 사용할 수 있는 포인터 -> void 포인터
    - void는 아직 자료형이 정해지지 않았다는 뜻
    - void 포인터에서 형변환을 제거하면 오류!
        > (int*),(double*) 등
    
3. 메모리 동적할당
    - 프로그램에 필요한 메모리를 원하는 만큼 확보
    - malloc - memory allocation. 메모리 동적할당 : [소스](./Day07/Chap16-Solution/Chap16-01-app/main.c)
    - calloc - contiguous allocation. 연속된 메모리 동적할당. 0으로 초기화, malloc보다 느림 : [소스](./Day07/Chap16-Solution/Chap16-03-app/main.c)
    - realloc - re-allocation. 메모리 크기 조정 
    - free - 메모리 반환
    - **NUL** - 아무것도 가리키지 않는 포인터 값!

4. 프로그램의 메모리 영역

    ![alt text](image-15.png)

    - 코드영역, 스택, 힙, 기타데이터영역 구분
    - 코드영역 - 소스코드가 실행하는 영역
    - 스택 - 지역변수 영역
    - 힙 - 동적할당 영역, Pointer, NULL...
    - 기타데이터 영역 - 전역변수, static변수 영역

5. 동적할당 저장공간 활용 : [소스](./Day07/Chap16-Solution/Chap16-04-app/main.c)
    - 영어사전과 같은 데이터를 저장할때 : [소스](./Day07/Chap16-Solution/Chap16-05-app/main.c)
        - 배열로 처리하면 메모리 낭비가 심함
        - 동적할당으로 메모리 절약

6. main 함수 명령행 인수 사용 : [소스](./Day07/Chap16-Solution/Chap16-06-app/main.c)
    - int main(int argc, char** argv)가 보통 기본 메인 함수 형태
    - argc - 인자 개수, argv - 인자 문자열의 배열
    - 프로젝트 속성에서 명령인수 입력방법
    ![alt text](image-16.png)

7. 사용자 정의 자료형 - 구조체 : [소스](./Day07/Chap17-Solution/Chap17-01-app/main.c)
    - C언어는 절차적 프로그래밍 언어
    - C++는 객체지향 프로그래밍 언어, C#, Java, Python ...
    - 객체지향적 개념을 사용하기 시작한 것 - 구조체

## 8일차
### C 중급 문법

1. 사용자 정의 자료형 - 구조체 : [소스](./Day08/Chap17-Solution/Chap-17-02-app/main.c)
    - 구조체 사용 : [소스](./Day08/Chap17-Solution/Chap17-03-app/main.c)
    - 구조체 내 구조체 : [소스](./Day08/Chap17-Solution/Chap17-04-app/main.c)
    - 구조체 포인터 : [소스](./Day08/Chap17-Solution/Chap17-05-app/main.c)

2. 사용자 정의 자료형 - 공용체, 열거형 : [소스](./Day08/Chap17-Solution/Chap17-06-app/main.c)

3. 파일 입출력
    - 파일 종류 : 텍스트 파일, 바이너리 파일
    - 바이너리 파일 : 데이터파일, 내부적으로 0과 1로 저장한 파일. data, exe, mp3, mp4 등등
    ![alt text](image-24.png)
    - 텍스트 파일 : 사람이 읽을 수 있는 문자로 된 파일 txt, log, cmd, bat, docx, httpx, pptx ...
    ![alt text](image-25.png)

    - 파일 오픈 : [소스](./Day08/Chap18-Solution/Chap18-01-app/main.c)

4. 전처리, 분할 컴파일

5. 토이 프로젝트 - 주소록 프로그램