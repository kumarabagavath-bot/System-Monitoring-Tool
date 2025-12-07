#include <iostream>
#include <cstdlib>

int main() {
    system("uptime > system_status.txt");
    system("df -h >> system_status.txt");
    system("free -m >> system_status.txt");

    std::cout << "System status stored in system_status.txt\n";
    return 0;
}
