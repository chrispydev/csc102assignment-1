import random

print('I am thinking of a number between 1 and 99')
n = random.randint(1, 99)
# print(n)
while True:
    guess = int(input('Enter a guess: '))
    if guess == n:
        print(f'Congrat! The number is: {n}')
        # print('Congrat! The number is: ' + str(n))
        break
    elif guess > n:
        print('Your Guess is TOO HIGH')
        print('Try again')
    else:
        print('Your Guess is TOO LOW')
        print('Try again')
