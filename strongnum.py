def fct(n):
    j=1
    for i in range(1,n+1):
        j*=i
    return j
def strong(n):
    d=n
    r=0
    while d>0:
        m=d%10
        r+=fct(m)
        d//=10
    print(r)
    if r==n:
        print("yess ")
    else:
        print("noo ")
def main():
    n=int(input("enter "))

    strong(n)

if __name__=="__main__":
    main()