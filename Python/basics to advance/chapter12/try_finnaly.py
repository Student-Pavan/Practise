# try:

#     a = int(input("enter number: "))
#     print(a)

# except Exception as e:
#     print(e)

# finally :
#     print("Hey I am inside Finally  block") #used in functions


def main():
    try:

        a = int(input("enter number: "))
        print(a)

    except Exception as e:
        print(e)

    finally:
        print("Hey I am inside Finally  block")  # used in functions


main()
