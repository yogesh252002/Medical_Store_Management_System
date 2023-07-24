#include<bits/stdc++.h>
using namespace std;

class Queue{
public:

     vector<int> vec;
     int front ;
     int rear;
     int size;
    
    Queue()
    {
        size = 1000001;
        vec = new vector<int>(size,0);
        front = 0;
        rear = 0;
    }

    void add(int data)
    {
        if(rear == size) cout<<"Queue is full"<<endl;
        else vec[rear] = data;
        rear++; 
    }
    int pop()
    {
        if(front == rear) return -1;
        else {
            int ans = vec[front];
            vec[front] = -1;
            front++;
            if(rear == front)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int qsize()
    {
        return rear-front;
    }
};

int main()
{
  Queue* q = new Queue();
  q->add(5);
  q->add(2);
  q->add(5);
  q->add(7);

  for(int i=0; i<q.qsize(); i++)
  {
    cout<<q.vec[i]<<endl;
  }
 
 return 0;
}