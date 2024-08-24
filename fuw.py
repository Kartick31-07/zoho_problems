def fuw(n):
    st=0
    end=0
    l1=0
    l=[]
    for char in n:
       l1+=1
    for i in range(l1):
        if i==l1-1 or n[i+1]==' ':
            if n[st:i+1] not in l:
                l.append(n[st:i+1])
            st=i+2
    print(l)
def main():
    n=input()

    fuw(n)

if __name__=="__main__":
    main()