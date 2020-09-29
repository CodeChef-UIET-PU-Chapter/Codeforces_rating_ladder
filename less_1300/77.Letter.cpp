head=input().split(" ")
s2=input().split(" ")
headDict={}
for i in range(len(head)):
    for j in range(len(head[i])):
        if(head[i][j] not in headDict.keys()):
            headDict[head[i][j]]=1
        else:
            headDict[head[i][j]]+=1    
s2Dict={}
for i in range(len(s2)):
    for j in range(len(s2[i])):
        if(s2[i][j] not in s2Dict.keys()):
            s2Dict[s2[i][j]]=1
        else:    
            s2Dict[s2[i][j]]+=1
#print(headDict)
#print(s2Dict)
 
for i in(s2Dict):
    if(i not in headDict.keys()):
        print("NO")
        exit(0)
    else:
        if(s2Dict[i]>headDict[i]):
            print("NO")
            exit(0)
print("YES") 
