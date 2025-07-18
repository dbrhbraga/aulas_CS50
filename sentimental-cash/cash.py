from cs50 import get_float

quarters = 0.25
dimes = 0.10
nickels = 0.05
pennies = 0.01

while True:
    change = get_float("Change: ")
    if change >= 0:
        break

    print("Change cannot be negative.")

change_owed_cents = round(change * 100)
num_coins = 0

while change_owed_cents > 0:

    if change_owed_cents >= 25:
        change_owed_cents -=25
        num_coins += 1
    elif change_owed_cents >= 10:
        change_owed_cents -=10
        num_coins += 1
    elif change_owed_cents >= 5:
        change_owed_cents -= 5
        num_coins += 1
    else:
        change_owed_cents -= 1
        num_coins += 1



print(num_coins)


