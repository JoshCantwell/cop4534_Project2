#ifndef _priorityqueue_h_
#define _priorityqueue_h_
#include <vector>
#include "Customer.h"
#include <iostream>
class PriorityQueue {

  public:

    PriorityQueue() {


    }

    std::vector <Customer*> GetQueue();
    std::vector <Customer*> GetFIFO();
    void Insert(Customer* cust, float priority);
    void insertFIFO(Customer* cust);
    void popPrio();
    Customer* popFIFO();
    int QueueSize();
    void LoadPriorityQueue(std::vector <Customer*> Arrivals, int simInt);
    void ShowQueue();
  private:

    std::vector <Customer*> prioQueue = {};

    std::vector <Customer*> fifo = {};
};


#endif

