#include "PriorityQueue.h"

void PriorityQueue::popPrio() {

  prioQueue.erase(prioQueue.begin());
}
Customer* PriorityQueue::popFIFO(){

  Customer* cust = fifo.at(0);
  fifo.erase(fifo.begin());
  return cust;

}
std::vector <Customer*> PriorityQueue::GetFIFO() {

  return this->fifo;

}

void PriorityQueue::insertFIFO(Customer* cust) {

  fifo.push_back(cust);

}
std::vector<Customer*> PriorityQueue::GetQueue() {

  return prioQueue;
}
int PriorityQueue::QueueSize() {


return prioQueue.size();

}
void PriorityQueue::Insert(Customer* cust, float priority) {

  if(prioQueue.size() == 0) {
    prioQueue.insert(prioQueue.begin(), cust);
  } else {  

unsigned long int i;

for(i = 0; i < prioQueue.size(); ++i) {
    
      if(prioQueue.at(i)->GetArrivalTime() > priority) {
      
        prioQueue.insert(prioQueue.begin() + i, cust);
      
        return;
    
      } 
  
    }
    prioQueue.insert(prioQueue.begin() + i, cust);
  }
}

void PriorityQueue::ShowQueue(){

  std::cout << prioQueue.size() << std::endl;
  for(unsigned long int i = 0; i < prioQueue.size(); i++) {

    std::cout << prioQueue.at(i)->GetArrivalTime() << " " << prioQueue.at(i)->GetIsArrival() << std::endl;

  }

}



void PriorityQueue::LoadPriorityQueue(std::vector<Customer*> Arrivals, int simInt) {
  if(simInt + 100 < Arrivals.size() ) { 
  
    for(unsigned long int i = 0; i < 100; i++) {

    
      prioQueue.insert(prioQueue.end(), Arrivals.at(simInt + i));

  
    }
  } else {

    int runsLeft = Arrivals.size() - simInt;
    for(unsigned long int i = 0; i < runsLeft; i++) {

      prioQueue.insert(prioQueue.end(), Arrivals.at(simInt + 1));
    }
  }
  ShowQueue();


}
