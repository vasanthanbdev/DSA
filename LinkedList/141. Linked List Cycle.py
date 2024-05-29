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
    
    def ListPrepend(self, val) -> None:
        node = ListNode(val)
        node.next = self.head
        self.head = node
        return
        
    def ListDeleteNode(self, val) -> None:
        if not self.head:
            return
        if(self.head.val == val):
            self.head = self.head.next
            return
        current = self.head
        while current.next:
            if(current.next.val == val):
                current.next = current.next.next
                return
            current = current.next 
        return
    
    # utility function to create cycle
    # def createCycle(head, a, b):
        # cnta = 0
        # cntb = 0
        # p1 = head
        # p2 = head
        # while cnta != a or cntb != b:
        #     if cnta != a:
        #         p1 = p1.next
        #         cnta += 1
        #     if cntb != b:
        #         p2 = p2.next
        #         cntb += 1
        # p2.next = p1
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
        
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not (head or head.next):
            return False
        fast = head
        slow = head
        while(fast and fast.next):
            fast = fast.next.next
            slow = slow.next
            if(fast == slow):
                print("hascylce")
                return True
        print("hasnocycle")
        return False
    

if __name__ == "__main__":
    my_linked_list = LinkedList()
    listvals = map(int, input().split(","))
    for val in listvals:
        my_linked_list.ListAppend(val)
    my_linked_list.ListDisplay()
    my_linked_list.createCycle(1)
    my_linked_list.hasCycle(my_linked_list.head)