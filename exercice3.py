def main():
    print("Choose 3 numbers")
    a = int(input("Number 1: "))
    b = int(input("Number 2: "))
    c = int(input("Number 3: "))

    if a > b and a > c:
        print(f"{a} est le plus grand nombre")

    elif b > a and b > c:
        print(f"{b} est le plus grand nombre")
    
    elif c > a and c > b:
        print(f"{c} est le plus grand nombre")
    
    else:
        print("Ils sont égaux")
main()