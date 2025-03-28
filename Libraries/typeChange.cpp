int main() {
    const char* str1 = "123.456";
    const char* str2 = "789";
    const char* str3 = "100000";
    
    // Convert string to different numerical types
    double numDouble = atof(str1);
    float numFloat = strtof(str1, NULL);
    int numInt = atoi(str2);
    long int numLong = atol(str3);
    long int numStrtol = strtol(str3, NULL, 10);
    
    // Display results
    std::cout << "String to double: " << numDouble << std::endl;
    std::cout << "String to float: " << numFloat << std::endl;
    std::cout << "String to int: " << numInt << std::endl;
    std::cout << "String to long int (atol): " << numLong << std::endl;
    std::cout << "String to long int (strtol): " << numStrtol << std::endl;
    
    return 0;
}
