def cap(n):

    l1=0
    d=[]
    for char in n:
        l1+=1
    for i in range(l1):
        if n[i-1]==" " or i==0:
            if n[i]>'a' and n[i]<'z':
                d.append(chr(ord(n[i])-32))
        else:
            d.append(n[i])
    print(d)
    print(''.join(d))
def main():
    n=input("enter ")

    cap(n)

if __name__=="__main__":
    main()