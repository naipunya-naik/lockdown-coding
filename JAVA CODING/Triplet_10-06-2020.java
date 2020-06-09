public class Triplet { 
static int counting(int[] arr, int n) 
    { 
        int maxval = 0,ans=0; 
        for (int i = 0; i < n; i++) 
            maxval = Math.max(maxval, arr[i]); 
        int[] freq = new int[maxval + 1]; 
        for (int i = 0; i < n; i++) 
            freq[arr[i]]++; 
        ans += freq[0] * (freq[0] - 1) * (freq[0] - 2) / 6; 
        for (int i = 1; i <= maxval; i++) 
            ans += freq[0] * freq[i] * (freq[i] - 1) / 2; 
        for (int i = 1; 2 * i <= maxval; i++) 
            ans= freq[i] * (freq[i] - 1) / 2 * freq[2 * i]; 
        for (int i = 1; i <= maxval; i++) 
        { 
            for (int j = i + 1; i + j <= maxval; j++) 
                ans += freq[i] * freq[j] * freq[i + j]; 
        } 
        return ans; 
    } 
    public static void main(String[] args) 
    { 
        int[] arr = new int[]{ 1,5,3,2}; 
        int n = arr.length; 
        System.out.println(counting(arr, n)); 
    } 
} 
