class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
        // sort(mp.begin(),mp.end());
    }

    string get(string key, int timestamp) {
        string prev = "";
        for (auto& it : mp[key]) {
            if (it.first == timestamp) {
                return it.second;
            } else if (it.first > timestamp) {
                return prev;
            } else {
                prev = it.second;
            }
        }

        return prev;
    }
};

