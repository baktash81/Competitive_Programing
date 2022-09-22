test_num = int(input())

for i in range(test_num) :
    string_size = int(input())
    strings = input().split('W')
    result = True 
    for sub in strings : 
        if (('BR' not in sub) and ('RB' not in sub)) and sub!='' :
            result = False
    if result :
        print("YES")
    else : 
        print("NO")

