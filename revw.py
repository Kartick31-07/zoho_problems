
def revw(l,i,l1):
    while i<l1:
        t=l[i]
        l[i]=l[l1]
        l[l1]=t
        i+=1
        l1-=1
    return l
    
def rev(n):
    l=[ch for ch in n]
    l1=0
    for char in n:
        l1+=1
    i=0

    l=revw(l,i,l1-1)
    # print(l)

    for j in range(l1):
        if j==l1-1 or l[j+1]==' ' :
            revw(l,i,j)
            i=j+2
    print(''.join(l))
def main():
    n=input("enter ")

    rev(n)

if __name__=="__main__":
    main()