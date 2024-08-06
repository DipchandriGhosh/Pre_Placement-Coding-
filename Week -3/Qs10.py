import sys

def compare_files(file1, file2):
    try:
        with open(file1, 'rb') as f1, open(file2, 'rb') as f2:
            while True:
                chunk1 = f1.read(1024)
                chunk2 = f2.read(1024)
                
                if chunk1 != chunk2:
                    return 0  # Files are different

                if not chunk1 and not chunk2:
                    return 1  # Files are identical
                
    except FileNotFoundError as e:
        print(f"Error: {e}")
        return 1
    except IOError as e:
        print(f"Error: {e}")
        return 1

def main():
    if len(sys.argv) != 3:
        print("Usage: python compare_files.py <file1> <file2>")
        sys.exit(1)

    file1 = sys.argv[1]
    file2 = sys.argv[2]

    result = compare_files(file1, file2)
    sys.exit(0 if result == 1 else 1)

if __name__ == "__main__":
    main()
