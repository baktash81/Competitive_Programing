from itertools import count


size = int(input())
for i in range(size) :
    test_size = int(input())
    arr = []
    line = input().split()
    dic = {}
    for j in range(test_size) :
        arr.append(line[j])
        if(line[j] not in dic.keys()) :
            dic[line[j]] = 0
        dic[line[j]]+=1
    final_result = []
    flag = True
    for j in range(test_size) :
        if dic[arr[j]] >= 3  and (arr[j] not in final_result and (flag)) :
            final_result.append(arr[j])
            print(arr[j])
            flag = False
    if(flag == True) :
        print(-1)



