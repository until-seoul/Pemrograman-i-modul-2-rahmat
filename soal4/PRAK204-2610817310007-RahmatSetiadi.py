r = float(input())
t = float(input())
pi = 22 / 7
volume = pi * r**2 * t  # rumus volume 22/7 * r^2 * t, r= radius/jari jari, t=tinggi
area = 2 * pi * r * (r + t)  # rumus luas
Perimeter = 2 * pi * r  # rumus keliling

print(f"Volume = {volume:.2f}")
print(f"Luas = {area:.2f}")
print(f"Keliling = {Perimeter:.2f}")
