#-*- coding: ISO-8859-4 -*-
# Programm leiab kolmnurga pindala, kui on teada alus ja k�rgus
# Sisend: a - alus
#         b - k�rgus
# V�ljund: S - pindala

print("Programm aitab Sul leida kolnurga pindala.")
a = eval(input("Sisesta kolmnurga alus "))  # Sisend teisendatakse t�isarvuks v�i ujukomaarvuks
h = eval(input("Sisesta kolmnurga k�rgus "))
S = a * h / 2                               # Arvutatakse tulemus
print("Kolmnurga pindala on ", S)           # Tr�kitakse ekraanile vastus
