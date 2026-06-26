// brute force uses if else ladder

// optimised solution is prefix sum

//space optimised solution uses a lambda function

std::vector<int> solve(int N, std::vector<int> &A) {
    // 1. Properly build the prefix sum array
    std::vector<int> pf(N + 1, 0);
    for (int i = 0; i < N; i++) {
        pf[i + 1] = pf[i] + A[i];
    }
    
    std::vector<int> v;
    
    // 2. Fix loop boundaries to 0-indexed system
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            // Exclude last element -> Range 0 to N-2
            int right_count = (N - 2) - i;
            int right_sum = pf[N - 1] - pf[i + 1];
            int total_dist = right_sum - (right_count * A[i]);
            v.push_back(total_dist);
        }
        else if (i == N - 1) {
            // Exclude first element -> Range 1 to N-1
            int left_count = i - 1;
            int left_sum = pf[i] - pf[1];
            int total_dist = (left_count * A[i]) - left_sum;
            v.push_back(total_dist);
        }
        else {
            // Option A: Exclude the first element (Range 1 to N-1)
            int left_cnt_A = i - 1;
            int left_sum_A = pf[i] - pf[1];
            int right_cnt_A = (N - 1) - i;
            int right_sum_A = pf[N] - pf[i + 1];
            int opt_A = ((left_cnt_A * A[i]) - left_sum_A) + (right_sum_A - (right_cnt_A * A[i]));
            
            // Option B: Exclude the last element (Range 0 to N-2)
            int left_cnt_B = i;
            int left_sum_B = pf[i] - pf[0];
            int right_cnt_B = (N - 2) - i;
            int right_sum_B = pf[N - 1] - pf[i + 1];
            int opt_B = ((left_cnt_B * A[i]) - left_sum_B) + (right_sum_B - (right_cnt_B * A[i]));
            
            v.push_back(std::min(opt_A, opt_B));
        }
    }
    return v;
}