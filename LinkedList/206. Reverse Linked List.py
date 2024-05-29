from typing import *

class ListNode:
    def __init__(self, val = 0, next = None) -> None:
        self.val = val
        self.next = next
        
class LinkedList:
    def __init__(self, node = None) -> None:
        self.head = node 
        
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
        
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        prev = None
        while curr:
            temp = curr.next
            curr.next = prev 
            prev = curr
            curr = temp
        self.head = prev
        return self.head
        

if __name__ == "__main__":
    mylist = LinkedList()
    llist = [1,2,3,4,5]
    for l in llist:
        mylist.ListAppend(l)
    mylist.ListDisplay()
    mylist.reverseList(mylist.head)
    mylist.ListDisplay()