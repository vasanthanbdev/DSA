from typing import *

class ListNode:
    def __init__(self, val) -> None:
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self) -> None:
        self.head = None
        
    def ListAppend(self, val) -> None:
        node = ListNode(val)
        if not self.head:
            self.head = node
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = node
        return
    
    def ListDisplay(self) -> None:
        current = self.head
        while current:
            print(current.val, end="->")
            current = current.next
        print("None")
        return
    
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        #finding middle
        fast = slow = head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
            
        #reversing 2nd half
        prev = None
        while slow:
            temp = slow.next
            slow.next = prev
            prev = slow
            slow = temp
        
        #checking palindrom
        left, right = head, prev
        while right:
            if (left.val != right.val):
                return False
            left = left.next
            right = right.next
        return True

if __name__ == "__main__":
    my_list = LinkedList()
    vals = [int(x) for x in input().split(",")]
    for val in vals:
        my_list.ListAppend(val)
    my_list.ListDisplay()
    print("True") if my_list.isPalindrome(my_list.head) else print("False")