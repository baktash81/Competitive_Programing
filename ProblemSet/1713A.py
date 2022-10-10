

from math import sqrt


test_num = int(input())

for i in range(test_num) :
    n = int(input())
    nodes = [[0],[0],[0],[0]]
    for j in range(n) :
        x,y = map(int,input().split())
        if x>0 :
            nodes[0].append(x)
        elif x<0 :
            nodes[1].append(x)
        elif y>0 :
            nodes[2].append(y)
        elif y<0 :
            nodes[3].append(y)
    result = 0
    result += abs(2*max(nodes[0]))
    result += abs(2*min(nodes[1]))
    result += abs(2*max(nodes[2]))
    result += abs(2*min(nodes[3]))
    print(result)