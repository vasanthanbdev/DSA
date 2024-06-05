
# using stack
def reverserWords(s: str) -> str:
    if (len(s) == 0):
        return s

    # iterate through the words of the str
    # add the curr word to the stack
    stack = []
    s_s = s.split()
    
    for i in s_s:
        stack.append(i)
    
    # pop the elements and add to the res
    res = ""
    while (stack):
        res += stack.pop()
        res += " "
        
    return res


if __name__ == "__main__":
    s = "Hello World"
    print(reverserWords(s))
    