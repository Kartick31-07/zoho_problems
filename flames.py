def cal(l):
    flames=['f','l','a','m','e','s']
    l1=0
    for w in flames:
        l1+=1
    while l1>1:
        idx=l%l1
        idx1=idx-1
        if idx1>=0:
            fs=flames[:idx1]
            ls=flames[idx1+1:]
            flames=fs+ls
            print(flames)
        else:
            flames=flames[:l1-1]
            print(flames)
        l1-=1
    
        
def fla(n,m):
    l1=0
    l2=0
    nl=[w for w in n]
    ml=[wr for wr in m]
    for ch in n:
        l1+=1
    for a in m:
        l2+=1
    for i in range(l1):
        if nl[i]==' ':
            nl[i]=''
    for j in range(l2):
        if ml[j]==' ':
            ml[j]=''
    for w in range(l1):
        for wr in range(l2):
            if nl[w]==ml[wr]:
                nl[w]=''
                ml[wr]=''
    nl=''.join(nl+ml)
    # print(nl)
    l3=0
    for nw in nl:
        l3+=1
    cal(l3)
        
def main():
    n=input("enter ")
    m=input("enter ")
    fla(n,m)

if __name__=="__main__":
    main()