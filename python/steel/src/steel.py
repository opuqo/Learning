# -*- coding: koi8-r -*-
import math
PI = math.pi
p = 7850
d1 = 0.01
d2 = 0.014
light = 1

M1 = PI*p*((d1/2) ** 2)
M2 = PI*p*((d2/2) ** 2)
print 'масса 1 метра арматуры d = 10', ' = ', M1, 'кг'
print 'масса 1 метра арматуры d = 14', ' = ', M2, 'кг'