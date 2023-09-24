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
    
    # utility function to create cycle
    def createCycle(self, pos: int):
        temp = self.head
        ptr = self.head
        cnt = 0
        while temp.next != None:
            if cnt != pos:
                ptr = ptr.next
                cnt += 1
            temp = temp.next
        temp.next = ptr
    
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        entry = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                while slow != entry:
                    entry = entry.next
                    slow = slow.next
                return entry
        return None
    
if __name__ == "__main__":
    my_list = LinkedList()
    vals = [int(x) for x in input().split(",")]
    for val in vals:
        my_list.list_append(val)
    my_list.list_display(my_list.head)
    my_list.createCycle(1)
    node = my_list.detectCycle(my_list.head)
    print("None") if node == None else print(node.val)