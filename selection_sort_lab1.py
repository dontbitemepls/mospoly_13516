import random as rn


def getRandomArr(n, a, b):
    arr = []
    for i in range(n):
        arr.append(rn.randint(a,b))
    return arr
    
def getRandomPhones(n):
    arr = []
    for i in range(n):
        arr.append(f'{rn.randint(10,99)}-{rn.randint(10,99)}-{rn.randint(10,99)}')
    return arr


# Задание 1.
def findMin(arr):
    min = arr[0]
    min_idx = 0
    for i in range(1, len(arr)):
        if arr[i] < min:
            min = arr[i]
            min_idx = i
    return min_idx

def selSort(arr):
    arr = arr[:]
    newArr = []
    for i in range(len(arr)):
        min = findMin(arr)
        newArr.append(arr.pop(min))
    return newArr


# Задание 2.
def findMax(arr):
    max = arr[0]
    max_idx = 0
    for i in range(1, len(arr)):
        if arr[i] > max:
            max = arr[i]
            max_idx = i
    return max_idx

def selSort2(arr):
    arr = arr[:]
    newArr = []
    for i in range(len(arr)):
        max = findMax(arr)
        newArr.append(arr.pop(max))
    return newArr


# Задание 3.
def findMin(arr):
    min = arr[0]
    min_idx = 0
    for i in range(1, len(arr)):
        if arr[i] < min:
            min = arr[i]
            min_idx = i
    return min_idx

def selSort3(arr):
    arr = arr[:]
    newArr = []
    for i in range(len(arr)):
        min = findMin(arr)
        newArr.append(arr.pop(min))
    return newArr

def sortPhones(arr):
    phones = []
    for phone in arr:
        phones.append(int(phone.replace('-', '')))

    fixed_phones = []
    for phone in selSort3(phones):
        phone = str(phone)
        fixed_phones.append(f'{phone[:2]}-{phone[2:4]}-{phone[4:]}')
    return fixed_phones


# Вывод результатов.
arr = getRandomArr(10, 2, 103)
print("Task 1\n", arr, "\n", selSort(arr))
arr = getRandomArr(10, 0, 100)
print("Task 2\n", arr, "\n", selSort2(arr))
arr = getRandomPhones(10)
print("Task 3\n", arr, "\n", sortPhones(arr))
