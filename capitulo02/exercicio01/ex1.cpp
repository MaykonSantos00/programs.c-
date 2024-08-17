// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.
#include <iostream>

using std::cout;
using std::endl;

class GradesBook
{
    public:
    // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
        void displayMessage(){
            cout << "Welcome to the Grade Book!" << endl;
        }//fim da função displayMessage 

};  // fim da classe GradeBook 

int main()
{
    GradesBook myGradesBook; // cria um objeto GradeBook chamado myGradeBook
    myGradesBook.displayMessage(); // chama a função displayMessage do objeto
    
    

    return 0;

}