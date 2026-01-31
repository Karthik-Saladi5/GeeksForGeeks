class kQueues {
    vector<queue<int>> qAr;
    int c=0;
    int total=0;
  public:
    kQueues(int n, int k) {
        // Initialize your data members
        c=n;
        qAr.resize(k);
    }

    void enqueue(int x, int i) {
        // enqueue element x into queue i
        total++;
        qAr[i].push(x);
    }

    int dequeue(int i) {
        // dequeue element from queue i
        if(qAr[i].empty()) return -1;
        total--;
        int val=qAr[i].front();
        qAr[i].pop();
        return val;
    }

    bool isEmpty(int i) {
        // check if queue i is empty
        return qAr[i].empty();
    }

    bool isFull() {
        // check if array is full
        return total==c;
    }
};
