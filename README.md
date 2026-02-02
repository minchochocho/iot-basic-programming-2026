# iot-basic-programming-2026
IoT 개발자과정 기초 프로그래밍 언어 학습 리포지토리

## 1일차
- Git, github Desktop 설치
- Visual Studio Code 설치
- readme 미리보기 : Ctrl + Shift + V

## C언어 학습 순서
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
- 프로그램이란 : 사용자의 요구에 따라 데이터를 처리(표현, 이동, 저장, 로드..)할 수 있는 소프트웨어
    - 일의 순서가 있다.
- 이런 프로그램을 만드는 작업 : 프로그래밍(코딩, SW개발)

### C언어
- 1972년 켄 톰슨과 데니스 리치가 Unix 운영체제를 개발하기 위해서 만든 언어
- C++, JAVA, C#, Python 등 모든 언어의 기본이 되는 언어
- C99 표준에 따라서 학습

### 컴파일과 컴파일러
- 컴파일 : 소스코드 파일(텍스트파일)을 컴퓨터가 실행할 수 있는 파일로 변경, 생성
    - c, cpp -> 확장자 exe 파일로 생성
- 컴파일러 : IDE(Integrity Development Environment)툴을 사용
    - `Visual Studio`, Visual Studio Code, Rider, Eclipse...
    
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

    - 솔루션의 속성 > 시작 프로젝트 구성 > 현재 선택 영역 체크
    ![alt text](image-9.png)

### C 기본 문법

1. 기본 사용법

    - 메인함수 작성법 : [확인](./Day01/Chap02-Solution/Chap02-01-app/main.c)
    - 데이터 출력방법 : [확인](/Day01/Chap02-Solution/Chap02-02-app/main.c)
    