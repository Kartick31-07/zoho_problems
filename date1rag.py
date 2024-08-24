def isleap(y):
    if y%100==0 and y%400==0:
        return True
    elif y%100==0:
        return False
    elif y%4==0:
        return True
    else:
        return False
def maxd(m,y):
    odd=[1,3,5,7,8,10,12]
    even=[4,6,9,11]
    if m in odd:
        return 31
    elif m in even:
        return 30
    elif m==2 and isleap(y):
        return 29
    elif m==2:
        return 28

def pali(s):
    st=0
    l1=0
    for ch in s:
        l1+=1
    l1-=1
    while st<l1:
        if s[st]!=s[l1]:
            return False
        st+=1
        l1-=1
    return True
    

def st(d,m,y):
    ds=''
    ms=''
    ys=''
    n=d
    while d>0:
        mod=d%10
        ds=chr(mod+ord('0')) +ds
        d//=10
    if n<10:
        ds='0'+ds
    n=m
    while m>0:
        mod=m%10
        ms=chr(mod+ord('0')) +ms
        m//=10
    if n<10:
        ms='0'+ms
    while y>0:
        mod=y%10
        ys=chr(mod+ord('0')) +ys
        y//=10
    tot=ds+ms+ys
    if pali(tot):
        print(ds+'/'+ms+'/'+ys)

def main():
    for yr in range(2000,2100):
        for mn in range(1,13):
            for dat in range(1,maxd(mn,yr)+1):
                st(dat,mn,yr)
                

if __name__=="__main__":
    main()