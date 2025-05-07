participants,target = map(int,input().split())
winners = 0

Scores = [];
Scores = list(map(int,input().split()))

for i in range(participants):
    if Scores[i] > 0 and Scores[i] >= Scores[target-1]:
        winners+=1
print(winners)