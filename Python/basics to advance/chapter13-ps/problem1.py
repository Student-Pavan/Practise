from functools import reduce

# def divisibleby5(n) :
#     if(n%5 == 0):
#         return True
#     return False

# a = [2,34,55,75,80,110,25,11,10]

# print(list(filter(divisibleby5 , a)))



l = [11,25,45,11,4785,45,525,256]

def greater(a,b):
    if(a>b):
        return a
    return b

print((reduce(greater,l)))