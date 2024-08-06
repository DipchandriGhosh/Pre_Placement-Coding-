import sys

def copy_file(source_filename, destination_filename):
    try:
        with open(source_filename, 'rb') as source_file:
            with open(destination_filename, 'wb') as destination_file:
                while True:
                    buffer = source_file.read(1024)
                    if not buffer:
                        break
                    destination_file.write(buffer)
        print(f"File copied successfully from {source_filename} to {destination_filename}")
    except FileNotFoundError as e:
        print(f"Error: {e}")
    except IOError as e:
        print(f"Error: {e}")

def main():
    if len(sys.argv) != 3:
        print("Usage: python copy_file.py <source_file> <destination_file>")
        sys.exit(1)

    source_filename = sys.argv[1]
    destination_filename = sys.argv[2]

    copy_file(source_filename, destination_filename)

if __name__ == "__main__":
    main()
