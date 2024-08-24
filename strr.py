def strr(n):
    l=[ch for ch in n]

    l1=0
    for char in n:
        l1+=1
    i=0
    l1-=1
    while i<l1:
        t=l[i]
        l[i]=l[l1]
        l[l1]=t
        i+=1
        l1-=1
    print(''.join(l))
def main():
    n=input("enter ")

    strr(n)






if __name__=="__main__":
    main()