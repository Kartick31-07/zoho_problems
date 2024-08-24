def rom(n,s):
    d=n
    sum=''
    while d>0:
        for v in s:
            if d>=v:
                sum+=s[v]
                d-=v
        
        print(d)
    print(sum)
    
def main():
    s={
       
        1000:'M',
        500:'D',
        100:'C',
        50:'L',
        40:'XL',
        10:'X',
        9:'IX',
        5:'V',
        4:'IV',
        1:'i'
    }
    n=43
    rom(n,s)

if __name__=="__main__":
    main()