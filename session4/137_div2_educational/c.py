from cgi import test


test_num = int(input())
for i in range(test_num) :
    num = int(input())
    arr = [0]*num
    line =input()
    for i in range(len(line)) :
        arr[i] = [0,0]
        arr[i][1] = int(line[i])
    line = list(map(int,input().split(" ")))
    result=0
    for i in range(len(line)) :
        arr[i][0] = line[i]
    for i in range(num-1) :
        if arr[i][1]==1 and arr[i+1][1]==1 :
            arr[i][0] += arr[i+1][0]
            arr.pop(i+1)
    for i in range(num-1) :
        if(arr[i][0]>arr[i+1][0]):
            if arr[i+1][1]==1 and arr[i][1]==0 :
                arr[i][1]=1
                arr[i+1][1]=0
            elif arr[i+1][1]==1 and arr[i][1]==1 and arr[i-1][1]==0 and arr[i-1][0]+arr[i][0]>=arr[i+1][0]+arr[i][0]:
                arr[i-1][1]=1
                arr[i][1]=1
                arr[i+1][1]=0
    for i in range(num) :
        if(arr[i][1]==1) :
            result+=arr[i][0]
    print(result)