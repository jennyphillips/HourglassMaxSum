#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
const int ARRAY_SIZE = 6;


int main(){
    cout << "Enter " << ARRAY_SIZE * ARRAY_SIZE << " numbers into array"
    << " in range from -9 to 9" << endl;

    vector<vector<int>> arr(ARRAY_SIZE,vector<int> (ARRAY_SIZE));

    for(int i = 0; i < ARRAY_SIZE; i++) {
       for(int j = 0; j < ARRAY_SIZE; j++) {
            int n = 0;
            cin >> n;

            if (n < -9 || n > 9) throw invalid_argument("Invalid number indicated " + n);
            arr[i][j] = n;
       }
    }

    int maxSum = (-9 * 7) - 1;

    for(int n = 0; n < ARRAY_SIZE-2; n++) {
       for(int m = 0; m < ARRAY_SIZE-2; m++) {
            int tmp = arr[n][m] + arr[n][m+1] + arr[n][m+2] + arr[n+1][m+1] + arr[n+2][m] + arr[n+2][m+1] + arr[n+2][m+2];

            if (tmp > maxSum) maxSum = tmp;
       }
    }

    cout << "Max sum of the hourglass found is " << maxSum;

    cin.get();
    return 0;
}
