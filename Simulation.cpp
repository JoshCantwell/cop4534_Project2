#include "Simulation.h"
#include <iostream>
#include <random>

void Simulation::Run() {

  std::string userAnswerString;
  int userAnswerInt, n = 0;
  std::cout << "Welcome to the simulation"  << std::endl;

  std::cout << "Please enter the desired number of simulations to run.\n"
            << "Must be an integer between 1000 and 5000 for a \"good\" simulation: ";
  std::cin >> userAnswerInt;
  setSimulationRuns(userAnswerInt);

  std::cout << "\nNow please enter the average numbers of arrival in a time period: ";
  std::cin >> userAnswerInt;
  setAverageNumberOfArrivals(userAnswerInt);

  std::cout << "\nNow please enter the average numbers of departures in a time period: ";
  std::cin >> userAnswerInt;
  setAverageNumberOfDepartures(userAnswerInt);

  std::cout << "\nNow Finally set the number of channels that will be open during the simulation: ";
  std::cin >> userAnswerInt;
  setChannelsOpen(userAnswerInt);

  std::cout << "\nWill now start with the simulation of " << getSimulationRuns() << " arrivals...\n\n";

  while(n <= getSimulationRuns()) {
    
    Customer customer;
   
    Arrivals.push_back(customer);
  
   n++;
  }
  std::cout << Arrivals.size() << Arrivals[1000].GetArrivalTime();

}

void Simulation::setSimulationOverallTime(float simulationOverallTime) {

  this->simulationOverallTime = simulationOverallTime;
}
float Simulation::getSimulationOverallTime() {

  return this->simulationOverallTime;
}

float Simulation::getNextRandomInterval(int average) {

  std::random_device myRandomDevice;

  unsigned seed = myRandomDevice();

  // Initialize a default_random_engine with the see
  std::default_random_engine myRandomEngine(seed);

  //Initialize a unigorm_real-distributino to produce values between 1 and 0
  std::uniform_real_distribution<double> myUnifRealDist(0.0, 1.0);

  // Generates random nunmber
  double number = myUnifRealDist(myRandomEngine);

  return number;
}

int Simulation::getSimulationRuns() {

  return this->simulationRuns;

}

int Simulation::getAverageNumberOfArrivals(){

  return this->averageNumberOfArrivals;

}    
      
  
  

int Simulation::getAverageNumberOfDepartures(){

  return this->averageNumberOfDepartures;

}

int Simulation::getChannelsOpen() {

  return this->channelsOpen;

}

void Simulation::setSimulationRuns(int simulationRuns) {

  this->simulationRuns = simulationRuns;
}

void Simulation::setAverageNumberOfArrivals(int averageNumberOfArrivals){

  this->averageNumberOfArrivals = averageNumberOfArrivals;

}

void Simulation::setAverageNumberOfDepartures(int averageNumberOfDepartures) {

  this->averageNumberOfDepartures = averageNumberOfDepartures;

}

void Simulation::setChannelsOpen(int channelsOpen){

  this->channelsOpen = channelsOpen;
}


