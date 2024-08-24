def main():
    l=[1,2,2,3,1,3]
    l=list(set(l))
    # l1=0

    # for ch in l:
    #     l1+=1
    # for i in range(l1-1):
    #     for j in range(i+1,l1):
    #         if l[i]==l[j] and l[i]!=' ':
    #             l[j]=' '
    # count=0
    # for k in range(l1):
    #     if l[k]!=' ':
    #         l[count]=l[k]
    #         count+=1
    # l=l[:count]
    print(l)

if __name__=="__main__":
    main()