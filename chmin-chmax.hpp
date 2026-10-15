// chmin //
template <typename T>
bool chmin(T &a, const T& b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

// chmax //
template <typename T>
bool chmax(T &a, const T& b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

