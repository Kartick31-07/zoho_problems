def rowt(r,n,m):
    r1=[]
    for i in range(m):
        c1=[]
        for j in range(n):
            c1.append(r[j][i])
        r1.append(c1)
    for row in r1:
        print(row)
def getmt(n,m):
    row=[]
    for i in range(n):
        col=[]
        for j in range(m):
            v=int(input("enter "))
            col.append(v)
        row.append(col)
    for r1 in row:
        print(r1)
    rowt(row,n,m)
def main():
    n=int(input("enter "))
    m=int(input("enter "))

    getmt(n,m)

if __name__=="__main__":
    main()