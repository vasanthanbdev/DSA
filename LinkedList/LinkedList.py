class ListNode:
    def __init__(self, val: int = 0, next = None) -> None:
        self.val = val
        self.next = next
        

class LinkedList:
    def __init__(self, head = None) -> None:
        self.head = head
        
    def ListAppend(self, val) -> None:
        node = ListNode(val)
        if not self.head:
            self.head = node
        else:
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
            
        
if __name__ == "__main__":
    # Example usage:
    my_linked_list = LinkedList()
    my_linked_list.ListAppend(1)
    my_linked_list.ListAppend(2)
    my_linked_list.ListAppend(3)
    my_linked_list.ListDisplay()  # Output: 1 -> 2 -> 3 -> None
    my_linked_list.ListPrepend(0)
    my_linked_list.ListDisplay()  # Output: 0 -> 1 -> 2 -> 3 -> None
    my_linked_list.ListDeleteNode(2)
    my_linked_list.ListDisplay()  # Output: 0 -> 1 -> 3 -> None