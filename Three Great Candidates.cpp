class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        // Initialize Maximum, second maximum 
        // and third maximum element
        long long maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;

        // Initialize minimum and second minimum element
        long long minA = INT_MAX, minB = INT_MAX;

        for (int i = 0; i < n; i++) {
            // Update Maximum, second maximum and third maximum element
            if (arr[i] > maxA) {
                maxC = maxB;
                maxB = maxA;
                maxA = arr[i];
            }

            // Update second maximum and third maximum element
            else if (arr[i] > maxB) {
                maxC = maxB;
                maxB = arr[i];
            }

            // Update third maximum element
            else if (arr[i] > maxC)
                maxC = arr[i];

            // Update Minimum and second minimum element
            if (arr[i] < minA) {
                minB = minA;
                minA = arr[i];
            }

            // Update second minimum element
            else if (arr[i] < minB)
                minB = arr[i];
        }
        return max(minA * minB * maxA, maxA * maxB * maxC);
    }

};
