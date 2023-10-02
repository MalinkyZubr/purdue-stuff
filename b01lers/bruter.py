char_list = ['g', 'd', '7', '2', '3', 'l', 'b', 'y', '9', '8', '0', 'a', '4', 'u', 'n', 'j', '1', 'k', 'c', 'e', 'i', 'q', '5', 't', 'r']

base_password = list("ggggg")
result_list = []
def gen_list(string, level=0):
    while True:
        for character in char_list:
            string[level] = character
            print(string)
            if level != len(string) - 1:
                gen_list(string, level=level+1)
                return
            result_list.append(string)


gen_list(base_password)
        
        



