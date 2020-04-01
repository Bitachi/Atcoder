import math
X = int(input())

A = X // 500   #Xを500で割った商
a = X % 500    #Xを500で割った剰余

B = a // 5

print((A * 1000) + B * 5)
