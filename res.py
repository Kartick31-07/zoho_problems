def res(n):
    num=1
    while num<n:
        num=num<<1
        if num==n:
            print("yesss")
            return
    print("nooo")
def main():
    n=2048
    res(n)

if __name__=="__main__":
    main()



    #  while n>0:
    #     mod=n%2
    #     if n==1:
    #         print("yesss")
    #         return
    #     elif mod!=0:
    #         print("nooo")
    #         return
        
    #     n//=2
   