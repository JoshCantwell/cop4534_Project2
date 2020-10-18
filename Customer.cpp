#include "Customer.h"

float Customer::GetArrivalTime() {

  return this->ArrivalTime;
}

float Customer::GetStartOfServiceTime() {

  return this->StartOfServiceTime;
}

float Customer::GetDepartureTime() {

  return this->DepartureTime;
}

void Customer::SetArrivalTime(float ArrivalTime) {

  this->ArrivalTime = ArrivalTime;
}

void Customer::SetStartOfServiceTime(float StartOfServiceTime) {

  this->StartOfServiceTime = StartOfServiceTime;

}

void Customer::SetDepartureTime(float DepartureTime) {

  this->DepartureTime = DepartureTime;
}
