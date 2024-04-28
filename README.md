# CppLicensePlateValidator

This repository contains a C++ program that validates and extracts license plate numbers from a given text. The program uses regular expressions to identify license plates that follow a specific format.

## License Plate Format

The program is designed to recognize license plates of the following formats:
- `LLL-LL DDD`
- `LLL-LL DDDD`

Where `L` represents an uppercase letter (A-Z) and `D` represents a digit (0-9).

## Components

The program consists of two main functions:
- `bool isValidLicensePlate(std::string plate)`: Validates if the given license plate string matches the required format.
- `std::vector<std::string> extractLicensePlates(std::string text)`: Extracts and returns all the license plate numbers found in the provided text.

## Contributing
Contributions to the CppLicensePlateValidator are welcome. Please feel free to fork the repository, make changes, and submit pull requests.

## Acknowledgments
- Written by mht83
