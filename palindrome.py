n=int(input("enter the number:"))
rev=0
temp=n
while (temp>0):
    r=temp%10
    rev=(rev*10)+r
    temp=temp//10
print("reverse of this given number is",rev)
if n== rev:
    print(n,"the number is palindrome")
else:
    print(n,"is not a palindrome number")