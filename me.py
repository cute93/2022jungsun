name = 'Teacher Joon'
import random

def get_name():
    return name

def is_odd(n:int)->bool:
    return n%2 == 1
def is_even(n:int)->bool:
    return not is_odd(n)

def mul(li:list)->int:
    r = 1
    for n in li:
        if not n:
            return 0
        r *= n
    return r

def mul_eval(li:list)->int:
    return eval('*'.join(str(a) for a in li))

def divisor(n:int)->list:
    return [a for a in range(1, n+1) if not n%a]

def is_prime(n:int)->bool:
    return len(divisor(n))==2

def primelist(n:int)->list:
    return [a for a in range(1, n+1) if is_prime(a)]

#print(__name__)

if __name__=='__main__':
    print(__name__)
    print(mul_eval([1,2,3]))
    print(mul([1,2,0,2,3,4,5,]))
    print(divisor(32))
    n = random.randint(1, 1000)
    print(is_prime(n))
    print(divisor(n))
    print(primelist(100))
