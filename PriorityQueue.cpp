#include "PriorityQueue.h"


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

    std::cout << prioQueue.at(i)->GetArrivalTime() << std::endl;

  }

}



void PriorityQueue::LoadPriorityQueue(std::vector<Customer*> Arrivals, int simInt) {

  for(unsigned long int i = 0; i < 100; i++) {

    prioQueue.insert(prioQueue.end() + simInt, Arrivals.at(simInt + i));

  }
  ShowQueue();


}
