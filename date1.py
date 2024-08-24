def pal(d,m,y):
    sum=d+m+y
    st=0
    l1=0
    for ch in sum:
        l1+=1
    l1-=1
    while st<l1:
        if sum[st]!=sum[l1]:
            print("not palindrome")
            return
        st+=1
        l1-=1
    print("palindrome")
def maxd(m,y):
    odd=[1,3,5,7,8,10,12]
    even=[4,6,9,11]
    if m in odd:
        return 31
    elif m in even:
        return 30
    elif m==2 and isleap(y):
        return 29
    elif m==2 :
        return 28
    else:
        return 0
    
def isleap(y):
    if y%100==0 and y%400==0:
        return True
    elif y%100==0:
        return False
    elif y%4==0:
        return True
    else:
        return False
def valid(d,m,y):
   
    
    if d<=maxd(m,y):
        print("valid")
        return
    else:
        print("not valid")
    
def tnum(n):
    val=0
    for ch in n:
        val=val*10+ord(ch)-ord('0')
    return val
def dat(n):
    l1=0
    
    for ch in n:
        l1+=1
        d=0
        m=0
        y=0
        st=0
        ct=0
    for i in range(l1):
        if n[i]=='/' and ct<1:
            dst=n[:i]
            d=tnum(n[:i])
            st=i+1
            ct+=1
        elif n[i]=='/' and ct==1:
            mst=n[st:i]
            m=tnum(n[st:i])
            st=i+1
            ct+=1
        else:
            yst=n[st:]
            y=tnum(n[st:])
    valid(d,m,y)
    pal(dst,mst,yst)

def main():
    n='29/01/1092'

    dat(n)
    

if __name__=="__main__":
    main()



















#     def isleap(y):
#     if y%100==0 and y%400==0:
#         return True
#     elif y%100==0:
#         return False
#     elif y%4==0:
#         return True
#     else:
#         return False
# def valid(d,m,y):
#     odd=[1,3,5,7,8,10,12]
#     even=[4,6,9,11]
#     if m in odd and d<=31:
#         print("valid")
#         return
#     elif m in even and d<=30:
#         print("valid")
#         return
#     elif m==2:
#         if d<=28:
#             print("valid")
#             return
#         elif isleap(y) and d==29:
#             print("valid")
#             return
#     print("invalid")

# def tnum(n):
#     val=0
#     for ch in n:
#         val=val*10+ord(ch)-ord('0')
#     return val
# def dat(n):
#     l1=0
    
#     for ch in n:
#         l1+=1
#         d=0
#         m=0
#         y=0
#         st=0
#         ct=0
#     for i in range(l1):
#         if n[i]=='/' and ct<1:
#             d=tnum(n[:i])
#             st=i+1
#             ct+=1
#         elif n[i]=='/' and ct==1:
#             m=tnum(n[st:i])
#             st=i+1
#             ct+=1
#         else:
#             y=tnum(n[st:])
#     valid(d,m,y)

# def main():
#     n='29/02/2023'

#     dat(n)

# if __name__=="__main__":
#     main()