double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
    // Ensure nums1 is the smaller array
    if (m > n) {
        int* temp = nums1; nums1 = nums2; nums2 = temp;
        int t = m; m = n; n = t;
    }

    int left = 0, right = m;
    int half = (m + n + 1) / 2;

    while (left <= right) {
        int i = (left + right) / 2;
        int j = half - i;

        int maxLeft1  = (i == 0) ? -2147483648 : nums1[i - 1];
        int minRight1 = (i == m) ?  2147483647 : nums1[i];
        int maxLeft2  = (j == 0) ? -2147483648 : nums2[j - 1];
        int minRight2 = (j == n) ?  2147483647 : nums2[j];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0) {
                int leftMax = maxLeft1 > maxLeft2 ? maxLeft1 : maxLeft2;
                int rightMin = minRight1 < minRight2 ? minRight1 : minRight2;
                return ((double)leftMax + rightMin) / 2.0;
            } else {
                return (double)(maxLeft1 > maxLeft2 ? maxLeft1 : maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = i - 1;
        } else {
            left = i + 1;
        }
    }

    return 0.0; // Should never reach here
}
