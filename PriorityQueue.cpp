#include "PriorityQueue.h"

void PriorityQueue::InsertDeparture(Customer* cust, float priority) {

  std::cout << prioQueue.size() << std::endl;

  if(prioQueue.size() == 0) {

    prioQueue.insert(prioQueue.begin(), cust);
  } else {  
  
    std::cout << "hjello" << std::endl;
    for(unsigned long int i = 0; i < prioQueue.size(); i++) {

    
      if(prioQueue.at(i)->GetArrivalTime() > priority) {

      
        //int pos = prioQueue.begin() + i;
      
        prioQueue.insert(prioQueue.begin() + i, cust);
      
        return;
    
      } 
  
    }
  }
}

void PriorityQueue::ShowQueue(){

  std::cout << prioQueue.size() << std::endl;
  for(unsigned long int i = 0; i < prioQueue.size(); i++) {

    std::cout << prioQueue.at(i)->GetArrivalTime() << std::endl;

  }

}
