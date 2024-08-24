def lcm(n,n1):
    max=0
    if n>n1:
        max=n
    else:
        max=n1
    max1=max
    while True:
        if max%n==0 and max%n1==0:
            print(max)
            return
        else:
            max+=1
def main():
    n=int(input("enter "))
    n1=int(input("enter "))

    lcm(n,n1)


if __name__=="__main__":
    main()