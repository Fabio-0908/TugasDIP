class Vehicle {
public:
    virtual void drive() = 0;
};

class Car : public Vehicle {
public:
    void drive() override {
        std::cout << "Driving car..." << std::endl;
    }
};

class VehicleFactory {
public:
    static Vehicle* createVehicle() {
        return new Car();
    }
};
