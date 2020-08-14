num="123779134533234"
num=[int(x) for x in num]
print(num)
sum=list()
pos=0
for i in range(pos,len(num)):
   pr=1
   for j in range(i,len(num)-1):
      if ((num[j+1]-num[j])==1):
         pr*=num[i]
         pos=j
      else:
         pos=j
         continue
   sum.append(pr)
print(sum)