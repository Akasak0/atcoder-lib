// Reference : https://www.youtube.com/live/xccJ5hiizzY //
#include <vector>
#include <string>

// 回転用関数 //
std::vector<std::string> rotate(std::vector<std::string> s) {
    int h = s.size(), w = s[0].size();
    std::vector<std::string> res(w, std::string(h, '.'));
    for(int i = 0;i < h; i++) {
        for(int j = 0; j < w; j++) {
            res[j][h-1-i] = s[i][j];
        }
    }
    return res;
}

