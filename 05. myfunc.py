name = 'ccteacher'

def plus3(n):
    x = n + 3
    return x

def print_hello():
    print('Hello, Python!!')

def print_name(name='joon'):
    print(f'Hello, {name}')

def get_PI():
    return 3.141592

def is_even(n):
    return not n%2

def divisor(n):
    rt = []
    for i in range(1,n//2+1):
        if not n%i:
            rt.append(i)
    rt.append(n)
    return rt

def is_prime(n):
    if n<2:
        return False
    if n==2:
        return True
    for i in range(2, n):
        if not n%i:
            return False
    return True
def is_prime2(n):
    return len(divisor(n)) == 2


def mul(*a):
    m = 1
    if '__iter__' in type(a[0]).__dict__:
        a = a[0]
    for n in a:
        m *= n
    return m

print(is_prime2(121))
print(divisor(121))
