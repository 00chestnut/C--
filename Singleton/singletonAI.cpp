#include <iostream>
#include <string>

class Singleton
{
private:
    // Private static instance pointer to hold the unique instance
    static Singleton* instance_;
    std::string value_;

    // Private constructor to prevent direct instantiation
    Singleton(const std::string& value) : value_(value) {}

public:
    // Static method to get the instance of the Singleton class
    static Singleton* GetInstance(const std::string& value)
    {
        // If no instance exists, create one
        if (instance_ == nullptr)
        {
            instance_ = new Singleton(value);
        }
        return instance_; // Return the existing instance
    }

    // Method to get the value of the Singleton instance
    std::string value() const {
        return value_;
    }
};

// Initialize the static instance pointer to nullptr
Singleton* Singleton::instance_ = nullptr;

int main()
{
    // Get the Singleton instance using GetInstance
    Singleton* singleton1 = Singleton::GetInstance("First Instance");
    std::cout << singleton1->value() << "\n";  // Output: First Instance

    // Trying to create another instance (but it's the same one)
    Singleton* singleton2 = Singleton::GetInstance("Second Instance");
    std::cout << singleton2->value() << "\n";  // Output: First Instance

    // Both should point to the same instance
    std::cout << (singleton1 == singleton2 ? "Same instance!" : "Different instances!") << "\n";

    return 0;
}
