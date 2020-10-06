
### 자료구조
STACK
``` python3
    class stack:
    def __init__(self):
        self.items = []

    def push(self,item):
        self.items.append(item)

    def pop(self):
        if(self.isEmpty()):
            return self.items.pop()
        else:
            return 0
        
    def isEmpty(self):
        if not self.items:
            return 1
        else:
            return 0

    def size(self):
        print(len(self.items))

```
