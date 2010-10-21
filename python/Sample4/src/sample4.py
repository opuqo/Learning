# To change this template, choose Tools | Templates
# and open the template in the editor.

__author__="andrey"
__date__ ="$12.10.2010 22:08:25$"

D ={'food': 'Spam', 'quantity': 4, 'color': 'pink'}
print  D['food']
D['quantity']+=1
print D
#Q = {}
S = D.keys()
print S
F = {'a': 1, 'c': 3, 'b': 2}
for key in sorted(F):
    print key, '=>', F[key]
fqyerogfi = [x ** 2 for x in [1, 2, 3, 4, 5, 6]]
print fqyerogfi
h = open('data.out', 'w')
h.write('fqyerogfi')

class Worker:
        def __init__(self, name, pay):
            self.name = name
            self.pay = pay
        def lastName(self):
            return self.name.split()[-1] 
        def giveRaise(self, percent):
            self.pay *=(1.0 + percent)
bob = Worker('Bob iejfn', 94343)
print bob.lastName()
bob.giveRaise(13)
print bob.pay
print 581.36 - 490.4
print 40 + 234.0725628467
print float(7452)
print int(84.9389845)
print long(34)
chet = range(266,393,2)

#for i in range(265,393):
#    if k < 4:
#    S+=L[i]
#    S = S[0:(i+k)]+L(i+k)+S[]
#J = L[0:0+8]
#print J[1]
i = 0
#G = '0'
J = []
nechet = range(265,393,2)
#J = L[i:i+8]
while i < len(chet):
    J = chet[i:i+4]
    for x in [1, 0, 3, 2]: nechet.append(J[x])
    i+=4
#for x in [0, 2, 4, 6, 3, 1, 7, 5]: G.append(J[x])
print 'stranic', 128/8
print nechet
filej = open('nomera.txt', 'w')
filej.write(str(nechet))
