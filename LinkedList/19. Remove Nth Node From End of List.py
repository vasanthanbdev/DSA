from typing import *

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val: int=0, next=None) -> None:
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self, head: ListNode=None) -> None:
        self.head = head
        
    def list_append(self, val: int ) -> None:
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
            
    
    #brute force approach - T: O(2n)
    # def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
    #     curr = head
    #     size = 1
    #     while curr.next:
    #         curr = curr.next
    #         size += 1
    #     # if (size == 1 and n == 1):
    #     #     return None
    #     temp = head
    #     count = 1
    #     pos = size - n
    #     if pos == 0:
    #         head = head.next
    #     while temp:
    #         if count == pos:
    #             temp.next = temp.next.next
    #             return
    #         temp = temp.next
    #         count += 1
    #     return
    
    def removeNthFromEnd(self, n: int) -> Optional[ListNode]:
        dummy = ListNode(0, self.head)
        left = dummy
        right = self.head
        
        while (n > 0):
            right = right.next
            n -= 1
        
        while right:
            left = left.next
            right = right.next
        
        left.next = left.next.next
        self.head = dummy.next
        return self.head   
        
    

if __name__ == "__main__":
    arr = [int(x) for x in input().split(",")]
    n = int(input())
    mylist = LinkedList()
    for i in arr:
        mylist.list_append(i)
    mylist.list_display()
    mylist.removeNthFromEnd(n)
    mylist.list_display()