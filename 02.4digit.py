n = input('4digit : ')
while len(n) != 4 or not n.isdigit():
    n = input('4digit : ')

k = 1000
for j in n:
    print(f'{k}의 자리 : {j}')
    k //= 10


