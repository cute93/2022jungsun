while True:
    n = int(input('N : '))
    if not n%2:
        continue
    
    if not n%3 :
        print('3times')
        break
    else:
        print('Not 3times')
