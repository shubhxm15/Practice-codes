#include <iostream>

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare the friend function
    friend void friendFunction(const MyClass& obj);
};

// Define the friend function
void friendFunction(const MyClass& obj) {
    // Access private member of the class
    std::cout << "Friend Function: Accessing privateData = " << obj.privateData << std::endl;
}

int main() {
    MyClass myObject(42);

    // Call the friend function
    friendFunction(myObject);
}
