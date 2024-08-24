def num(n):
    for i in range(1,2*n+1):
        for j in range(1,2*n+1):
            if i<=n:
                if j<=i or j>2*n-i:
                    print("*",end="")
                else:
                    print(" ",end="")
            else:

                if j<=2*n-i+1 or j>=i:
                    print("*",end="")
                else:
                    print(" ",end="")
        print("")

def main():
    n=int(input("enter the n "))
    num(n)

if __name__=="__main__":
    main()