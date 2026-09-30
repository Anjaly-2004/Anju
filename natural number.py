n=int(input("enter a any number:"))
if n<0:
  print("print a positive number:")
else:
  sum=0
while n>0:
    sum+=n
    n-=1
print("sum of natural numbers is",sum)
