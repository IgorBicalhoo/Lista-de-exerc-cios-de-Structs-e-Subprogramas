#include <iostream>

using namespace std;



void categoria(int idade);

int main()



{
    int idade;


    cout << "--------CATEGORIA DO NADADOR--------" << endl;

    cout << "digite a idade do nadador: ";
    cin >> idade;

    categoria (idade);



}


void categoria(int idade) {

if(idade >= 5 && idade <= 7){
    cout << "Categoria Infantil A";
} else if( idade >= 8 && idade <= 10){
cout << "Categoria Infantil B";
} else if (idade >= 11 && idade <= 13){
cout << "Categoria Juvenil A";
}else if (idade >= 14 && idade <= 17){
cout << "Categoria Juvenil B";
} else if(idade >= 18){
cout << "Categoria Adulto";
}else{
cout << "Erro";
}



}



