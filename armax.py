def ispal(n):
    # n=d
    i=0
    j=0
    for char in n:
        j+=1
    a=[None]*j
    while i<j:
        if n[i]==n[j-1]:
           i+=1
           j-=1
        else:
           print("not palindrome")
           return

    print("palindrome")
    # print("".join(a))
def main():
    n=input("enter ")

    ispal(n)

if __name__=="__main__":
    main()