import time

class Graph(object):
    def __init__(self, origin, destination, node_set):
        self.origin = origin
        self.destination = destination
        self.node_set = node_set

    def match_nodes_with_edges(self, test):
        pass

def string_to_int_tuple(string):
    split_string = string.split(" ")
    num_tup = tuple(map(lambda x: int(x), split_string))
    return num_tup
    
if __name__ == "__main__":
    start = time.time()
    with open('2.in', 'r') as f:
        file_list = f.read().split("\n")
        num_tests = int(file_list.pop(0))
        file_list = list(map(string_to_int_tuple, file_list))
    tests = dict()
    for test in range(num_tests):
        nodes, edges = file_list.pop(0)
        test_list = file_list[:edges]
        origin, destination = file_list[edges]
        print(origin)
        tests[str(test)] = Graph(origin, destination, test_list)
        file_list = file_list[edges + 1:]

    print(tests['0'].node_set)
    print(time.time()-start)