# # 1a converting pseudocodes into python programs
# cost = int(input('Enter total cost: '))
# revenue = int(input('Enter total revenue: '))
# amount = revenue - cost
# if amount > 0:
#     profit = amount
#     print(f'The profit is GHC{profit}')
# else:
#     loss = amount
#     print(f'The loss is GHC{loss}')

# 1b
payrate = int(input('Enter payrate '))
hours = int(input('Enter hours '))
if payrate < 10 and hours > 40:
    overtimehours = hours - 40
    print(f'The overtime hours is {overtimehours}hrs')
    overtimepay = overtimehours * 1.5 * payrate
    print(f'The overtimepay is GHC{overtimepay}')
    totalpay = 40 * payrate + overtimepay
    print(f'The totalpay is GHC{totalpay}')
else:
    totalpay = hours * payrate
    print(f'The totalpay is GHC{totalpay}')
