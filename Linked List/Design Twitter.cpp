vector<pair<int,int>>rescent_tweets;
    unordered_map<int,vector<int>>tweets;
    unordered_map<int,set<int>>follower;

    Twitter() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back(tweetId);
        rescent_tweets.push_back({userId,tweetId});
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        int count=0;
        vector<int>res;
        for(int i=rescent_tweets.size()-1;i>=0;i--)
        {
            if(rescent_tweets[i].first==userId||follower[userId].find(rescent_tweets[i].first)!=follower[userId].end())
            {
                res.push_back(rescent_tweets[i].second);
                count++;
            }
            if(count==10)
                break;
        }
        return res;
    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        follower[followerId].insert(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        follower[followerId].erase(followeeId);
    }
