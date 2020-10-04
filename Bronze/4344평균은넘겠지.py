import numpy as np

for _ in range(int(input())):
    li = np.array(list(map(int, input().split())))
    ave = sum(li[1:])/li[0]
    print('%.3f' %(len(li[li > ave])/li[0]*100)+ '%')