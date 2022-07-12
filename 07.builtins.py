import random
com = [a for a in dir(__builtins__) if 'Error' not in a and 'Excep' not in a and 'Warn' not in a and '__' not in a and not a[0].isupper()]
print(com)
help(random.choice(com))
