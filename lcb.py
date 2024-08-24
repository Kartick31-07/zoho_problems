def lcb(n,n1):
    l1=0
    l2=0
    for char in n:
        l1+=1
    for ch in n1:
        l2+=1
    max=0
    cts=0
    for i in range(l1):
        for j in range(l2):
            st=i
            end=j
            while( end<l2 and st<l1 and n[st]==n1[end]):
                st+=1
                end+=1

                if st-i>max:
                    max=st-i
                    cts=i
    print(n[cts:cts+max])

def main():
    n=input("enter ")
    n1=input("enter ")

    lcb(n,n1)


if __name__=="__main__":
    main()