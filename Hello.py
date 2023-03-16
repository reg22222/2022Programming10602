'''
width = int(input("가로을 입력하세요 : "))
height = int(input("세로를 입력하세요  : "))
n = width*height
print("사각형의 면적은 {} 입니다".format(n))

name = input("이름입력 : ")
birth = int(input("태어난 해는"))
age = 2023 - birth + 1
print("{] 님의 나이는 {] 세입니다.".format(name,age))

price = int(input("물건의 갯수"))
num = int(input("물건의 구매 갯수"))
money = int(input("지불한 돈"))
change = money - price*num
print("거스름돈은 {} 원입니다.".format(change))

print(type('안녕하세요'))
print(type(273))
print(type(3.141592))

score = 'high'
print(score)
print(type(score))

num = 123456789
print(num)
print(type(num))

num = -20909
print(num)
print(type(num))

a = 1.5
b = -3.5
print(a,b)
print(type(a), type(b))

x = 3.3764
y = 6/2
print(x,y)
print(type(x), type(y))

a = 30
print(a)
print(type(a))

b = '30'
print(b)
print(type(b))


print("i say 'hello'to you")

a = input("첫번째숫자를입력하세요")
b = input("두번째숫자를입력하세요")
c = a + b
print(c)

a = input("첫번째숫자를입력하세요")
b = input("두번째숫자를입력하세요")
c = int(a) + int(b)
print(c)

i = float(input("인치를 입력하세요 : "))
c = i * 2.54

print("센치미터 : {}cm".format(c))
b = int(input("반지름을 입력 : "))
d = b*2*3.14
n = pow(b,2)*3.14
#print("반지름이 {}인 원의 둘레는 {}이고, 면적은 {}이다.".format(b,d,n))
print("반지름이", b, "인 원의 둘레는", format(d, ".1f"),"이고, 면적은", n, "이다.")

k = int(input("현재 키는? : "))
h = int(input("5개월 후의 목표 키는? : "))
avg = (h-k)/5
print("한달에 {}씩 성장해 보세요!".format(avg))

b = int(input("책값 : "))
d = float(input("할인율 : "))
de = int(input("배송비 : "))
g = b-b/(100/d)+de
print("결제하실 금액은 {}원입니다.".format(g))

n1 = int(input("첫번째 과목 : "))
n2 = int(input("두 번째 과목  : "))

sum = n1 + n2
avg = sum /2

print("합계 {} , 평균 : {}".format(sum,avg))

s1 = int(input("삼각형의 밑변 길이 : "))
s2 = int(input("삼각형의 높이 : "))
n = (s1*s2)/(100/50)
print("삼각형의 면적 : {}".format(n))'''

