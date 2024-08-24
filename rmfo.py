def foc(n):
    l=[ch for ch in n]
    s={}
    l1=0
    for ch in n:
        l1+=1
    
    for i in range(l1):
        if l[i] not in s:
            s[l[i]]=1
            l[i]=' '
        else:
            s[l[i]]+=1
    r=''
    for char in l:
        if char!=' ':
            r+=char
    print(r)
def main():
    n='hello'

    foc(n)


if __name__=="__main__":
    main()