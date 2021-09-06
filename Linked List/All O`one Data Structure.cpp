unordered_map<string, int> m;
    string max, min;

    /** Initialize your data structure here. */
    AllOne() {

    }

    /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
    void inc(string key) {
        m[key]++;
        max = min = "";
    }

    /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
    void dec(string key) {
        m[key]--;
        if(m[key] == 0)
            m.erase(key);
        max = min = "";
    }

    /** Returns one of the keys with maximal value. */
    string getMaxKey() {

        if(max.size())
            return max;

        m[max] = INT_MIN;

        for(auto i : m)
            if(i.second > m[max])
                max = i.first;

        return max;
    }

    /** Returns one of the keys with Minimal value. */
    string getMinKey() {

        if(min.size())
            return min;

        m[min] = INT_MAX;

        for(auto i : m)
            if(i.second < m[min])
                min = i.first;

        return min;
    }
