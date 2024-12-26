def recoverArray(n, sums):
    sums.sort()  # Ensure the array is sorted
    total = sums[0] + sums[-1]
    nums = []
    
    # Binary search to find the index of `total`
    def binary_search(arr, target):
        low, high = 0, len(arr) - 1
        while low <= high:
            mid = (low + high) // 2
            if arr[mid] == target:
                return mid  # Return the index if found
            elif arr[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        return -1  # Return -1 if not found

    index = binary_search(sums, total)
    if index != -1:
        print("Index of total:", index)
    else:
        print("Total not found in the array")

# Example usage
recoverArray(4, [0, 1, 2, 3, 6, 7, 9, 10])
