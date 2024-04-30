#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Content-type: text/html\n\n";
    cout << "<html>\n";
    cout << "<head>\n<title>IP Information</title>\n";
    cout << "<link rel=\"stylesheet\" href=\"/style.css\">\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h1>Your IP Information</h1>\n";
    
    // Виведення IP-адреси з серверних змінних
    if (getenv("REMOTE_ADDR")) {
        cout << "<p>Your IP address: " << getenv("REMOTE_ADDR") << "</p>\n";
    } else {
        cout << "<p>IP Address not found.</p>\n";
    }

    cout << "</body>\n</html>";

    return 0;
}