
"""

def full_name(first, last):
    name = f'{first} {last}'
    return name 

# take parameters in order
# name = full_name("Hasan", "Ali")

name = full_name(last="Ali", first="Hasan")
print(name)

"""


#  def key args (**kargs)
def famous_name(first, last, title, **addition):
    name = f"{title} {first} {addition['middle']} {last}"
    # print("Addition", addition['age'])
    for key, value in addition.items():
        print(key, value)
    return name, addition

name = famous_name(first="Ali", last = "Hossain", title= "Mawlana", age=50, addition="Hujur", middle="")

print(name)
