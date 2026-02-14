n = int(input("Enter Number :"))

table=[i*n for i in range(1,11)]

print(table)


with open ("tables.txt" ,"a") as f:
    f.write(str(f"Table of {n}:{table}\n"))