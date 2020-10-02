

class stack:
    def __init__(self):
        self.items = []

    def push(self,item):
        self.items.append(item)

    def pop(self):
        if(self.items):
            print(self.items.pop())
        else:
            print(-1)
        
    def empty(self):
        if not self.items:
            print(1)
        else:
            print(0)

    def size(self):
        print(len(self.items))

    def top(self):
        if(self.items):
            print(self.items[int(len(self.items))-1])
        else:
            print(-1)

n = int(input())
stk = stack()

for i in range(0,n):
    op = list(input().split())
    if(op[0] == "push"):
        stk.push(op[1])
    elif(op[0] == "pop"):
        stk.pop()
    elif(op[0] == "size"):
        stk.size()
    elif(op[0] == "empty"):
        stk.empty()
    elif(op[0] == "top"):
        stk.top()