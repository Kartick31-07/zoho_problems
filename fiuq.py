def fuq(n):
    s={}
    for char in n:
        if char in s:
            s[char]+=1
        else:
            s[char]=1
    for ch in n:
        if s[ch]==1:
            print(ch)
            break

def main():
    n=input("enter ")

    fuq(n)

if __name__=="__main__":
    main()