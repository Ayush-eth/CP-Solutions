a = input()
for i in range(0,len(a)):
    if(a[i]=='A' or 
        a[i]=='a' or 
        a[i]=='E' or 
        a[i]=='e' or 
        a[i]=='I' or 
        a[i]=='i' or 
        a[i]=='O' or 
        a[i]=='o' or 
        a[i]=='U' or 
        a[i]=='u' or
        a[i]=='Y' or
        a[i]=='y' ):
            continue
        
    else:
        b="."
        print(b,end="")
        print(a[i].lower(),end="")