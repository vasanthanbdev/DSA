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
    
    def list_display(self) -> None: 
        curr = self.head
        while curr:
            print(curr.val, end="->")
            curr = curr.next
        print("None")
        return
        
    def reorderList(self, head: Optional[ListNode]) -> None:
        #divide the list into two halves
        slow, fast = head, head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        #reverse the second half
        second = slow.next
        prev = slow.next = None
        while second:
            temp = second.next
            second.next = prev
            prev = second
            second = temp
            
        #merge two halves
        first, second = head, prev
        while second:
            temp1, temp2 = first.next, second.next
            first.next = second
            second.next = temp1
            first, second = temp1, temp2
        
        self.head = head
        return self.head
        
if __name__ == "__main__":
    my_list = LinkedList()
    vals = [int(x) for x in input().split(",")]
    for val in vals:
        my_list.list_append(val)
    my_list.list_display()
    my_list.reorderList(my_list.head)
    my_list.list_display()