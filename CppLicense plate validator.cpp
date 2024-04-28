//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <regex>
#include <vector>
#include <string>


bool isValidLicensePlate( std::string plate) {
    std::regex platePattern("^[A-Z]{3}-[A-Z]{2} \\d{3,4}$");
    return std::regex_match(plate, platePattern);
}

std::vector<std::string> extractLicensePlates( std::string text) {
    std::regex platePattern("[A-Z]{3}-[A-Z]{2} \\d{3,4}");
    std::sregex_iterator next(text.begin(), text.end(), platePattern);
    std::sregex_iterator end;
    std::vector<std::string> plates;

    while (next != end) {
        std::smatch match = *next;
        plates.push_back(match.str());
        next++;
    }

    return plates;
}

int main() {
    std::string text = "My car's license plate is ABC-DE 1234 and my friend's is XYZ-WV 567.";
    std::vector<std::string> foundPlates = extractLicensePlates(text);

    for (auto plate : foundPlates) {
        if (isValidLicensePlate(plate)) {
            std::cout << "Found valid license plate: " << plate << std::endl;
        }
    }

    return 0;
}
