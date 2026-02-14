def sumNNatural(num):
    if(num < 0):
        return "Enter Positive Number"
    if(num == 1):
        return 1
    
    return (sumNNatural(num-1)+num)


num = int(input("Enter The Number To Find N Natural Sum : "))

print(f"sum {num}: ",sumNNatural(num))