from math import sqrt

print('Solve any quadratic')
a = float(input('Coefficient of ax^2 '))
b = float(input('Coefficient of bx '))
c = float(input('Coefficient of c '))
firstroot = (-b + sqrt(b*b - 4*a*c)) / 2 * a
secondroot = (-b - sqrt(b*b - 4*a*c)) / 2 * a
print(f'The root is [{firstroot}, {secondroot}]')
