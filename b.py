'''
dan = 2
for dan in range(2,10):
    print(dan,"단")
    for hang in range(2,10):
        print(dan,"*",hang,"=",dan*hang)
    print()
    
dan = 2

while dan < 10:
    print(dan,"단")
    for hang in range(2,10):
        print(dan,"*",hang,"=",dan*hang)
    print()
    
i = 0
j = 0

for i in range(0,5):
    for j in range(0,i+1):
        print("*",end="")
    print()

for i in range(7):
    for j in range(7):
        if i == j or i == 6-j:
            print("*",end="")
        else:
            print(" ",end="")
    print()

for i in range(5):
    for j in range(5):
        if j <= 3-i:
            print(" ",end="")
        else:
            print("*",end="")
    print() 

for i in range(6):
    for j in range(5-i):
        print(" ",end="")
    for j in range(i):
        print("*",end="")
    print()

cnt = 0
a = int(input("수 입력 :"))

for i in range(2,a+1):
    prime = True
    for j in range(2,i):
        if i % j == 0: 
            prime = False
            break
    if prime:
        print("%5d" %i,end="")
        cnt+=1
        if cnt % 5 ==0:
            print()
'''


