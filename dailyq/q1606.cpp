
/*              
my 1st solution it pass 106 out of 108


class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n = arrival.size();
        vector<long long> freeTime(k, 0);
        vector<int> task(k, 0);

        for (int i = 0; i < n; i++) {
            long long curTime = arrival[i];
            bool assigned = false;

          
            for (int step = 0; step < k; step++) {
                int server = (i + step) % k;
                if (freeTime[server] <= curTime) {
                    freeTime[server] = curTime + load[i];
                    task[server]++;
                    assigned = true;
                    break;
                }
            }
       
        }

        int maxTasks = *max_element(task.begin(), task.end());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            if (task[i] == maxTasks) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};*/


class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int n = arrival.size();
        vector<int> taskCount(k, 0);

        // Set 1: Available server IDs
        set<int> free_servers;
        for (int i = 0; i < k; i++) {
            free_servers.insert(i);
        }

        // Set 2: Busy servers sorted by {finish_time, server_id}
        set<pair<long long, int>> busy_servers;

        for (int i = 0; i < n; i++) {
            long long curTime = arrival[i];

            // Release servers whose finish_time <= curTime
            // The earliest finishing server is always at busy_servers.begin()
            while (!busy_servers.empty() && busy_servers.begin()->first <= curTime) {
                free_servers.insert(busy_servers.begin()->second);
                busy_servers.erase(busy_servers.begin());
            }

            if (free_servers.empty()) {
                continue; // All busy, drop request
            }

            // Find first free server >= (i % k)
            int target = i % k;
            auto it = free_servers.lower_bound(target);
            if (it == free_servers.end()) {
                it = free_servers.begin(); // Wrap around
            }

            int serverId = *it;
            free_servers.erase(it);

            busy_servers.insert({curTime + load[i], serverId});
            taskCount[serverId]++;
        }

        int maxTasks = *max_element(taskCount.begin(), taskCount.end());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            if (taskCount[i] == maxTasks) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

