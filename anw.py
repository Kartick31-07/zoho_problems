def anaw(l,n):

    fl=[]
    for i in range(n):
        if l[i]!=-1:
            fl1=[l[i]]
            cur=sorted(l[i])
            l[i]=-1
            for j in range(i+1,n):
                if l[j]!=-1 and sorted(l[j])==cur:
                    fl1.append(l[j])
                    l[j]=-1
            fl.append(fl1)
    print(fl)



def main():

    l=[]

    n=int(input("enter the num"))

    for i in range(n):
        l.append(input())

    anaw(l,n)

if __name__=="__main__":
    main()





# l=[None]*10
# for i in range(5):
#     l[i]=input("enter ")
# b=l[:5]
# print(b)