num="123779134533234"
num=[int(x) for x in num]
print(num)
sum=list()
pr=1
for i in range(len(num)):
   if i<len(num)-1 and (num[i]+1)==num[i+1]:
      pr*=num[i]
   elif i<len(num)-1 and (num[i]+1)!=num[i+1] and (num[i-1]+1)==num[i]:
      pr*=num[i]
   elif i==len(num)-1 and (num[i-1]+1)==num[i]:
      pr*=num[i]
   else:
      sum.append(pr)
      pr=1
      continue

print(sum)