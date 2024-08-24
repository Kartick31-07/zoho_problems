def anarg(s,s1):

    c1=0 
    c2=0
    for c in s:
        c1+=1
    for c in s1:
        c2+=1
    if(c1!=c2):
        print("not anarg")
    else:
        for i in range(c1):
            if s[i]!=s1[i]:
                print("not")
                return
        
        print("anarg")
        print(i)
        print(c1)
        return
def main():
    s=input("enter the s")
    s1=input("enter the s1")
    anarg(s,s1)

if __name__=="__main__":
    main()
