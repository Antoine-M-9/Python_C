def main(): # pas de signification particulière mais c'est courant en python
# resemblance au langage c

    x = int(input("x: ")) # demande un entier
    y = int(input("y: "))
    
    print(f"x is {x}, y is {y}")
    
    tmp = x # swap x à y
    x = y
    y = tmp
    
    print(f"x is {x}, y is {y}") # imprime le résultat après le swap
    
main() # Ferme la fonction