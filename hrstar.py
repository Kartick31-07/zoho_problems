def dim(n):
    for i in range(1,n):
        for j in range(1,2*n):
            if j>=n-i+1 and j<=2*n-i+1:
                if j==n-i+1 or i==1 or j==2*n-i+1 or i==n-1 or j==n+i-2 or j==2*n-i:
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