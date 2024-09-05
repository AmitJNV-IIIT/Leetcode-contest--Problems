class SmallestInfiniteSet {
public:
    int cu;
    set<int>s;
    SmallestInfiniteSet() {
        cu=1;// 1,2,3,....
    }
    
    int popSmallest() {
        if(s.size()){
            int res=*s.begin();
       s.erase(res);//it has back el that added again after pop once b/u of cu
        return res;
        }else{
            cu++;
            return cu-1;//next el i.e cu
        }
        
    }
    
    void addBack(int num) {
       if(num<cu)
       s.insert(num);//num pop earlier npw add 
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */