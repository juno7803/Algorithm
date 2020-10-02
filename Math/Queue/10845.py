import sys
input=sys.stdin.readline

class queue:
    def __init__(self):
        self.items = []
    def push(self,x):
        self.items.append(x)
    def pop(self):
        if(self.items):
            print(self.items[0])
            self.items.remove(self.items[0])
        else:
            print(-1)
    def size(self):
        print(int(len(self.items)))
    def empty(self):
        if(not self.items):
            print(1)
        else: 
            print(0)
    def front(self):
        if(self.items):
            print(self.items[0])
        else:
            print(-1)
    def back(self):
        if(self.items):
            print(self.items[int(len(self.items)-1)])
        else:
            print(-1)

n = int(input())
que = queue()
for i in range(0,n):
    op = list(input().split())
    if(op[0] == 'push'):
        que.push(op[1])
    elif(op[0] == 'pop'):
        que.pop()
    elif(op[0] == 'size'):
        que.size()
    elif(op[0] == 'empty'):
        que.empty()
    elif(op[0] == 'front'):
        que.front()
    elif(op[0] == 'back'):
        que.back()
    elif(op[0] == 'empty'):
        que.empty()

