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
    
    # def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        # left = right = head
        # while k:
        #     right = right.next
        #     k -= 1
        # while right and right.next:
        #     right = right.next
        #     left = left.next
        # right.next = head
        # self.head = left.next
        # left.next = None
        # return 
        
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next or k == 0:
            return 
        curr = head
        length = 1
        while curr.next:
            length += 1
            curr = curr.next
        curr.next = head
        k = k % length
        end = length - k - 1
        temp = head
        while end:
            temp = temp.next
            end -= 1
        self.head = temp.next
        temp.next = None
        return 
        
    
if __name__ == "__main__":
    my_list = LinkedList()
    vals = [int(x) for x in input().split(",")]
    for val in vals:
        my_list.list_append(val)
    my_list.list_display(my_list.head)
    k = int(input())
    my_list.rotateRight(my_list.head, k)
    my_list.list_display(my_list.head)