#-*- coding: ISO-8859-4 -*-
# Programm leiab kolmnurga pindala, kui on teada alus ja kõrgus
# Sisend: a - alus
#         b - kõrgus
# Väljund: S - pindala

print("Programm aitab Sul leida kolnurga pindala.")
a = eval(input("Sisesta kolmnurga alus "))  # Sisend teisendatakse täisarvuks või ujukomaarvuks
h = eval(input("Sisesta kolmnurga kõrgus "))
S = a * h / 2                               # Arvutatakse tulemus
print("Kolmnurga pindala on ", S)           # Trükitakse ekraanile vastus
