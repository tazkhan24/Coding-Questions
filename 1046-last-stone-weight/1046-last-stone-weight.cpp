class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
    priority_queue<int> heap(begin(st),end(st));
        while(heap.size()>1){
            auto w1 = heap.top();
            heap.pop();
            auto w2 = heap.top();
            heap.pop();
            if(w1-w2 >0)
                heap.push(w1-w2);
        }
        if(heap.size()>0)
            return heap.top();
        else
            return 0;
    }
};