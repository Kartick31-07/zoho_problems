def rt(mat,n,m):
    row=[]
    for i in range(n-1,-1,-1):
        col=[]
        for j in range(m):
            col.append(mat[i][j])
        row.append(col)
    print("after ")
    for r in row:
        print(r)

def rowt(n,m):
    row=[]     
    for i in range(n):
        col=[]
        for j in range(m):
            ip=int(input("enter "))
            col.append(ip)
        row.append(col)
    for r1 in row:
        print(r1)
    rt(row,n,m)
def main():
    n=int(input("enter "))
    m=int(input("enter "))

    rowt(n,m)

if __name__=="__main__":
    main()