def dim(n):
    for i in range(1,2*n):
        for j in range(1,2*n):
            if i<=n:
                if j==n-i+1 or j==n+i-1:
                    print("*", end='')
                else:
                    print(" ",end='')
            else:
                if j==i-n+1 or j==3*n-i-1:
                    print("*",end='')
                else:
                    print(" ",end='')
        print()


def main():
    n=int(input())

    dim(n)

if __name__=="__main__":
    main()