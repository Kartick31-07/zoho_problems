# def jum(n):
#     l=[num for num in str(n)]
#     l1=0

#     for char in l:
#         l1+=1
#     for a in range(l1-1):
#         if abs(int(l[a])-int(l[a+1]))!=1:
#             print("not")
#             return
#     print("yess")
# def main():
#     n=int(input("enter "))
#     jum(n)


# if __name__=="__main__":
#     main()














def jum(n):
    i=0
    l=[None]*n
    while n>0:
      l[i] =n%10
      n//=10
      i+=1
    l=l[:i]

    for j in range(1,i):
        if l[j]-l[j-1]!=1 and l[j]-l[j-1]!=-1:
            print("not")
            return
    print("yess")
       
def main():
    n=int(input("enter "))
    jum(n)


if __name__=="__main__":
    main()