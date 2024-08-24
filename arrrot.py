def rot(n,l,r):

    for j in range(r):
        t=l[0]
        for i in range(n-1):
            l[i]=l[i+1]
        l[n-1]=t
    
    print(l)

def main():

    n=int(input("enter the n "))
    l=[None]*n

    for i in range(n):
        l[i]=int(input())
    
    r=int(input("enter the r "))

    rot(n,l,r)

if __name__=="__main__":
    main()