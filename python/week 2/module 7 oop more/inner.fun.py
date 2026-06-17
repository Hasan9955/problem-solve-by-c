#function is a first class object

def double_decker():
    print("starting the double decker0")
    def inner_fun():
        print("inside the inner fun")
        return 3000
    return inner_fun


# print(double_decker()())


def do_something(work):
    print('work started')
    print(work())
    print('work finished')


# do_something(2)
# do_something("i am busy")
def coding():
    print("coding started")


# do_something(coding)


def sleeping():
    print('sleeping and dreaming in python')

do_something(sleeping)