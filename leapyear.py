yr=int(input("enter a year:"))
if ((yr%400==0) or(yr%4==0) and (yr%100!=0)):
    print(yr,"leap year")
else:
    print(yr,"not a leap year")