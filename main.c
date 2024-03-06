// racas escolhidas: humano,elfo,
// classes escolhidas: barbaro,guerreiro,mago,clerigo,patrulheiro

#include <stdio.h>
// aqui sera posto tudo q autera o personagem e sua ficha como dano escudo vida e etc...

void main()
{
    int opcao_raca, opcao_classe, descricao_raca, descricao_classe;
    printf("para começar nossa historia precisamos montar um personagem para vc, vamos la:\n\n");
    // menu de informacao... racas
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
        default:
            break;
        }
    } while (descricao_raca!=0);

    // menu basico de escolha de raças e clases
    do
    {
        switch (opcao_raca)
        {
            printf("Qual raça vc escolhe?");
        case 1:
            /* code */
            break;

        case  2:
            /* code */
            break;

        default:
            break;
        }

    } while (descricao_classe!=0);
}
