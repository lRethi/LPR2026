#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

int main() {
    SetConsoleOutputCP(65001); // permite que o terminal mostre caracteres utf-8 corretamente
    setlocale(LC_ALL, "pt_BR.utf8"); // permite usar acentuação e interpretar caracteres utf-8
    cout << "\033[1;34m***************************************************\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m PARABÉNS 34DS!                     \033[1;32m          *\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mVocê clonou um repositório público do Git     \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mpara o seu repositório local!                 \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;34m***************************************************\033[0m\n";

    return 0;
}
