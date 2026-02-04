#include <iostream>
#include <locale>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    string nome, outro, comida, esporte;
    int materia,i, time, palpite, animal;
    char resposta;
    int numeroCorreto = 3;
    bool escolhaValida = false;

    cout << "Olá, qual seu nome?: " <<endl;
    getline(cin,nome);
    cout <<endl <<endl;

    do{
    cout << "Qual a sua matéria preferida " <<nome << "?" <<endl;
    cout << "1 - Matemática" << endl;
    cout << "2 - Português" <<endl;
    cout << "3 - Geografia" << endl;
    cout << "4 - História" <<endl;
    cout << "5 - Biologia" << endl;
    cin >> materia;
    cout << endl <<endl;

    switch(materia)
    {
       case 1:
           for(int i = 0; i < 2; ++i) {
               if(i == 0) {
           cout << "Ok " << nome << ", faremos algumas perguntas..."  <<endl;
           cout << "Pergunta  " << i+1 << ": Qual é o valor de x1 e x2 na equação 2x^2 - 3x - 5 = 0?" << endl;
           cin >> resposta;
                   double a = 2, b = -3, c = -5;
                   double delta = b * b - 4 * a * c;
                   if (delta >= 0) {
                       double x1 = (-b + sqrt(delta)) / (2 * a);
                       double x2 = (-b - sqrt(delta)) / (2 * a);
                       cout << "As raízes da equação são: x1 = " << x1 << " e x2 = " << x2 << endl;
                   } else {
                       cout << "A equação não possui raízes reais." << endl;
                   }
                   }else if (i == 1){
                   cout << "Pergunta " << i+1 << ": Qual é o produto de 3 e 4?" << endl;
                   int resposta;
                   cin >> resposta;
                   if(resposta == 12) {
                       cout << "Resposta correta!" << endl;
                   } else {
                       cout << "Resposta incorreta." << endl;
                       cout <<" A resposta correta é: 12" << endl;
                   }
               }
           }
           escolhaValida = true;
           break;

       case 2:
           cout << "Muitas pessoas acham que sabem o português 100%, vamos ver se você é bom.." <<endl;
           for(int i = 0; i < 2; ++i) {
               if(i == 0) {
                   cout << "Pergunta " << i+1 << ": A forma correta de utilizar a crase na seguinte frase: 'Vou à casa de João' está correta?" << endl <<endl;
                   cout << "Digite s para sim e n para não" <<endl <<endl;
                   cin >> resposta;
                   resposta = toupper(resposta);
                   if(resposta == 'S') {
                       cout << "Resposta correta!" << endl;
                   } else if (resposta == 'N'){
                       cout << "Resposta incorreta." << endl;
                   } else{
                      cout << "Opção inválida." <<endl;
                   }
                  }if ( i == 1){
                     cout << "Pergunta " << i+1 << ": Escolha a opção que utiliza corretamente o 'porquê':" << endl;
                   cout << "a) Não sei o motivo pelo qual ela está chateada." << endl;
                   cout << "b) Não sei porque ela está chateada." << endl;
                   cout << "c) Não sei por quê ela está chateada." << endl;
                   cout << "d) Não sei por que ela está chateada." << endl;
                   char resposta;
                   cin >> resposta;
                   resposta = toupper(resposta);
                   if(resposta == 'D') {
                       cout << "Resposta correta!" << endl;
                   } else {
                       cout << "Resposta incorreta." << endl;
                  }
                 }
           }
           escolhaValida = true;
           break;

       case 3:
           cout << "Geografia é chato, deixa quieto." <<endl;
           escolhaValida = true;
           break;

       case 4:
           cout << "A história conta o início da internet e em si  a programação, quer saber mais?" << endl;
           cout << "Digite s para sim e n' para não." <<endl;
           cin >> resposta;
           resposta = toupper(resposta);
           if ( resposta == 'S'){
           cout << "O ponta-pé inicial da história da internet começa após os eventos da Segunda Guerra Mundial. " << endl <<endl;
           cout << " A vitória dos Aliados (Estados Unidos, Reino Unido e União Soviética) sobre o grupo do Eixo (Alemanha, Itália e Japão) em 1945 causou uma ruptura global na forma como diversos países passaram a conduzir seus sistemas econômicos, políticos e sociais" <<endl <<endl;
           cout << "No grupo dos Aliados, Estados Unidos (capitalismo) e União Soviética (comunismo), as superpotências da época, começaram um embate ideológico, político e econômico num episódio histórico que ficou conhecido como Guerra Fria." <<endl << endl;
           cout << "Esse momento de intensa disputa e de influências sobre todos os outros países foi responsável por um grande desenvolvimento armamentista e tecnológico. " <<endl <<endl;
           cout << "Neste contexto, a URSS lançou, em 1957, o Sputnik, o primeiro programa de satélites artificiais. Como um das respostas, os EUA apostaram no desenvolvimento informática." <<endl << endl;
           cout << "Foi assim que, em 1963, o Departamento de Defesa do país lançou a ARPA (Agência de Projetos de Pesquisa Avançada). " <<endl << endl;
           cout << "O objetivo dessa agência era criar um sistema interno de comunicação eficiente e confiável para que os centros de pesquisa pudessem se comunicar com segurança, velocidade e sem interferências externas." << endl;
        } else if(resposta == 'N') {
           cout << "Entendi, deixa quieto então.." <<endl;
          } else{
               cout << "Opção inválida. Por favor, responda com 's' ou 'n'." << endl;
          }
          escolhaValida = true;
    break;

       case 5:
           cout << "É HORA DA BIOLOGIA!!" <<endl;
           cout << "Sabe que hora é né?" <<endl <<endl;
           cout << "HORA DA BIOLOGIAAAAAAAAA BRABAAAAA" << endl << endl;
           cout << "Hoje eu vim falar do terror das marcas de roupa, O LACOSTE, Conhecido também como crocodilo de água salgada." <<endl <<endl;
           cout << "conhecido cientificamente como crocodilos porosus, podendo pesar 1,5 tonelada e medir entre 6 a 7 metros, nosso lagartixo ocupa o posto de maior réptil vivo encontrado principalmente onde?" <<endl << endl;
           cout << "Na desgraça a Austrália onde já sabemos que lá só tem anomalias ( também pode ser encontrado na Ásia e Oceania)" << endl << endl;
           cout << " mas Adm porque de água salgada " << endl << endl;
           cout << "Porque esse fela da jacaroa é o BI da natureza, são encontrados em água salgada devido a sua tolerância a salinidade devido a uma glande que os permitem excretar o excesso de sal,mas também podem ser encontrados em rios e pântanos." << endl << endl;
           cout << "fazendo dele um dos maiores predadores da natureza, podendo se alimentar de peixes, tartarugas , búfalos, vacas , macacos e até mesmo nosso sardinho, os sharknados." << endl << endl;
           cout << "Sim, esse arrombado em estatuários onde as águas são mais rasas, aproveitam para agir na furtividade e tacam o bacão." << endl << endl;
           cout << "E quando se fala de bocao o arrombado do lacostro não fica nem um pouco pra trás com uma mordida de 1,85 toneladas esmagando facinho a tua cabeça de caixa d’água." << endl << endl;
           cout << "Podem chegar de 24 a 29 km/h numa carreirinha rápida e na água meu amigo hahaha, segura porque se tu cair ele te come, podendo chegar 43-45 KM/H" << endl << endl;
           cout << "Possuem um estômago capaz de dissolver até metal e podem permanecer até 1 ano sem se alimentar em estado de quase hibernação. " << endl << endl;
           cout << "Lolong que Deus dos crocodilos o tenha foi o maior fela da puta dos Godzillas encontrados, medindo cerca de 6,2 metros." << endl << endl;
           escolhaValida= true;
           break;

       default:
           cout <<"Opção inválida, escolha uma das opções." << endl << endl;
           escolhaValida = true;
           break;
    }
    } while( !escolhaValida);
       cout << endl <<endl;

       do{
       cout << "Para que time você torce?" <<endl;
       cout << "1 - Corinthians" <<endl;
       cout << "2 - São Paulo" <<endl;
       cout << "3 - Flamengo" <<endl;
       cout << "4 - Palmeiras" <<endl;
       cout << "5 - Outro" <<endl;
       cin >> time;

       switch(time)
       {
          case 1:
              cout << "Parabéns, você tem bom gosto." <<endl;
              break;
          case 2:
              cout << "Péssimo gosto." <<endl;
              break;
          case 3:
              cout << " Péssimo gosto." <<endl;
              break;
          case 4:
              cout << " kk e o mundial?" <<endl;
              break;
          case 5:
              cout << " Qual seria o seu time?" <<endl;
              cin >> outro;
              cout << "Então seu time é " << outro << "!! " << endl;
              break;
          default:
              cout << "opção inválida." <<endl;
              break;
    }
       } while (!escolhaValida);
       cout << endl << endl;
       do {
        cout << "Você destá gostando de conversar comigo? : " << endl;
        cout << "s para sim e n para não" <<endl;
        cin >> resposta;
        resposta = tolower(resposta);

        if (resposta == 'n') {
            cout << "Está sim!!!" << endl <<endl;
        } else if (resposta != 's') {
            cout << "Opção inválida. Por favor, responda com 's' para sim ou 'n' para não." << endl;
        }
    } while (resposta != 's');

    cout << "Eu sabia!!" << endl <<endl;


    do {
        cout << endl <<endl;
        cout << "Quer jogar um jogo " << nome << "?" <<endl <<endl;
        cout << "s para sim e n para não" <<endl <<endl;
        cin >> resposta;
        resposta = tolower(resposta);

        if (resposta == 'n') {
            cout << "Quer sim!!!!!" << endl <<endl;
        } else if (resposta != 's') {
            cout << "Opção inválida. Por favor, responda com 's' para sim ou 'n' para não." << endl;
        }
    } while (resposta != 's');

    cout << "Então vamos jogar!!" << endl <<endl;

    cout << "Bem-vindo ao jogo de dados!" << endl;
    cout << "Tente adivinhar qual número foi rolado em um dado de 6 faces." << endl <<endl;

    do {
        cout << "Digite seu palpite (um número entre 1 e 6): ";
        cin >> palpite;

        if (palpite < 1 || palpite > 6) {
            cout << "Por favor, digite um número entre 1 e 6." << endl;
        } else if (palpite != numeroCorreto) {
            cout << "Você errou! Tente novamente." << endl <<endl;
        }
    } while (palpite != numeroCorreto);

    cout << "Parabéns! Você acertou o número correto: " << numeroCorreto << endl;
    do{
    cout << "Você prefere cães ou gatos?" << endl <<endl;
    cout << " 1 - Cães" <<endl;
    cout << " 2 - Gatos" <<endl;
    cin >> animal;

    switch(animal)
    {
        case 1:
            cout << " Cães são legais, mas prefiro gatos!!" << endl;
            escolhaValida = true;
            break;
        case 2:
            cout << "Eu também!" <<endl;
            escolhaValida = true;
            break;
        default:
            cout << "Opção inválida!" << endl <<endl;
            break;
    }

    } while (!escolhaValida);


    cout << "Qual é sua comida favorita?" << endl;
    cin >> comida;
    comida[0] = tolower(comida[0]);

    if(comida == "pizza") {
        cout << "A minha comida favorita também é pizza!" << endl;
    } else {
        cout << "Que bom que sua comida favorita é " << comida << " a minha é pizza." << endl;
    }

    cout << "Qual seu esporte preferido? " <<endl;
    cin >> esporte;

    cout << "Você é bem tedioso, estou de saída, até nunca!";


    return 0;
}


