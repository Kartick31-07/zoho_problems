def charord(s):

    sl=[char for char in s]
    l1=0
    for char in s:
        l1+=1

    for i in range(l1-1):
        for j in range(i+1,l1):
            if sl[i]>sl[j]:
                t=sl[i]
                sl[i]=sl[j]
                sl[j]=t
    print(''.join(sl))

def main():
    s=input("enter")

    charord(s)


if __name__=="__main__":
    main()