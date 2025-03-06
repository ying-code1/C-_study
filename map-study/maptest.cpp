#include <iostream>
#include <map>

void for_each(std::map<int, std::string>& map1) {
    std::map<int, std::string>::iterator itr;
    
    std::cout << "one way" << std::endl;
    for (itr = map1.begin(); itr != map1.end(); itr++) {
        std::cout << "first: " << itr->first << "   second: " << itr->second << std::endl;
    }

    std::cout << "another way" << std::endl;

    itr = map1.begin();
    while (itr != map1.end()) {
        std::cout << "first: " << itr->first << "   second: " << itr->second << std::endl;
        itr++;
    }
}

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    for_each(myMap);

    return 0;
}
