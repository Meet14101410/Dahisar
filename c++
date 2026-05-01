#include <iostream>
#include <string>
#include <vector>

struct SuburbData {
    std::string name = "Dahisar";
    std::string district = "Mumbai Suburban";
    std::string position = "Northernmost Suburb";
    int pincode = 400068;
    std::vector<std::string> transport = {"Western Railway", "Metro Line 7", "Metro Line 2A"};
};

int main() {
    SuburbData dhs;
    
    std::cout << "--- Suburb Record: " << dhs.name << " ---\n";
    std::cout << "District: " << dhs.district << "\n";
    std::cout << "Pincode:  " << dhs.pincode << "\n";
    std::cout << "Transport: ";
    for(const auto& mode : dhs.transport) std::cout << "[" << mode << "] ";
    std::cout << std::endl;
    
    return 0;
}
