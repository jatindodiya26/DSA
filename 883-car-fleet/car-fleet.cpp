struct cars{
    int pos;
    double time;
};

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n= position.size();
        vector<cars> car(n);

        for(int i=0; i<n; i++){
            car[i]={position[i],(double)(target-position[i])/speed[i]};
        }

        sort(car.begin(),car.end(),[](cars&a,cars&b){
            return a.pos<b.pos;
        });

        int fleets=0;
        int t=n;

        while(--t>0){
            if(car[t].time<car[t-1].time)
                fleets++;
            else
               car[t-1]=car[t];
        }

        return fleets+(t==0?1:0);
    }
};