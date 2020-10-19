#ifndef _simulation_h_
#define _simulation_h_

#include <vector>
#include "Customer.h"
#include "PriorityQueue.h" 
class Simulation {

  public:

    Simulation() {


    }


    void ProcessNextEvent(PriorityQueue* prio);
    int getSimulationRuns();
    int getAverageNumberOfArrivals();
    int getAverageNumberOfDepartures();
    int getChannelsOpen();
    float getNextRandomInterval(int average);
    float getSimulationOverallTime();
    void SetArrivals(std::vector <Customer*> arrivals);
    void setSimulationOverallTime(float arrivalInterval);
    void setSimulationRuns(int simulationRuns);
    void setAverageNumberOfArrivals(int averageArrivals);
    void setAverageNumberOfDepartures(int averageDepartures);
    void setChannelsOpen(int channelsOpen);
    void Run();
  private:

    int simulationRuns, averageNumberOfArrivals, averageNumberOfDepartures, channelsOpen;

  
    float simulationOverallTime = 0.0; //need for determining the time of the sim the next arrival shows
    
    std::vector<Customer*> Arrivals = {};

};

#endif
