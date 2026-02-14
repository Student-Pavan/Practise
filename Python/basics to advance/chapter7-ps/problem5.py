'''
    * * *
    *   *
    * * *
'''

'''
  *
 ***  
*****
'''

r = int(input("Enter the Range of pattern : "))

for i in range(1,r+1):
    if(i==1 or i==r):
        print("*" * r)
    else :
        print("*",end="")
        print(" "*(r-2),end="")
        print("*",end="")
        print("")    
    