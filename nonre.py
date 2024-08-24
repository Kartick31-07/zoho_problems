def nonre(n):
    s={}
    l=''
    for ch in n:
        if ch not in s:
            s[ch]=1
        else:
            s[ch]+=1
    for char in n:
        if s[char]==1:
            l+=char
    print(l)

def main():
    n=input("enter ")
    nonre(n)

if __name__=="__main__":
    main()