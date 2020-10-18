#ifndef _priorityqueue_h_
#define _priorityqueue_h_
#include <vector>
#include "Customer.h"
#include <iostream>
class PriorityQueue {

  public:

    PriorityQueue() {


    }
    void InsertDeparture(Customer* cust, float priority);

    void ShowQueue();
  private:

    std::vector <Customer*> prioQueue = {};
};


#endif

