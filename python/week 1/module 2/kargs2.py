 
balance = 5000

def buy_things(item, price):
    global balance
    
    print("Balance inside the function ", balance)
    # balance = 100
    balance = balance - price
    print(f"Balance after buying {item}", balance)




buy_things("Sunglass", 1000)

