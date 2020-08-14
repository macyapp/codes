num=input("Enter a number:\n")
sml=0
num=[int(x) for x in num]
print(num)
suml=list()
numl=list()
pr=1
for i in range(len(num)):
   if num[i]!=0:
      numl.append(num[i])

print(numl)
lim=len(numl)-1

for i in range(len(numl)):
   if i!=lim:
      if (numl[i]+1)==numl[i+1]:
         pr*=numl[i]
      elif (numl[i]+1)!=numl[i+1] and (numl[i-1]+1)==numl[i]:
         pr*=numl[i]
      else:
         if pr!=1:
            suml.append(pr)
         pr=1
         continue
   else:
      if (numl[i-1]+1)==numl[i]:
         pr*=numl[i]
         if pr!=1:
            suml.append(pr)
print(suml)


print(sum(suml))