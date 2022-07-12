import random
dir(random)

myseq = list(range(1,101))
i = random.randint(0,len(myseq))
print(myseq[i])
print(random.randint(1, 100))
print(random.choice(myseq))
print(random.sample(myseq, 4))
print(myseq)
random.shuffle(myseq)
print(myseq)


