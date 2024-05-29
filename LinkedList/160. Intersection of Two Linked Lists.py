from typing import *

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        #brute force method using hashmap or set
        # hash_set = set()
        # while headA:
        #     hash_set.add(headA)
        #     headA = headA.next
        # while headB:
        #     if headB in hash_set:
        #         return headB
        #     headB = headB.next
        # return None
        
        #optimized approach 
        n1, n2 = headA, headB
        while n1 != n2:
            n1 = headB if not n1 else n1.next
            n2 = headA if not n2 else n2.next
        return n1
        