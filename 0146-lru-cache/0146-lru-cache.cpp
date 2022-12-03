class LRUCache {
public:
    map<int,int>h;
    list<int>cach;
    map<int,list<int>::iterator>address;
    int cap;
    int siz;
    
    LRUCache(int capacity) {
      
        cap=capacity;
        siz=0;
        
        
    }
    
    int get(int key) {
        
        if(!h.count(key)) return -1;
        else
        {
            auto k=address[key];
            // .erase(key);
            cach.erase(k);
            address.erase(key);
         cach.push_front(key);
            address[key]=cach.begin();
            
            return h[key];
        }
        
    }
    
    void put(int key, int value) {
        
        if(h.count(key)){
            
            // h[key]=value;
            auto it = address[key];
            cach.erase(it);
            address.erase(key);
            siz--;
           
            
        }
       
            
            if(siz == cap){
                
                int k=cach.back();
               cach.pop_back();
                address.erase(k);
                h.erase(k);
                siz--;
              }
             cach.push_front(key);
                h[key]=value;
                
                address[key]=cach.begin();
            
                
                siz++;
            
   
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */