def happy(n):
    sum=0
    if n<10:
        if n==1:
            # print("happy")
            return True
        else:
            # print("not happy")
            return False
    
    while n>0:
        mod=n%10
        sum=sum+mod**2
        n//=10
    # print(sum)
    return happy(sum)
def main():
    for i in range(100):
        if happy(i):
            print(f"{i} is happy")

if __name__=="__main__":
    main()