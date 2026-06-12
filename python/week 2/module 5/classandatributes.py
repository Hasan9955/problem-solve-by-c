

def call():
    print('calling someone')
    return 'call done'


class Phone:
    price = 1900
    color = 'blue'
    brand = 'samsung'
    feature = ['camera', 'speaker']


    def call(self):
        print("calling one person")

    def send_sms(self, phone, sms):
        text = f'sending sms to: {phone} and message: {sms}'
        return text



my_phone = Phone()

# print(my_phone)
print(my_phone.brand)
print(my_phone.color)
print(my_phone.price)
print(my_phone.feature)

my_phone.call()
call()
sms = my_phone.send_sms("01400", "I miss you")
print(sms)