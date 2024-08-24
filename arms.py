def val(mod,n):
    m=1
    while(n>0):
        m=m*mod
        n-=1
    return m  

def arms(n):
    d=n
    d1=n
    count=0
    sum=0

    while d>0:
        d//=10
        count+=1

    while d1>0:
        mod =d1%10
        sum+=val(mod,count)
        d1//=10

    if sum==n:
        print("arms")
    else:
        print("not arms")
        print(sum)

def main():

    n=int(input("enter the number "))

    arms(n)

if __name__=="__main__":
    main()