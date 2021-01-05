line =  input()
S = line.split()
simon = True
ansR = ""
amsW = ""
bool R = 
bool W
for s in S:
    if s == 'RU':
        if R == True:
            simon = False
        R = True
    elif s == 'RD':
        if R == False:
            simon = False
        R = False
    elif s == 'WU':
        if W == True:
            simon = False
        W = True
    elif:
        if W == False:
            simon = False
        W = False
if simon == True:
    print("Simon")
else:
    if R == True:
        ansR = "U"
    else:
        ansR = "D"
    
    if W == True:
        ansW = "U"
    else:
        ansW = "D"
    print("Alice")
    print(ansR + ansW)

