def rti(n,s):
    sum=0
    l1=0
    for vh in n:
        l1+=1
    for i in range(l1):
        if  i==l1-1 or s[n[i]]>=s[n[i+1]]:
           sum+=s[n[i]]
        else:
           sum-=s[n[i]]
    print(sum)



def main():
    s={
        'M':1000,
        'D':500,
        'C':100,
        'L':50,
        'XL':40,
        'X':10,
        'IX':9,
        'V':5,
        'IV':4,
        'I':1
    }
    n='DXCI'

    rti(n,s)

if __name__=="__main__":
    main()