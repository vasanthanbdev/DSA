from typing import *

class ListNode:
    def __init__(self, val: int = 0, next = None) -> None:
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self, head: ListNode = None) -> None:
        self.head = head
        
    def ListAppend(self, val: int) -> None:
        if not self.head:
            self.head = ListNode(val)
            return
        node = ListNode(val)
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = node
        return
    
    def ListDisplay(self, node: Optional[ListNode] = None) -> None:
        if not node:
            curr = self.head
        else:
            curr = node
        while curr:
            print(curr.val, end="->")
            curr = curr.next
        print("None")
        return
        
class Solution():
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = node = ListNode()
        while (list1 and list2):
            if (list1.val < list2.val):
                node.next = list1
                list1 = list1.next
            else:
                node.next = list2
                list2 = list2.next
            node = node.next
        node = list1 or list2
        return head.next
    
if __name__ == "__main__":
    mylist1 = LinkedList()
    mylist2 = LinkedList()
    list1 = []
    list2 = [0]
    for l in list1:
        mylist1.ListAppend(l)
    for l in list2:
        mylist2.ListAppend(l)
    mylist1.ListDisplay(mylist1.head)
    mylist2.ListDisplay(mylist2.head)
    sol = Solution()
    head = sol.mergeTwoLists(mylist1.head, mylist2.head)
    sol.ListDisplay(head)