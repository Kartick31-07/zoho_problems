def pal(n):
    d=n
    sum=0
    while d>0:
        mod=d%10
        sum=sum*10+mod
        d//=10
    # print(sum)
    if sum==n:
        return True
    else:
        return False
    
def pr(n):
    flag=0
    for i in range(2,n//2+1):
        if n%i==0:
            flag=1
            break
    if flag==0:
        if pal(n):
            print(f"{n} is prime and pali")
    #     else:
    #         print(f"{n} is prime ,not pali")

    # else:
    #     if pal(n):
    #         print(f"{n} is not prime but pali")
    #     else:
    #         print(f"{n} is not prime,not pali")
            
def main():
    for i in range(1,200):
        pr(i)


if __name__=="__main__":
    main()