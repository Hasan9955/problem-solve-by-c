import math
import time


def timer(func):
    def inner(*args):
        print("Time started")
        start = time.time()
        # print(func)
        func(*args)
        print("Time finished")
        end = time.time()
        print(f"Total time taken: {end - start}")
    return inner

# timer()()

@timer
def get_factorial(n):
    print("factorial started")
    result = math.factorial(n)
    print(f"Factorial of {n} is {result}")


# correct way to decorator
get_factorial(12)

# wrong way to decorate
# timer(get_factorial)()


