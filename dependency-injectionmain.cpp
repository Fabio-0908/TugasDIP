// Abstraksi
class IMessageService {
public:
    virtual void sendMessage(const std::string&) = 0;
};

// Implementasi
class EmailService : public IMessageService {
public:
    void sendMessage(const std::string& msg) override {
        std::cout << "Email: " << msg << std::endl;
    }
};

// High-level class
class Notification {
private:
    IMessageService* service;
public:
    Notification(IMessageService* svc) : service(svc) {}
    void notify(const std::string& msg) {
        service->sendMessage(msg);
    }
};
