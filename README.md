# Baekjoon-Online-judge
Algorithm practice
Target : 1day per 1 problem!

## 알고리즘 인증 스터디 참여
사용 언어 변경 C++ -> Python
10/9 (금)
   - Bronze I [4344](https://www.acmicpc.net/problem/4344)
   - Silver IV [9012](https://www.acmicpc.net/problem/9012)

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
