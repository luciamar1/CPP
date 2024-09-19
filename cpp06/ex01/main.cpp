#include "serialization.hpp"

int main() {
    Data originalData;
    originalData.number = 42;
    originalData.str = "Hello, World!";

    uintptr_t raw = Serializer::serialize(&originalData);

    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &originalData) {
        std::cout << "Test Passed!" << std::endl;
        std::cout << "Number: " << deserializedData->number << std::endl;
        std::cout << "Text: " << deserializedData->str << std::endl;
    } else {
        std::cout << "Test Failed!" << std::endl;
    }

    return 0;
}