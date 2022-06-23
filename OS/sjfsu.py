lis = []
for i in range(int(input('No of process : '))):
    lis.append(int(input(f'P{i+1} = ')))
lis.sort()
new_lis = [0]
for ele in lis:
    new_lis.append(ele+new_lis[-1])
print(f'Waiting time : {sum(new_lis[:-1])/len(new_lis[:-1])}')
print(f'Turn Around time : {sum(new_lis[1:])/len(new_lis[1:])}')
