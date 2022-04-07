# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:
def guess(n):
    if n>3:
        return -1
    elif n<3:
        return 1  
    else:
        return 0

class Solution:
    def guessNumber(self, n: int) -> int:
        low = 1
        high = n
        while low<=high:
            mid = low + (high -low)//2
            x = guess(mid)
            if x == 0:
                return mid
            if x == -1:
                high = mid -1
            if x == 1:
                low = mid + 1
        return -1


if __name__ == "__main__":
    solution = Solution()
    print("number = " + str(solution.guessNumber(10)))
    
