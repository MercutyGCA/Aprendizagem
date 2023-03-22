package primeiro_programa; // Nome do Pacote
import java.util.Date;
/*
-- Primeira letra maiuscula é uma Classe ou Interface
-- Primeira letra minuscula é um Atibuto, Varivel ou Método
-- Todas as letras minusculas são o nome do Pacote
-- Todas as letras maiusculas são Constantes

-- OBS: Void indica a criação de um método
*/

public class Main { // Classe
    public static void main(String[] args){ // Método

    //    System.out.println("olá mundo"); // Classe

    int A = 3;
    int B = 2;
    int C = 8;
    int D = 7;

    if(!(A < 3) && !(B < 5)){
        System.out.println("X < 10");
    }
    else{
        if ((A >= 2) || (C <= 1)) {
            int soma = (A + D);
            float result = soma / 2;
            System.out.println("X < " + result);
        }
        else{
            if ((A == 2) || (B < 7)) {
                float op = (A + 2) * (B - 2);
                System.out.println("X < " + op);
            }
            else{
                float op2 = ((A + C) / B * (C + D));
                System.out.println("X < " + op2);
            }
        }
    }

    Date relogio = new Date();
    System.out.println("A hora do sistema é: " + relogio.toString());
}
};