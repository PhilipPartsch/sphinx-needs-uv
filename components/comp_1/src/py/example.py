# @ Hello World, IMPL_PyHelloWorld, impl, [AOU__COMP_1__TESTING]
def print_hello_world():
    print("Hello, World!")

# @rst
# .. impl:: Hello World 2
#    :id: IMPL_PyHelloWorld2
#
#    This is the second implementation of the Hello World example in Python.
# @endrst
def print_hello_world2():
    print("Hello, World2!")

# @need-ids: AOU__COMP_1__TESTING
def main():
    print_hello_world()
    print_hello_world2()


if __name__ == "__main__":
    main()
