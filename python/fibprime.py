def prime(z):
	count = 0
	for i in range(1,z+1):
		if z % i == 0:
			count += 1
	if count==2:
		return True
	else:
		return False

def fib(x,y):
	a=0
	b=1
	c=0
	while True:
		c=a+b
		if c>y:
			break
		if c>=x and c<=y:
			if prime(c)==True:
				print(c,end=' ')
		a=b
		b=c
		c=a

p=int(input("Enter lower limit:"))
q=int(input("Enter upper limit:"))
fib(p,q)
