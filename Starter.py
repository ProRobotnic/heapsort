from heapsort_lib import heap_sort
from heapsort_handmade import *
import time
from test_generator import renew_test_data

overall_start = time.time()
stage_time = time.time()
tests_results = []
datatypes = ["char", "str", "int", "float", "double"]
list_len = [10 ** 3, 10 ** 5, 10 ** 6, 10 ** 7]
names = ["py_lib", "py_handmade"]
code_for_names = {"py_lib": heap_sort,
                  "py_handmade": heapSort}
if input("gen tests? (True/False)"):
    renew_test_data()

def ct():
    global overall_start
    global stage_time
    st = round(time.time() - stage_time, 5)
    stage_time = time.time()
    s = round(time.time() - overall_start, 5)
    m = 0
    h = 0
    if s >= 60:
        m = s // 60
        s %= 60
    if m >= 60:
        h = m // 60
        m %= 60
    if h > 0:
        h = f"{h} hours, "
    else:
        h = ""
    if m > 0:
        m = f"{m} minutes, "
    else:
        m = ""
    return f"overall time is: {h}{m}{s} seconds;previous stage time:{st}"


for name in names:
    print(f"========>{name}, {ct()}")
    tests_results = []
    for ll in list_len:
        print(f">>> {ll}, {ct()}")
        for datatype in datatypes:
            print(f"{datatype}, {ct()}")
            for is_almost_sorted in [False, True]:
                for data_is_repeated in [True, False]:
                    for Ntest in range(5):
                        with open(
                                f"tests/test_data_{str(Ntest)} amount={str(ll)} almost_sorted={str(is_almost_sorted)} data_type={datatype} repeats={data_is_repeated}.txt") as f:
                            if datatype not in ["str", "char", "int"]:
                                f = list(map(lambda x: float(x), f.readline().split(" ")))
                            elif datatype == "int":
                                f = list(map(lambda x: int(x), f.readline().split(" ")))
                            else:
                                f = f.readline().split(" ")
                            overall_time = 0
                            while overall_time == 0:
                                start_time = time.time()
                                out = code_for_names[name](f)
                                overall_time = (time.time() - start_time)
                            """if not (out == sorted(
                                    f)):  # Warning! sorting f takes nlogn time, so stage takes a lot more time than optimised!
                                print(
                                    f"tests/test_data_{str(Ntest)} amount={str(ll)} almost_sorted={str(is_almost_sorted)} data_type={datatype} repeats={data_is_repeated}.txt")"""
                            tests_results.append(
                                {"time": overall_time, "datatype": datatype, "repeats": data_is_repeated,
                                 "almost_sorted": is_almost_sorted, "amount": ll, "ok": (out == sorted(f))})
                            with open(
                                    f"output/{name}/test_result_{name}_{str(Ntest)} amount={str(ll)} almost_sorted={str(is_almost_sorted)} data_type={datatype} repeats={data_is_repeated}.txt",
                                    mode="w") as f1:
                                f1.write(" ".join(list(map(lambda x: str(x), out))))
                                f1.close()
    with open(f"output/{name}/results.txt", "w") as outfile:
        outfile.write(str(tests_results))
        outfile.close()
ct()