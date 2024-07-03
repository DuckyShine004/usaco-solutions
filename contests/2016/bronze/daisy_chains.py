nums=[1,1,2,3]
n=len(nums)

for i in range(n):
    for j in range(i,n):
        s=0
        for k in range(i,j+1):
            s+=nums[k]
        avg=s//(j-i+1)
        for k in range(i,j+1):
            if(nums[k]==avg):
                res+=1


print(res)

