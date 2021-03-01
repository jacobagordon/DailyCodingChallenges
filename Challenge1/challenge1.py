import numpy as np

def sum(K, arr):

    for x in range(len(arr)):
        for y in range(x+1, len(arr)):
            if arr[x] + arr[y] == K:
                print(arr[x], arr[y])
                return True

    return False

K = 30
arr = np.array([10, 15, 3, 7, 3, 1, 30, 64])
print(sum(K, arr))