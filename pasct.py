def dim(n):
    tri=[]
    for i in range(n):
        row=[1]*(i+1)
        for j in range(1,i):
            row[j]=tri[i-1][j-1]+tri[i-1][j]
        tri.append(row)

    for ch in tri:
        for i in range(n-len(ch)):
            print(" ",end='')
        for d in ch:
            print(d,end=' ')
        print()
            

def main():
    n=int(input())

    dim(n)

if __name__=="__main__":
    main()