def pal(n):
    l1=0
    for ch in n:
        l1+=1
    maxi=0
    cts=0
    for i in range(l1):
        st=i
        end=i
        while st>=0 and end<l1 and n[st]==n[end] :
           
            if end-st+1>maxi:
                maxi=end-st+1
                cts=st
            st-=1
            end+=1
        st=i
        end=i+1
        while st>=0 and end<l1 and n[st]==n[end] :
            
            if end-st+1>maxi:
                maxi=end-st+1
                cts=st
            st-=1
            end+=1
    print(n[cts:cts+maxi])

def main():
    n=input("enter ")

    pal(n)



if __name__=="__main__":
    main()