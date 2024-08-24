def sort(l,n):
    for i in range(n-1):
        for j in range(i+1,n):
            if l[i]>l[j]:
                t=l[i]
                l[i]=l[j]
                l[j]=t
    print(l)

def main():
     
    n=int(input("enter the n "))
    l=[None]*n

    for i in range(n):
        l[i]=int(input())
    sort(l,n)

if __name__=="__main__":
    main()