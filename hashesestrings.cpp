#include <iostream>
#include <string>

unsigned int gerarHashSimples(const std::string& texto){
    unsigned int hasg = 5381;
    for (char c : texto) {
        hash = ((hash<<5) + hash) + c; // h = h * 33 + c
    }
    return hash;
}

int main() {
    std::cout << "---------------------------------" << std::endl;
    std::cout << " Simulador de Verificador de Hash" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::string textooriginal;
    std::cout << "Digite um texto para gerar o hash: ";
    std::getline(std::cin, textooriginal);

    unsigned int hashoriginal = gerarhashsimples(textooriginal);
    std::cout <<"O hash gerado para o texto original é: " << hashoriginal << std::end;

    std::cout << "---------------------------------" << std::endl; 
    std::cout << " Agora vamos simuçar uma verificação." << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::string textoadulterado;
    std::cout << "Tente digitar o mesmo texto, mas com uma pequena alteração:";
    std::getline(std::cin, textoadulterado);

    unsigned int hashadulterado = gerarhashsimples(texto adulterado);
    std::cout << "O hash gerado para o texto adulterado é:" << hashadulterado << std::endl;

    if (hashoriginal == hashadulterado) {
        std::cout << "\n[RESULTADO]: Os hashes são IGUAIS. A integridade do texto foi MANTIDA." << std::endl;
    } else {
        std::cout <<"\n[RESULTADO]: Os hashes são DIFERENTES. A integridade do texto foi COMPROMETIDA." << std::endl;
    }
    return 0;
}
