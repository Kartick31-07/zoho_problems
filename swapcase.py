def tit(n):
    l=[ch for ch in n]
    # print(l)
    l1=0
    for let in n:
        l1+=1
    for i in range(l1):
        if i==0 or l[i-1]==' ':
            if l[i]>='a' and l[i]<='z':
                l[i]=chr(ord(l[i])-32)
        elif l[i]>='A' and l[i]<='Z':
            l[i]=chr(ord(l[i])+32)
    l=''.join(l)
    return l
def swp(n):
    l=[ch for ch in n]
    # print(l)
    l1=0
    for let in n:
        l1+=1
    for i in range(l1):
        if l[i]>='a' and l[i]<='z':
            l[i]=chr(ord(l[i])-32)
        elif l[i]>='A' and l[i]<='Z':
            l[i]=chr(ord(l[i])+32)
    l=''.join(l)
    return l
def upp(n):
    l=[ch for ch in n]
    l1=0
    for let in n:
        l1+=1
    for i in range(l1):
        if l[i]>='a' and l[i]<='z':
            l[i]=chr(ord(l[i])-32)
    l=''.join(l)
    return l

def low(n):
    l=[ch for ch in n]
    # print(l)5
    l1=0
    for let in n:
        l1+=1
    for i in range(l1):
        if l[i]>='A' and l[i]<='Z':
            l[i]=chr(ord(l[i])+32)
    l=''.join(l)
    return l

def swap(n):
    print("enter the option  \n")
    

    while True:
        print("1.lower 2.upper 3.swap 4.title 5.exit")

        n1=int(input("enter \n"))

        if n1==1:
            n=low(n)
            print(n)
        elif n1==2:
            n=upp(n)
            print(n)
        elif n1==3:
            n=swp(n)
            print(n)
        elif n1==4:
            n=tit(n)
            print(n)
        elif n1==5:
            break
        else:
            print("not valid\n")
def main():
    n='syncfusion software Private Limited'

    swap(n)

if __name__=="__main__":
    main()