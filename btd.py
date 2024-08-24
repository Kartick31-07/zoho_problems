def btd(n):
    b=n
    sum=0
    count=1

    while b>0:
        rem=b%10
        sum+=rem*count
        b//=10
        count*=2
    print(sum)
def main():
    n=int(input())

    btd(n)



if __name__=="__main__":
    main()