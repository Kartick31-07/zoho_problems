def comarr(l1,l2,n1,n2):
    idx=0
    l3=[None]*n1
    for i in range(n1):
        for j in range(n2):
            if l1[i]==l2[j] and l1[i] not in l3:
                l3[idx]=l1[i]
                idx+=1
    l3=l3[:idx]
    print(l3)
def main():
    n1=int(input("enter "))
    n2=int(input("enter "))

    l1=[None]*n1
    l2=[None]*n2

    for i in range(n1):
        l1[i]=int(input())
    for i in range(n2):
        l2[i]=int(input())
    comarr(l1,l2,n1,n2)


if __name__=="__main__":
    main()