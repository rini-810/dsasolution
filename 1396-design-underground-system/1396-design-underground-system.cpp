class UndergroundSystem {
public:
    unordered_map<string,pair<long long,int>> station;
    unordered_map<int,pair<string,int>> transit;
    UndergroundSystem() {
        station.clear();
        transit.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        //if(transit.find(id)!=transit.end())  return;
        transit[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto& info=transit[id];
        string s= info.first;
        int time=info.second;
        int actual_time=t-time;
        s=s+':'+stationName;
        if(station.find(s)!=station.end()){
            auto& old=station[s];
            old.first+=actual_time;
            old.second++;
        }
        else{
            station[s]={actual_time,1};
        }
        //transit.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s=startStation+':'+endStation;
        auto& ans=station[s];
        double res=(double) ans.first/ans.second;
        return res;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */