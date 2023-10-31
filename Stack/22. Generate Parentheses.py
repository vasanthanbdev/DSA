from typing import List

def generateParenthese(n :int) ->  List[str] :
    stack = []
    res = []
    
    # backtracking conditions
        # only add open parenthesis if open < n
        # only add closed parenthesis if closed < open
        # valid if open == closed == n
    
    def backTrack(openN, closedN):
        if (openN == closedN == n):
            res.append("".join(stack))
            return 
        
        if (openN < n):
            stack.append("(")
            backTrack(openN + 1, closedN)
            stack.pop()
        
        if (closedN < openN):
            stack.append(")")
            backTrack(openN, closedN + 1)
            stack.pop()
        
    backTrack(0, 0)
    return res


if __name__ == "__main__":
    n = int(input())
    print(generateParenthese(n))