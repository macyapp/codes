n=int(input("Enter a number:\n"))
m=n
num=0
while n!=0 :
    num=num*10+(n%10)
    n//=10
if num==m :
    print("Palindrome")
else:
    print("Not Palindrome")
