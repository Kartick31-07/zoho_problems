def getm(mat,r,c):
    for i in range(r):
        col=[]
        for j in range(c):
            ip=int(input())
            col.append(ip)
        mat.append(col)
def main():
    n=int(input("enter r1"))
    m=int(input("enter c2"))
    c=int(input("enter r2 or c1"))

    m1=[]
    getm(m1,n,c)

    m2=[]
    getm(m2,c,m)

    for v in m1:
        print(v)
        
    for v1 in m2:
        print(v1)

    res=[]
    for rows in range(n):

        resc=[]
        for cols in range(c):
            sum=0

            for re in range(c):
                sum+=m1[rows][re]*m2[re][cols]
            resc.append(sum)
        res.append(resc)
    
    print("result ")
    for end in res:
        print(end)

if __name__=="__main__":
    main()