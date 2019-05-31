import numpy as np
import random

PI = 0.0
def IsInCircle(x,y):
        return np.sqrt(x**2 + y**2) <= 0.5

def find():
        pi = 0.0
        attempts = 0
        counts = 0
        while np.abs(pi - 3.14) > 0.01:
                attempts += 1
                x = random.random() - 0.5
                y = random.random() - 0.5
                counts += IsInCircle(x,y)
                pi = 4*counts/attempts
        return pi

n = input("Please enter an integer:")   

for i in range(int(n)):
        pi = find()
        PI += pi

print(f'pi is {PI/int(n):.5f}')




 