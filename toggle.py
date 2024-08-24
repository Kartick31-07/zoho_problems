def tog(n):
    l1=0
    b=[ch for ch in n]
    for char in n:
        l1+=1
    for i in range(l1):
        if i!=0 and b[i-1]!=' ':
            if b[i]>='a' and b[i]<='z':
                b[i]=chr(ord(b[i])-32)
    print(b)
    print(''.join(b))
def main():
    n=input("enter ")
    tog(n)


if __name__=="__main__":
    main()