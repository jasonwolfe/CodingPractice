/*

Author: Jason Wolfe
Date: 04/08/2022
Find pivot for list

*/

public class PivotSolution {
    // O(N^2) time and O(1) space
    public int findPivot(int[] intArray) {

        for (int i = 0; i < intArray.length; i++) {
            int leftSum = 0;
            int rightSum = 0;

            for (int j = 0; j < i; j++) {
                leftSum += intArray[j];
            }

            for (int k = i + 1; k < intArray.length; k++) {
                rightSum += intArray[k];
            }

            if (rightSum == leftSum) {
                System.out.print("The pivot is: ");
                return intArray[i];
            }

        }

        System.out.print("Pivot not found in list ");
        return -1;

    }

    // O(N) time and O(1) space
    public int findPivotV3(int[] intArray) {

        /*
         * in this version I realized I could decrement the total while incrementing the
         * leftPart, so I named this one v3 instead of my second interation as seen in
         * Python and CPP to make is slightly cleaner
         */

        int total = 0;
        for (int number : intArray) {
            total += number;
        }

        int leftPart = 0;
        for (int i = 0; i < intArray.length; i++) {
            total -= intArray[i];
            if (leftPart == total) {
                return intArray[i];
            }
            leftPart += intArray[i];
        }
        System.out.print("Pivot not found in list ");
        return -1;
    }

    public static void main(String[] args) {
        PivotSolution solution = new PivotSolution();
        int[] intArray = { 1, 2, 3, 4, 6, 5, 4, 2 };
        System.out.print(solution.findPivot(intArray));
    }
}