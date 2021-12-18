l=int(input("How many number enter in array="))
l2=[]
l3=0
while(l3<l):
    n=int(input("Enter a number at index"))
    l2.append(n)
    l3=l3+1
print(l2)
l4=l2[0]
l5=0
while(l5<l):
    if l4<l2[l5]:
        l4=l2[l5]
    l5=l5+1
print(l4)
