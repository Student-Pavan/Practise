import os

def list_directory(path="."):
    try:
        files = os.listdir(path)
        print(f"Contents of directory '{path}':")
        for file in files:
            print(file)
    except FileNotFoundError:
        print("Error: Directory not found!")
    except PermissionError:
        print("Error: Permission denied!")

# Specify the directory path or use the current directory
directory_path = input("Enter directory path (leave empty for current directory): ") or "."
list_directory(directory_path)
