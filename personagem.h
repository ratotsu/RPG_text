// racas escolhidas: humano,elfo,
// classes escolhidas: barbaro,guerreiro,mago,clerigo,patrulheiro

#include <stdio.h>
// aqui sera posto tudo q autera o personagem e sua ficha como dano escudo vida e etc...

void main()
{
    int opcao_raca, opcao_classe, descricao_raca, descricao_classe;
    printf("para começar nossa historia precisamos montar um personagem para vc, vamos la:\n\n");





    // menu de informacao... racas, separar em funcao.
    do
    {
        printf("Temos estas racas: \n1-Humano \n2-Elfo \n3- \n0-Escolher \nPara abrir a descricao de cada classe digite o numero correspondente\n\nOpcao:");
        scanf("%d", &descricao_raca);
        switch (descricao_raca)
        {
        case 1:
            printf("\nAtributos Raciais: Os humanos possuem versatilidade e adaptabilidade incomparáveis. Eles recebem um bônus de +1 em todos os atributos.\n");
            printf("Isso reflete a diversidade e a natureza flexível da raça humana.\n\n");

            break;
        case 2:
            printf("\nAtributos Raciais: Os elfos possuem agilidade e intuição aguçadas. Eles recebem um bônus de +2 em Destreza.\n");
            printf("Além disso, os elfos têm uma conexão natural com a magia. Eles recebem treinamento automático na habilidade Percepção (Vantagem).\n\n");
            //(Vantagem) vai funcionar da seguinte maneira gera dois numeros aleatorios de 1 a 20 e pega o maior deles e atribui os modificadoes do jogador
            //(Desvantagem) funciona da mesma maneira porem o inverso na quatao dos dados se pega o menor e atribui os modificadores
            break;
        case 3:
            printf("Atributos Raciais: Os meio-orcs possuem força física impressionante e uma resistência inata. Eles recebem um bônus de +2 em Força e um bônus de +1 em Constituição.\n");
            printf("Além disso, os meio-orcs são resistentes a situações adversas. Quando estão abaixo de 0 pontos de vida, mas não mortos, eles ficar de pé e continuar lutando, permanecendo conscientes e agindo normalmente.\n(só morre se a vida estiver negativa igual a metade da vida total)\n\n");
            // para um personagem cair ele tem que chegar a 0, ja para morrer a vida tem que ser negativa igual a metade do total, (cair n se aplica ao meio-orc).
            break;
        default:
            break;
        }
    } while (descricao_raca != 0);

    // menu basico de escolha de raças e classes separar  em funcao
    do
    {
        switch (opcao_raca)
        {
            printf("Qual raça vc escolhe?");
        case 1:
            printf("vc é um humano");
            //aqui é implementada os modificadores da raça escolhida  
            break;

        case 2:
            printf("vc é um elfo");
            //aqui é implementada os modificadores da raça escolhida
            break;
        case 3:
            printf("vc é um meio-orc");
            //aqui é implementada os modificadores da raça escolhidas
            break;
        default:
            break;
        }

    } while (descricao_classe != 0);
}
