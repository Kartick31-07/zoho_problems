def charm(l,n):
    idx=1

    for i in range(1,n):
        if l[i]!=l[i-1]:
           l[idx]=l[i]
           idx+=1

    l=l[:idx]
    print(idx)
    print(l)

def main():
    n=int(input("enter"))
    l=[None]*n
    for i in range(n):
        l[i]=int(input())
    charm(l,n)


if __name__=="__main__":
    main()