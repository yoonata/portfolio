"""
math 모듈

파이썬의 math 모듈에는 수학과 관련된 다양한 함수들과 상수들이 미리 정의되어 있습니다.
이것을 사용하면 여러 수학적인 문제들을 파이썬 프로그래밍을 통해 손쉽게 해결할 수 있습니다.
math 모듈은 파이썬에서 기본적으로 제공하는 기본 모듈이므로, 별도의 설치과정 없이 import 만으로 바로 사용할 수 있습니다.
"""

"""
사용 방법
"""

#import math

#또는

#from math import *

"""
다음과 같은 수학 문제를 파이썬의 math 모듈을 사용하여 풀어보도록 합니다.

1. 원주율 PI값과 오일러 수 e 값을 확인하자.
2. 중심이 (0,0)이고 반지름이 5인 원의 넓이와 θ=60˚일 때의 x와 y값을 구하자.
"""

"""
코딩연습
"""

import math

print(math.pi)

print(math.e)

radius = 5.0

area = (radius ** 2) * math.pi

theta = math.radians(60)

x = radius * math.cos(theta)

y = radius * math.sin(theta)

print("area : " + str(area))

print("x : " + str(x))

print("y : " + str(y))

"""
실행 결과
"""

#3.141592653589793
#2.718281828459045
#area : 78.53981633974483
#x : 2.5000000000000004
#y : 4.330127018922193

"""
위에서 주어진 문제들은 고등학교 수학에서 흔히 접할 수 있는 문제들입니다.
math 모듈을 사용하면 이러한 수학 문제들을 손쉽게 파이썬으로 풀 수 있습니다.

1. math 모듈 안에는 pi와 e가 미리 정의되어 있습니다.
만약 pi를 3.14로 놓고 싶다면 math.pi = 3.14 처럼 pi의 값을 변경할 수도 있습니다.
2. 원의 넓이는 반지름 * 반지름 * PI값으로 구할 수 있습니다.
따라서 math.pi를 이용하면 원의 넓이를 구할 수 있습니다.
이때 math 모듈에서 미리 정의된 삼각 함수에는 각도로 라디언(radian) 값을 전달해야만 합니다.
따라서 θ=60˚ 이라 할 때 cos(60) 으로 작성하는 것이 아니라 60˚ 에 해당하는 radian 값을 전달해줘야만 합니다.
파이썬에서는 math.radians() 함수를 통해 손쉽게 라디언 값을 생성할 수 있게 해줍니다.
3. 원 위의 한 점을 (x,y) 라고 할 때 x = radius * cos θ 로 나타낼 수 있습니다.
4. 변수 area, x, y 의 값은 모두 실수형이므로 문자열과 바로 더하기 연산(+)이 불가능합니다.
따라서 입력된 내용을 문자열로 바꿔주는 str() 함수를 사용해야 합니다.
"""