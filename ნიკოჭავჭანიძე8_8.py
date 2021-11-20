#1

a = ((9.5*4.5)-(2.5*3))/(45.5-3.5)
print(a)

#2

minute = 45.3
km = 14
mile = km * 1.6
hours = minute/60
print(mile/hours)

#3

import random
x = random.randint(100,999)
seconds = x % 60;
minute = (x - seconds)/60
print(x , minute , seconds)

#4

a=2.59
b=-8.92
d=2*b/a**b
c=(a-2*b)/d**2
r=(2.79*a+3*d)/(b**2-2*a*c)
print(4/(3*(r+34))-9*(a+b*c)+(3+d*(2+a))/(a+b*d))



#5

import math
x1 = 1
x2 = 2
y1 = 3
y2 = 4
print(math.sqrt((x2-x1)**2 + (y2-y1)**2))

#6

a = 12.512
b = 3.98j
k = a-b
print((a+b)/2)