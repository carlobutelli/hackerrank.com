#!/bin/python3

import sys

a=int(input(''))
for i in range(0,a):
    n=(int(input('')))
    if n%3==0 and n!=0:
        print (n * str(5))
    elif n%3==1 and n>=10:
        print ((n-10)*str(5)+10*str(3))
    elif n%3==2 and n>=5:
        print ((n-5)*str(5)+5*str(3))
    else:
        print ('-1')