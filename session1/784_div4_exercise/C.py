inp = int(input())
def fun(arr,arr_size) :
    for j in range(0,arr_size-2,2) :
            if (arr[j]%2!=arr[j+2]%2):
                return "NO"
    for j in range(1,arr_size-2,2) :
            if (arr[j]%2!=arr[j+2]%2):
                return "NO"
    return "YES"
for i in range(inp) :
    arr_size = int(input())
    arr = list(map(int,input().split()))
    print(fun(arr,arr_size))