"""
while 문

파이썬에서는 반복해서 문장이나 수식을 수행해야 할 경우 while문을 사용할 수 있습니다.
"""

"""
코딩연습
"""

meet=0

while meet<4:            # 유비가 제갈량을 방문횟수가 4보다 작을 동안 방문합니다.

    meet = meet+1        # 방문횟수 증가

    print("유비가 %d번 방문했습니다." % meet)

    if meet == 3:        # 세 번 만났기 때문에 방문을 종료함.

        print("제갈량이 유비 곁으로 갑니다.")

        break            # while 문을 빠져나온다.

"""
실행 결과
"""

#유비가 1번 방문했습니다.

#유비가 2번 방문했습니다.

#유비가 3번 방문했습니다.

#제갈량이 유비 곁으로 갑니다.

"""
위의 예제 코드를 간단한 표로 만들어 보면 다음과 같습니다.

meet	while 조건문 (판단)	        수행 문장	                while 문의 상태
0	    0 < 4 (참)	            유비가 1번 방문 했습니다	       반복
1	    1 < 4 (참)	            유비가 2번 방문 했습니다	       반복
2	    2 < 4 (참)	            유비가 3번 방문 했습니다	       반복
3	    3 < 4 (참)	            제갈량이 유비 곁으로 갑니다.	    반복
4	    4 < 4 (거짓)	 	                                      종료
 
위의 예제에서 사용된 break 키워드의 역할은 if 문이나 while 문, 뒤에서 살펴볼 for문 등의 조건문이나 반복문에서 가장 가까운 분기를 탈출시켜 줍니다.
다음 예제는 지정된 숫자가 입력되기 전까지는 계속해서 실행되는 while 문 예제입니다.
"""

"""
예제
"""

member = """

1.유비

2.관우

3.장비

4.제갈량

숫자를 입력하시오 : """

num = 0 

while num != 4:

    print(member)

    num = int(input())

"""
실행 결과
"""

#1.유비
#2.관우
#3.장비
#4.제갈량
#숫자를 입력하시오 :
#1

#1.유비
#2.관우
#3.장비
#4.제갈량
#숫자를 입력하시오 :
#2

#1.유비
#2.관우
#3.장비
#4.제갈량
#숫자를 입력하시오 :
#3

#1.유비
#2.관우
#3.장비
#4.제갈량
#숫자를 입력하시오 :
#4

"""
위의 예제에서 while 문은 숫자 4가 입력되기 전까지는 계속해서 실행됩니다.

무한루프

마지막으로 무한 루프에 대해 알아봅시다.
무한 루프란 단어 뜻대로 while 문과 같은 반복문이 무한하게 반복되는 것을 뜻합니다.
"""

"""
예제
"""

while True:

    print("1234567")

"""
실행 결과
"""

#1234567

#1234567

#1234567

#...

"""
위의 예제와 같은 무한 루프는 프로그램을 강제 종료(ctrl+C)해야만 빠져나갈 수 있습니다.
위의 예제처럼 무의미하게 무한 루프를 사용할 일은 없겠지만, 프로그래밍을 하다보면 무한 루프를 사용해야 하는 경우가 생길 수 있습니다.
"""