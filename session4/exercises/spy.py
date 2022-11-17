import copy

num = int(input())
coops = dict()
for i in range(num) :
    coops[input()] = 1
e_num = int(input())
result=0
mails = list()
for i in range(e_num) : 
    mails.append(input()) 

test = copy.deepcopy(coops)
for item in mails :
    if len(list(test.keys()))==1  and item==list(test.keys())[0]:
        result+=1
        test = copy.deepcopy(coops)
        if item in test :
            del test[item]
    elif item in test :
        del test[item]
print(result)