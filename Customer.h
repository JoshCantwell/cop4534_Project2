#ifndef _customer_h_
#define _customer_h_

#

class Customer {

  public:

    Customer () {

      ArrivalTime = 0.0;
      StartOfServiceTime = 0.0;
      DepartureTime = 0.0;

    }

    float GetArrivalTime();
    float GetStartOfServiceTime();
    float GetDepartureTime();

    void SetArrivalTime(float arrivalTime);
    void SetStartOfServiceTime(float startOfServiceTime);
    void SetDepartureTime(float departureTime);
   

  private:

    float ArrivalTime, StartOfServiceTime, DepartureTime;

    Customer * nextCust;  // For linked FIFO
    
};

#endif

