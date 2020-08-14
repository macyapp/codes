num=input("Enter a number:")
sml=0
num=[int(x) for x in num]
print(num)
suml=list()
pr=1
lim=len(num)-1
for i in range(len(num)):
   if i!=lim:
      if (num[i]+1)==num[i+1]:
         pr*=num[i]
      elif (num[i]+1)!=num[i+1] and (num[i-1]+1)==num[i]:
         pr*=num[i]
      else:
         if pr!=1:
            suml.append(pr)
         pr=1
         continue
   else:
      if (num[i-1]+1)==num[i]:
         pr*=num[i]
         if pr!=1:
            suml.append(pr)
print(suml)


print(sum(suml))