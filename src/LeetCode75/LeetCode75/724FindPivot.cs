public class FindPivot
{
    public static int PivotIndex(int[] nums)
    {
        int length = nums.Length; 

        for (int i = 0; i < length; i++) //10^4 O(length) 
        {
            int pivotIndex = i, leftSum = 0, rightSum = 0;
            for (int j = pivotIndex - 1; j >= 0; j--)
            {
                leftSum += nums[j];
            }
            for (int j = pivotIndex + 1; j < length; j++)
            {
                rightSum += nums[j];
            }
            if (leftSum == rightSum)
                return pivotIndex;
        }
        return -1;
    }

}
