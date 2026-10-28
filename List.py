#3a Generate positive list ofnumbers from a given list of integers
mylist=[23,58,-12,90,-45,81,49,-36]
print("First list:",mylist)
newlist=[x for x in mylist if x>0]
print("New list:",newlist)

#3b Square of N numbers
mylist=[2,5,3,8]
print("First list:",mylist)
newlist=[number** 2 for number in mylist]
print("New list:",newlist)

#3cvowel
word=input("enter a word")
vowels=['a','e','i','o','u']
list=[]
for x in word:
    if(x in vowels and x not in list):
     list.append(x)
print("vowel present in the given word is:",list)

#3d
a=input("enter the word")
for i in range(len(a)):
    print("ascii value is",a[i],"is",ord(a[i]))

