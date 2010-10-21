nach = 393
stranic = 16
print '123'
chet = range(nach+1,nach+stranic*8,2)
i = 0
J = []
nechet = range(nach,nach+stranic*8,2)
while i < len(chet):
    J = chet[i:i+4]
    for x in [1, 0, 3, 2]: nechet.append(J[x])
    i+=4
filej = open('nomera.txt', 'w')
filej.write(str(nechet))