from typing import List

def longestCommonPrefix(strs: List[str]) -> str:
    if strs is None:
        return ""
    
    # assign the first str to the prefix variable
    # loop through the list of strs
    # check if the prefix is in the current string
    # if not reduce the size of the prefix by 1 untill the condition becomes true
    
    prefix = strs[0]
    for curr in strs:
        while prefix not in curr:
            prefix = prefix[0: len(prefix) - 1] 
    return prefix


if __name__ == "__main__":
    strs = ["flower", "flow", "flight"]
    print(longestCommonPrefix(strs))
        