#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespase std;
void readFromFile(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Ошибка открытия файла: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();
}

void printToScreen(const std::vector<std::string>& lines)
{

}

void writeToFile(const std::string& filename, const std::vector<std::string>& lines)
{


    outputFile.close();
}

int main() {
    std::vector<std::string> lines;
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";

    readFromFile(inputFilename, lines);

    printToScreen(lines);

    writeToFile(outputFilename, lines);

    return 0;
}
