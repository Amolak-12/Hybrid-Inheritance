#include <iostream>
using namespace std;

// Hybrid Inheritance

//Base Class
class Car{
  public:
    int age;
    int weight;

    void speedUp(){
      cout << "Trying to speed up !!" << endl;
      cout << "Speed : 90 km/h" << endl;
    }
};

//Derived Classes

class Scorpio:public Car{

};
class Fortuner:public Car{

};


class Rangerover:public Scorpio, public Fortuner{

};

int main() {

  Rangerover r1;
  r1.Fortuner::speedUp();
}