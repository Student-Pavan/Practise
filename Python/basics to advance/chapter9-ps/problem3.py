def generatetable(n):
    
    for i in range(1,11):
        w = open(f"chapter9-ps/table/table_{n}.txt","a")
        w.write(str((f"{n} X {i} = {n*i} \n")))
        w.close()




for i in range(2,21):
    generatetable(i)