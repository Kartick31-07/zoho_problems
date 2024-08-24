def count(s):
    
    count={}
    for char in s:
        if char in count:
            count[char]+=1
        else:
            count[char]=1
    return count

def anass(s,s1):
    d1=count(s1)
    len=0
    len1=0
    for char in s1:
        len+=1
    
    for char in s:
        len1+=1
    
    st=0
    while 1:
        if count(s[st:len])==d1:
            print("found")
            break
        elif len==len1:
            print("not found")
            break
        st+=1
        len+=1

def main():

    s=input("enter the s\n")
    s1=input("enter the s1\n")

    anass(s,s1)

if __name__=="__main__":
    main()