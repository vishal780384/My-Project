class Solution{
public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
    map<int,int>MT;
    for(int i:hand){
        MT[i]++;}
     int n=-1; int c=0;
    while(true){ 
        n=MT.begin()->first;  c=0;
    while(c<groupSize){
        if(MT[n]==0){ 
            return false; }
        MT[n]--;
        if(MT[n]==0){
            MT.erase(n); }
        n++; c++;    
      }
       if(MT.size()==0)  break;
    }
      return true;
    }
};