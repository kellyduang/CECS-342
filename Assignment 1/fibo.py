import time

def main():
    n = int(input("Enter a number: "))
    while(n < 0):
        n = int(input("Enter a number: "))
    if(n == 0):
        print("0")
    elif(n > 1):
        start_time = time.time();
        print("0 : 0 ", ((time.time() - start_time)), "sec")
        for nums in range(1, n + 1):
            start_time_2 = time.time();
            print(nums, ":", fibo(nums), " ", ((time.time() - start_time_2)), "sec")
    print("Done")

def fibo(n):
    if(n == 1 or n == 2):
        return 1
    else:
        return fibo(n-1) + fibo(n-2)

main()