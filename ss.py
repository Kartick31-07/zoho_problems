def ss(n):
    l=[]
    l1=0
    for ch in n:
        l1+=1
    print(l1)
    for i in range(l1):
        for j in range(i+1,l1+1):
            l.append(n[i:j])
    print(l)
def main():
    n='abcd'
    ss(n)


if __name__=="__main__":
    main()