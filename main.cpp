#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

// https://leetcode.com/problems/add-strings/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  string destCity(vector<vector<string>> &paths) {
    unordered_set<string> from;
    unordered_set<string> to;
    for (auto &v2 : paths) {
      from.insert(v2[0]);
      to.insert(v2[1]);
    }
    for (auto &city : to) {
      if (from.find(city) == from.end())
        return city;
    }
    return paths[0][2];
  }
};

void test1() { // test
  vector<vector<string>> v{vector<string>{"B", "C"}, vector<string>{"D", "B"},
                           vector<string>{"C", "A"}};

  cout << "A ? " << Solution().destCity(v) << endl;
}

void test2() {}

void test3() {}