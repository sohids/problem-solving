public class RunningSum1480
{
    public static int[] RunningSum(int[] nums)
    {
        int sum = 0;
        int length = nums.Length;
        for (int i = 0; i < length; i++)
        {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
}
