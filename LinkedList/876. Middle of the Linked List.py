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
    
    def list_display(self, head) -> None: 
        curr = head
        while curr:
            print(curr.val, end="->")
            curr = curr.next
        print("None")
        return
    
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow, fast = head, head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow
    

if __name__ == "__main__":
    my_list = LinkedList()
    vals = [int(x) for x in input().split(",")]
    for val in vals:
        my_list.list_append(val)
    my_list.list_display(my_list.head)
    my_list.list_display(my_list.middleNode(my_list.head))