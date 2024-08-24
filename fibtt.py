def dim(n):
    for i in range(n):
        n1=0
        n2=1
        for j in range(i+1):
            n3=n2+n1
            n1=n2
            n2=n3
            print(n3,end='')
            print(" ",end='')
        print()
          


def main():
    n=int(input())

    dim(n)

if __name__=="__main__":
    main()