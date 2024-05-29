
def isValid(s: str) -> bool:
    stack = []
    map = {")":"(", "]":"[", "}":"{"}
    for c in s:
        if (c in map):
            if (stack and stack[-1] == map[c]):
                stack.pop()
            else:
                return False
        else:
            stack.append(c)
    return True if not stack else False

if __name__ == "__main__":
    s = "()[]"
    print(isValid(s))