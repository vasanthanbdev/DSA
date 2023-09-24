from typing import *

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val: int=0, next=None):
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self, head: ListNode=None) -> None:
        self.head = head
    
    def list_append(self, val: int) -> None:
        node = ListNode(val)
        if not self.head:
            self.head = node
        else:
            curr = self.head
            while curr.next:
                curr = curr.next
            curr.next = node
        return
    
    def list_display(self, head: ListNode) -> None: 
        curr = head
        while curr:
            print(curr.val, end="->")
            curr = curr.next
        print("None")
        return
    
class Solution(LinkedList):
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode()
        curr = head
        carry = 0
        
        while l1 or l2 or carry:
            v1, v2 = l1.val if l1 else 0, l2.val if l2 else 0
            
            sum = v1 + v2 + carry
            carry = sum // 10
            sum %= 10
              
            curr.next = ListNode(sum)
            curr = curr.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return head.next
    
    
if __name__ == "__main__":
    my_list1, my_list2 = LinkedList(), LinkedList()
    vals1, vals2 = [int(x) for x in input().split(",")], [int(x) for x in input().split(",")]
    for val1, val2 in zip(vals1, vals2):
        my_list1.list_append(val1)
        my_list2.list_append(val2)
    my_list1.list_display(my_list1.head)
    my_list2.list_display(my_list2.head)
    sol = Solution()
    sol.list_display(sol.addTwoNumbers(my_list1.head, my_list2.head))