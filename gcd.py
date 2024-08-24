def gcd(n,n1):
    min=0
    if n<n1:
        min=n
    else:
        min=n1
    while 1:
        if n%min==0 and n1%min==0:
            print(min)
            return
        else:
            min-=1
def main():
    n=int(input("enter "))
    n1=int(input("enter "))

    gcd(n,n1)



if __name__=="__main__":
    main()