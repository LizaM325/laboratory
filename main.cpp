#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespase std;
void readFromFile(const std::string& filename, std::vector<std::string>& lines)
{

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
