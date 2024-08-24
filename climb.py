def climb(n):
    n1=0
    n2=1

    for i in range(n-2):
        n3=n1+n2
        n1=n2
        n2=n3
        print(n3)

def main():
    n=int(input("enter "))

    climb(n)

if __name__=='__main__':
    main()