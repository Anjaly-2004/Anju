num=int(input("Enter Armstrong Number:"))
sum = 0
temp = num
while temp>0:
  a=temp%10
  b=a*a*a
  sum=sum+b
  temp=temp//10
if num==sum:
    print("Armstrong number")
else:
    print("Not Armstrong number")

