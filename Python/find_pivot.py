# -*- coding: utf-8 -*-

'''
Author: Jason Wolfe
Date: 04/08/2022
Find pivot for list
'''
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--list", nargs="*",  type=int, default=[1,2,3,4,6,5,4,1])
args = parser.parse_args()

class Solution:
    numbers = []

    def __init__(self):
        self.numbers = args.list

    def __str__(self):
        return str(self.numbers)

    # O(N^2) time and O(1) space
    def find_pivot(self, numbers):
        for x in range(len(self.numbers)):
            
            # add left side
            left_sum = 0
            right_sum = 0
            
            for j in range(0,x):
                left_sum+=self.numbers[j]

            # add right side
            for k in range(x+1, len(self.numbers)):
                right_sum+=self.numbers[k]

            #compare and return if ==
            if right_sum == left_sum:
                print(str(self.numbers[x]))
                return

        print("-1, pivot does not exist")
        return -1
    

    # O(N) time and O(1) space
    def find_pivot_v2(self, numbers):
        if numbers:
            self.nubmers = numbers
        
        total_sum = sum(self.numbers)
        left_sum = 0
        
        for i, j in enumerate(self.numbers):
            if left_sum == (total_sum - left_sum - j):
                print(str(self.numbers[i]))
                return j
            left_sum += j
        
        print("-1, pivot does not exist")
        return -1

    # O(N) time and O(1) space, slightly cleaner syntax
    def find_pivot_v3(self, numbers):
        if numbers:
            self.nubmers = numbers
        
        total_sum = sum(self.numbers)
        left_sum = 0
        
        for i, j in enumerate(self.numbers):
            total_sum -= self.numbers[i]
            if left_sum == total_sum:
                print(str(self.numbers[i]))
                return j
            left_sum += j
        
        print("-1, pivot does not exist")
        return -1
        
if __name__ == "__main__":
    solution = Solution()
    print("list used: " + str(solution)) # overridden to print list
    assert solution.find_pivot_v3([1,2,3,4,6,5,4,1]) == 6
    solution.find_pivot_v3([1,2,3,4,6,5,4,1])