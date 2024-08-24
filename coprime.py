def copm(n,n1):
    if n<n1:
        min=n
    else:
        min=n1
    flag=0
    while 1:
        if n%min==0 and n1%min==0:
            if min==1:
                flag=1
                # break
            elif min!=1:
                # print(f"{n,n1} is not coprime")
                break
        else:
            min-=1
        if flag==1:
            print(f"{n,n1} is coprime")
            break
def main():
    n=12
    for i in range(1,20):
        copm(n,i)

if __name__=="__main__":
    main()