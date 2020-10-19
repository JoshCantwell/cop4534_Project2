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
    void Insert(Customer* cust, float priority);

    int QueueSize();
    void LoadPriorityQueue(std::vector <Customer*> Arrivals, int simInt);
    void ShowQueue();
  private:

    std::vector <Customer*> prioQueue = {};
};


#endif

