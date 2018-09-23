#-*- coding: ISO-8859-4 -*-
#Programm aitab leida inimese ideaalkaalu, rasvasuse%, tiheduse, ruumala ja pindala.
#Vajalikud andmed kaal, pikkus, vanus.

import math
weight = int(input("Sisesta oma kaal kilogrammides"))
height = int(input("Sisesta oma pikkus sentimeetrites"))
age = int(input("Sisesta oma vanus aastates"))

id_weight = (3*height-450+age)*0.25+45
print("Su ideaalkaal oleks", round(id_weight,1),"kg")

fat_prcnt = ((weight-id_weight)/weight)*100+15
print("Su idealne rasvasuse % oleks", round(fat_prcnt,1))

density = 8.9*fat_prcnt+11*(100-fat_prcnt)
print("Su ideaalne tihedus oleks", round(density,2))

volume = weight/density
print("Su ideaalne ruumala oleks", round(volume,3))

area = (1000*weight)**((35.75-math.log10(weight))/53.2) * (height**0.3)/3118.2
print("Su ideaalne pindala oleks", round(area,2))
