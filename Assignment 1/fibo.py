def main():
    n = int(input("Enter a number: "))
    while(n < 0):
        n = int(input("Enter a number: "))
    if(n == 0):
        print("0")
    elif(n > 1):
        print("0 : 0")
        for nums in range(1, n + 1):
            print(nums, ":", fibo(nums))
    print("Done")

def fibo(n):
    if(n == 1 or n == 2):
        return 1
    else:
        return fibo(n-1) + fibo(n-2)

main()