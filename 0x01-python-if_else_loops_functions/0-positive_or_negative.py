#!/usr/bin/python3
import random
number = random.randint(-10, 10)
digit = number % 0
if digit > 0:
    print(f"{number} is positive")
elif digit == 0:
    print(f"{number} is zero")
else:
    print(f"{number} is negative")
