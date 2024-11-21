#include <Windows.h>
#include <iostream>

using namespace std;

void tocaNota(int frequencia, int duracao){
    if (frequencia == 0)
    {
        Sleep(duracao);
        //this_thread::sleep_for(chrono::milliseconds(duracao));
    }else
    {
        Beep(frequencia,duracao);
    }
    Sleep(20);
    //this_thread::sleep_for(chrono::milliseconds(20));
    
}

int main()
{
    int frequencias[] = {
        660,660,0,660,0,510,660,0,770,0,380,0,
        510,0,380,0,320,0,320,0,440,0,480,450,430,0,
        380,660,0,760,0,860,0,700,0,760,660,0,520,
        580,480,0,500,0,760,0,740,700,0,660
    };

    int duracoes[] = {
        100,100,100,100,100,100,100,100,150,100,100,100,
        100,100,100,100,100,100,100,100,125,125,125,100,
        100,100,100,150,100,150,100,150,100,125,100,150,100,100,100,
        100,150,100,100,100,150,100,150,100,100,100
    };
    cout << "Inicio da musica do Mario..." << endl;

    int tamanho = sizeof(frequencias) / sizeof(frequencias[0]);

    for (int i = 0; i < tamanho; i++)
    {
        tocaNota(frequencias[i], duracoes[i]);
    }
    
    system("pause");
    
    return 0;
}
