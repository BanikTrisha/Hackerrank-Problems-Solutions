import math

# Complete the fibonacciModified function below.
def fibonacciModified(t1, t2, n):
    for i in range (3,n+1):
        temp = t1 + (t2**2)
        t1 = t2
        t2 = temp;
    return temp

if __name__ == '__main__':

    t1T2n = input().split()

    t1 = int(t1T2n[0])

    t2 = int(t1T2n[1])

    n = int(t1T2n[2])

    result = fibonacciModified(t1, t2, n)

    print(str(result))
    print('\n')
