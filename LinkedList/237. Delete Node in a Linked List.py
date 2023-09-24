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
    
    def deleteNode(self, node):
        node.val = node.next.val
        node.next = node.next.next

if __name__ == "__main__":
    my_linked_list = LinkedList()
    listvals = map(int, input().split(","))
    for val in listvals:
        my_linked_list.ListAppend(val)
    my_linked_list.ListDisplay()
    node = my_linked_list.head
    my_linked_list.deleteNode(node.next.next)
    my_linked_list.ListDisplay()