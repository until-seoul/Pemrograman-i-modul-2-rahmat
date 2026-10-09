import math

# hypotenuse = sisi miring
# base = sisi alas
# area = luas
# perimeter = keliling
a = float(input())
b = float(input())

if a > b:
    hypotenuse = a
    height = b
else:
    hypotenuse = b
    height = a

base = math.sqrt(hypotenuse**2 - height**2)
perimeter = base + height + hypotenuse
area = 0.5 * base * height


print(f"Alas = {base:.0f} cm")
print(f"Tinggi = {height:.0f} cm")
print(f"Keliling = {perimeter:.0f} cm")
print(f"Luas = {area:.0f} cm^2")
