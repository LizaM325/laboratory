#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespase std;
void readFromFile(const std::string& filename, std::vector<std::string>& lines)
{

    inputFile.close();
}

void printToScreen(const std::vector<std::string>& lines) {
    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }
}

void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cerr << "Ошибка открытия файла для записи: " << filename << std::endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << std::endl;
    }

    outputFile.close();
}

int main() {
    std::vector<std::string> lines;
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";

    // Функция 1: Чтение строк из файла
    readFromFile(inputFilename, lines);

    // Функция 2: Вывод строк на экран
    printToScreen(lines);

    // Функция 3: Запись строк в файл
    writeToFile(outputFilename, lines);

    return 0;
}
