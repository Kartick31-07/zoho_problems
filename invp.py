def dim(n):
    for i in range(1,n+1):
        for j in range(1,2*n+1):
                if j>=i and j<=2*n-i:
                   print("*",end='')
                else:
                    print(" ",end='')
        print()


def main():
    n=int(input())

    dim(n)


if __name__=="__main__":
    main()