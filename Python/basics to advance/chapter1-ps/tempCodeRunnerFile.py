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