def dim(n):
    for i in range(1,2*n):
        count=0
        for j in range(1,2*n):
            if i<=n:
                if j>=n-i+1 and j<=n+i-1:
                    if j<=n:
                        count+=1
                        print(count,end='')
                    else:
                        count-=1
                        print(count,end='')
                else:
                    print(" ",end='')
            else:
                if j>=i-n+1 and j<=3*n-i-1:
                    if j<=n:
                        count+=1
                        print(count,end='')
                    else:
                        count-=1
                        print(count,end='')
                else:
                    print(" ",end='')
        print()


def main():
    n=int(input())

    dim(n)

if __name__=="__main__":
    main()