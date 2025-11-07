class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int>ans;
        stack<int> collisions;
        int i=0;
        while(i<n){
            if(asteroids[i]<0){
                if(!collisions.empty()){
                    while(!collisions.empty() && collisions.top()>0 && collisions.top()<abs(asteroids[i])){
                            collisions.pop();                       
                    }
                
                    if(collisions.empty() || collisions.top()<0){
                        collisions.push(asteroids[i]);
                        i++;
                        continue;
                    }
                    else if(collisions.top()>abs(asteroids[i])){
                        i++;
                        continue;
                    }
                    else if(collisions.top()==abs(asteroids[i])){
                        collisions.pop();
                        i++;
                        continue;
                    }
                }   
                else{
                    collisions.push(asteroids[i]);
                    i++;
                    continue;
                }
            }
            collisions.push(asteroids[i]);
            i++;           
        }
        while(!collisions.empty()){
            ans.push_back(collisions.top());
            collisions.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};