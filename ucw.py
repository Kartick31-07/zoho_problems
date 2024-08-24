def ucw(n,m):
    l1=0
    l2=0
    st=0
    N=n.split()
    M=m.split()
    res=[]
    for ch in n:
        l1+=1
    for ch in m:
        l2+=1
    for i in range(l1):
        if i==l1-1 or n[i+1]==' ':
            if n[st:i+1] not in m:
                res.append(n[st:i+1])
            st=i+2
    st=0
    for j in range(l2):
        if j==l2-1 or m[j+1]==' ':
            if m[st:j+1] not in n:
                res.append(m[st:j+1])
            st=j+2
    print(res)
def main():
    n=input()
    m=input()
    ucw(n,m)

if __name__=="__main__":
    main()






# l="136"
# l=list(l)
# print(l)