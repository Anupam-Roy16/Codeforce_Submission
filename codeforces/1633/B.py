for i in range(int(input())):
    string=input()
    num_1=0
    for j in range(len(string)):
        if string[j]=='1':
            num_1+=1
    if num_1==0 or num_1==len(string):
        print("0")
    elif num_1==1 and len(string)-num_1==1:
        print("0")
    elif num_1==len(string)-num_1:
        print(num_1-1)
    else:
        print(min(num_1,len(string)-num_1))









