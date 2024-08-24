def prtb(mat,n,m):
    row=[]
    for i in range(n):
        col=[]
        for j in range(m):
            if i==0 or j==0 or i==n-1 or j==m-1:
                col.append(mat[i][j])
            else:
                col.append(" ")
        row.append(col)
    for rows in row:
        for col in rows:
            print(col ,end='')
        print()

def getm(n,m):
    row=[]
    for i in range(n):
        col=[]
        for j in range(m):
            ip=int(input())
            col.append(ip)
        row.append(col)
    prtb(row,n,m)
def main():
    n=int(input("enter "))
    m=int(input("enter "))

    getm(n,m)

if __name__=="__main__":
    main()