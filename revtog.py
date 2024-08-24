def revw(l,i,idx):
    while i<idx:
        t=l[i]
        l[i]=l[idx]
        l[idx]=t
        i+=1
        idx-=1
    return l
def revtog(n):
    l=[ch for ch in n]
    idx=0
    l1=0

    for char in n:
        l1+=1
    for i in range(1,l1):
        if l[i-1]!=' ' and  'a'<=l[i]<='z':
            l[i]=chr(ord(l[i])-32)
    l=revw(l,idx,l1-1)
    # print(''.join(l))
    
    for j in range(l1):
        if  j+1==l1 or l[j+1]==' ':
            revw(l,idx,j)
            idx=j+2
    print(''.join(l))
    print(i)

def main():
    n=input("enter ")

    revtog(n)

if __name__=="__main__":
    main()