def pt(str,div,n1,end):
    l2=n1//div
    st=0
    for i in range(end):
        if (i+1)%l2==0:
            print(str[st:i+1])
            st=i+1
    print(str[st:])
def test(n):
    l1=0

    for ch in n:
        l1+=1
        st=0
    for i in range(l1):
        if ord(n[i])>47 and ord(n[i])<58:
            st=i
            break
    n1=int(''.join(n[st:]))
    divisor=n1%10
    n1//=10
    n=n[:st]
    pt(n,divisor,n1,st)
def main():
    n='karthick raja122'
    test(n)

if __name__=="__main__":
    main()