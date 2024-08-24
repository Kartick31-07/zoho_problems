def abun(n):
    sum=0
    for i in range(1,n):
        if n%i==0:
            sum+=i
    if sum>n:
        print(f"{n} is abundant")
def main():
    n=25

    for i in range(1,100):
        abun(i)

if __name__=="__main__":
    main()