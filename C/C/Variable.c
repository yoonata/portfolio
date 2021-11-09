
/*
변수란 데이터를 저장하기 위해 프로그램에 의해 이름을 할당받은 메모리 공간을 의미

정수형 변수

1. char형
2. int형
3. long형

실수형 변수

1. float형
2. double형
*/

/*
변수의 이름을 생성할 때에 반드시 지켜야 하는 규칙

1. 변수의 이름은 영문자(대소문자),숫자,언더스코어(_)로만 구성
2. 변수의 이름은 숫자로 시작될 수 없음
3. 변수의 이름 사이에는 공백을 포함할 수 없음
4. 변수의 이름으로 C언어에서 미리 정의된 키워드(keyword)는 사용할 수 없음
*/

/*
C언어에서 사용되는 키워드(변수의 이름으로 사용될 수 없음)

auto
break
case
char
const
continue
default
do
double
else
enum
extern
float
for
goto
if
int
long
register
return
short
signed
sizeof
static
struct
switch
typedef
union
unsigned
void
volatile
while
*/

/*
C언어에서 변수를 선언하는 방법

1. 변수의 선언만 함 ex) int a;
2. 변수의 선언과 동시에 초기화 함 ex) int a = 10;
*/

//정수형 타입

/*
자료형				크기					범위								비고

char				1바이트, 8비트			-128~127
signed char			1바이트, 8비트			-128~127
unsigned char			1바이트, 8비트			0~255
short				2바이트, 16비트			-32,768~32,767
short int			2바이트, 16비트			-32,768~32,767								int 생략 가능
unsigned short			2바이트, 16비트			0~65,535
unsigned short int		2바이트, 16비트			0~65,535												int 생략 가능
int				4바이트, 32비트			-2,147,483,648~2,147,483,647
signed int			4바이트, 32비트			-2,147,483,648~2,147,483,647
unsigned			4바이트, 32비트			0~4,294,967,295
unsigned int			4바이트, 32비트			0~4,294,967,295								int 생략 가능
long				4바이트, 32비트			-2,147,483,648~2,147,483,647
long int			4바이트, 32비트			-2,147,483,648~2,147,483,647						int 생략 가능
signed long			4바이트, 32비트			-2,147,483,648~2,147,483,647
signed long int			4바이트, 32비트			-2,147,483,648~2,147,483,647						int 생략 가능
unsigned long			4바이트, 32비트			0~4,294,967,295
unsigned long int		4바이트, 32비트			0~4,294,967,295								int 생략 가능
long long			8바이트, 64비트			-9,223,372,036,854,775,808~9,223,372,036,854,775,807
long long int			8바이트, 64비트			-9,223,372,036,854,775,808~9,223,372,036,854,775,807			int 생략 가능
signed long long		8바이트, 64비트			-9,223,372,036,854,775,808~9,223,372,036,854,775,807
signed long long int		8바이트, 64비트			-9,223,372,036,854,775,808~9,223,372,036,854,775,807			int 생략 가능
unsigned long long		8바이트, 64비트			0~18,446,744,073,709,551,615
unsigned long long int		8바이트, 64비트			0~18,446,744,073,709,551,615						int 생략 가능
*/

//실수형 타입

/*
자료형		크기		범위					지수의 길이			가수의 길이			유효자릿수

float		4바이트		(3.4 X 10^-38) ~ (3.4 X 10^38)			8비트			23비트			소수 부분 6자리까지 오차없이 표현
double		8바이트		(1.7 X 10^-308) ~ (1.7 X 10^308)		11비트			52비트			소수 부분 15자리까지 오차없이 표현
long double	8바이트		(1.7 X 10^-308) ~ (1.7 X 10^308)
*/

/*
실수의 표현 방식

1. 고정 소수점(fixed point) 방식
2. 부동 소수점(floating point) 방식
*/

/*
고정 소수점(fixed point) 방식

실수는 보통 정수부와 소수부로 나눌 수 있음
실수를 표현하는 가장 간단한 방식은 소수부의 자릿수를 미리 정해 놓고, 고정된 자릿수로 소수를 표현하는 것

32비트 실수를 고정 소수점 방식으로 표현하면
1비트 -> 부호
15비트 -> 정수부
16비트 -> 소수부

정수부와 소수부의 자릿수가 크지 않으므로, 표현할 수 있는 범위가 매우 적다는 단점
*/

/*
부동 소수점(floating point) 방식

실수는 보통 정수부와 소수부로 나누지만, 가수부와 지수부로 나누어 표현 가능
부동 소수점 방식은 실수를 가수부와 지수부로 나누어 표현

현재 사용되고 있는 부동 소수점 방식은 대부분 IEEE 754 표준을 사용

32비트의 float형 실수를 IEEE 부동 소수점 방식으로 표현하면
1비트 -> 부호
8비트 -> 지수부
23비트 -> 가수부

64비트의 double형 실수를 IEEE 부동 소수점 방식으로 표현하면
1비트 -> 부호
11비트 -> 지수부
52비트 -> 가수부

부동 소수점 방식을 사용하면 고정 소수점 방식보다 훨씬 더 많은 범쉬까지 표현할 수 있음
하지만 부동 소수점 방식에 의한 실수의 표현은 항상 오차가 존재한다는 단점을 가짐
*/

//문자형 타입

/*
자료형			크기		범위

char			1바이트		2^7 ~ 2^-7
signed char		1바이트		2^7 ~ 2^-7
unsigned char		2바이트		0 ~ 2^-8
*/

/*
타입 변환

1. 묵시적 타입 변환(자동 타입 변환)
2. 명시적 타입 변환(강제 타입 변환)
*/

/*
묵시적 타입 변환(자동 타입 변환, implicit type conversion)

묵시적 타입 변환은 대입 연산이나 산술 연산에서 C 컴파일러가 자동으로 실행해주는 타입 변환을 가르킴
C언어에서는 대입 연산 시 연산자의 오른쪽에 존재하는 데이터의 타입이 연산자의 왼쪽에 존재하는 데이터의 타입으로 묵시적 타입 변환이 진행됨
또한, 산술 연산에서는 데이터의 손실이 최소화되는 방향으로 묵시적 타입 변환이 진행

컴파일러가 자동으로 수행하는 타입 변환은 언제나 데이터의 손실이 최소화되는 방향으로 이루어짐
따라서 C 컴파일러는 다음과 같은 순서대로 자동 타입 변환을 수행하게됨
char 형 → short 형 → int 형 → long 형 → float 형 → double 형 → long double 형
*/

/*
명시적 타입 변환(강제 타입 변환, explicit type conversion)

명시적 타입 변환은 사용자가 타입 캐스트(type cast) 연산자를 사용하여 강제적으로 수행하는 타입 변환을 가르킴
변환하고자 하는 데이터의 앞에 괄호(())를 추가하고, 그 안에 변환할 타입을 적으면 됨
C언어에서는 이 괄호(())를 타입 캐스트(type cast) 연산자라고 함
*/

/*
접미사		자료형
U			unsigned int
L			long
UL			unsigned long
LL			long long
ULL			unsigned long long
F			float
L			long double

접미사는 대소문자 구분이 없음
*/

/*
심볼릭(Symbolic) 상수
const 키워드를 앞에 붙여주면 상수가 되어서 변경이 불가능해진다.
처음에 선언할때 초기화를 해주지 않으면 쓰레기 값이 저장되고 변경이 불가능 하기 때문에
선언할때 초기화를 같이 해주어야한다.

ex) const int MAX = 100;
*/
