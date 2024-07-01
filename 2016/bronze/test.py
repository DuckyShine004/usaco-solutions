nums=[1,1,2,3]
res=0
n=4

for i in range(n):
    for j in range(i,n):
        s=0
        print(i,j)
        for k in range(i,j+1):
            s+=nums[k]
        avg=s/(j-i+1)
        for k in range(i,j+1):
            if(nums[k]==avg):
                res+=1
                break

print(res)
        
