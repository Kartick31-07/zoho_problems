def dim(n):
    for i in range(1,2*n):
        for j in range(1,2*n):
            if i<=n:
                if j>=i and j<=2*n-i:
                    if i==1 or j==i or j==2*n-i:
                        print("*",end='')
                    else:
                        print(" ",end='')
                else:
                    print(" ",end='')
            else:
                if j<=i and j>=2*n-i:
                    if j==2*n-i or j==i or i==2*n-1:
                        print("*",end='')
                    else:
                        print(" ",end='')
                else:
                    print(" ",end='')
        print()


def main():
    n=int(input())

    dim(n)

if __name__=="__main__":
    main()