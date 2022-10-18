from random import *


# This program makes tests for heapsort.
# On the input it takes:
# (filename as "filename",  amount of elements as "amount", is the data almost sorted or not as "almost_sorted",
# type of data as "data_type", Does the data includes repeats as "repeats"
def make_test(filename, amount, repeats=False, almost_sorted=False, data_type="int"):
    if not repeats:
        if data_type == "char":
            out = [choice([chr(randint(97, 122)), chr(randint(65, 90))]) for _ in range(amount)]
        elif data_type == "str":
            out = [("".join([choice([chr(randint(97, 122)), chr(randint(65, 90))]) for __ in range(randint(3, 15))]))
                   for _
                   in
                   range(amount)]
        elif data_type == "int":
            out = [str(randint(1, 40000)) for _ in range(amount)]
        elif data_type == "float":
            out = [str(randint(1, 2 ** 20) / 2 ** 10) for _ in range(amount)]
        elif data_type == "double":
            out = [str(randint(1, 2 ** 40) / 2 ** 20) for _ in range(amount)]
    else:
        if data_type == "char":
            repeatable_char = choice([chr(randint(97, 122)), chr(randint(65, 90))])
            out = [choice(
                [choice([choice([chr(randint(97, 122)), chr(randint(65, 90))]), repeatable_char]), repeatable_char]) for
                   _ in range(amount)]
        elif data_type == "str":
            repeatable_str = (
                "".join([choice([chr(randint(97, 122)), chr(randint(65, 90))]) for __ in range(randint(3, 255))]))
            out = [choice([
                choice(
                    ["".join([choice([chr(randint(97, 122)), chr(randint(65, 90))]) for __ in range(randint(3, 255))]),
                     repeatable_str]), repeatable_str]) for _
                in
                range(amount)]
        elif data_type == "int":
            repeatable_int = str(randint(1, 40000))
            out = [choice([choice([str(randint(1, 40000)), repeatable_int]), repeatable_int]) for _ in range(amount)]
        elif data_type == "float":
            repeatable_float = str(randint(1, 2 ** 33) / 2 ** 10)
            out = [choice([choice([str(randint(1, 2 ** 33) / 2 ** 10), repeatable_float]), repeatable_float]) for _ in
                   range(amount)]
        elif data_type == "double":
            repeatable_double = str(randint(1, 2 ** 62) / 2 ** 10)
            out = [choice([choice([str(randint(1, 2 ** 62) / 2 ** 10), repeatable_double]), repeatable_double]) for _ in
                   range(amount)]

    if almost_sorted:
        out.sort()
        for i in range(randint(min(int(amount ** 0.333) + 1, amount // 10), min(amount // 5, int(amount ** 0.5) + 1))):
            b = randint(0, amount - 1)
            out[b], out[-b] = out[-b], out[b]
    with open(filename, "w") as f:
        f.write(" ".join(out))


# You can test this by uncommenting the code below:
"""make_test("a", 10, data_type="int", almost_sorted=True)
make_test("a", 10, data_type="str")
make_test("a", 10, data_type="char")
make_test("a", 10, data_type="float")"""
datatypes = ["char", "str", "int", "float", "double"]
# Program works v-v-very slow on list_len above 10**6...
# The code below took about 2 hours and 4 minutes...

list_len = [10 ** 3, 10 ** 4, 10 ** 5, 10 ** 6, 10 ** 7]
"""for ll in list_len:
    print(ll)
    for datatype in datatypes:
        for is_almost_sorted in [False, True]:
            for Ntest in range(5):
                make_test(
                    f"tests/test_data_{str(Ntest)} amount={str(ll)} almost_sorted={str(is_almost_sorted)} data_type={datatype}.txt",
                    amount=ll, almost_sorted=is_almost_sorted, data_type=datatype)"""


def renew_test_data():
    for ll in list_len:
        print(ll)
        for datatype in datatypes:
            for is_almost_sorted in [False, True]:
                for data_is_repeated in [True, False]:
                    for Ntest in range(5):
                        make_test(
                            f"tests/test_data_{str(Ntest)} amount={str(ll)} almost_sorted={str(is_almost_sorted)} data_type={datatype} repeats={data_is_repeated}.txt ",
                            amount=ll, almost_sorted=is_almost_sorted, data_type=datatype, repeats=data_is_repeated)

# Made by zer0rbt, 2022
