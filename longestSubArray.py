def lcb(n):
    s={}
    l1=0
    for char in n:
        l1+=1
    
    max=0
    cst=0
    st=0
    for i in range(l1):
        idx=i
        
        while idx<l1:
            if n[idx] not in s:
                s[n[idx]]=idx
            elif s[n[idx]]>=st:
                st=s[n[idx]]+1
                s[n[idx]]=idx
            if(idx-st+1>max):
                max=idx-st+1
                cst=st
            idx+=1
    print(n[cst:cst+max])
                

def main():
    n=input("enter ")

    lcb(n)






if __name__=="__main__":
    main()