    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    int main(){

	setlocale (LC_ALL,"portuguese");

    int fome,energia,saude,sono,higiene;
    int cozinha,banheiro,jogos,quarto,escolha,opcao; 
    
    fome=100;energia=100;saude=100;sono=100; higiene=100;
    printf("\e [H\e[2J");
    printf("\n\n Pequena Vida de Cacau");
    printf("\n\n versão 1.0");
    printf("\n\n");
    while (fome>0 || energia>0 || saude>0 || escolha >= 5)
    {
    printf("Escolha uma opção");
    printf("\n1.Cozinha");
    printf("\n2.Banheiro");
    printf("\n3.Quarto");
    printf("\n4.Quintal");
    printf("\n5.Sair \n");
    scanf("%d",&escolha);
    if(escolha==1){ 
    
          printf("\n                   O que você quer comer");
          printf("\n                   1.Cereal");
          printf("\n                   2.Almoço") ;
          printf("\n                   3.Janta");
          printf("\n                   4.Café da manhã");
          printf("\n                   5.Banana");
          printf("\n                   6.Suco");
          printf("\n                   7.Água");
          printf("\n                   8.Leite");
          scanf("%d",&opcao);
          if(opcao==1){
          	
            fome=fome-2;
            energia=energia+4;
            saude=saude+1;
            sono=sono+0;
	    higiene=higiene+0;
	    printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==2){
          	
            fome=fome-9;
            energia=energia+6;
            saude=saude+5;
            sono=sono+0;
	    higiene=higiene+0;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==3)
	  {
            fome=fome-10;
            energia=energia+6;
            saude=saude+5;
            sono=sono+0;
	    higiene=higiene+0;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==4)
	  {
            fome=fome-10;
            energia=energia+6;
            saude=saude+5;
            sono=sono+0;
	    higiene=higiene+0;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==5)
	  {
            fome=fome-2;
            energia=energia+10;
            saude=saude+5;
            sono=sono+0;
	    higiene=higiene+0;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==6)
	  {
            fome=fome-0;
            energia=energia+10;
            saude=saude+5;
            sono=sono+0;
	    higiene=higiene+0;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
         if(opcao==7)
	 {
           fome=fome-0;
           energia=energia+10;
           saude=saude+11;
           sono=sono+0;
	   higiene=higiene+0;
	    printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	 }
         if(opcao==8)
	 {
           fome=fome-5;
           energia=energia+8;
           saude=saude+5;
           sono=sono+0;
	   higiene=higiene+0;
	    printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	 }
               
    
   }
   if(escolha==2)
   {
     printf("O que deseja usar?");
          printf("\n              1.lavabo");
          printf("\n              2.Tomar banho");
          printf("\n              4.escovar os dentes");
          printf("\n              5.lavar as maos");
          scanf("%d",&opcao);
          if(opcao==1)
	  {
            fome=fome-0;
            energia=energia+1;
            saude=saude+2;
            sono=sono+0;
            higiene=higiene+5;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==2)
	  {
             fome=fome-0;
             energia=energia+0;
             saude=saude+0;
             sono=sono+0;
             higiene=higiene+10;
	      printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	    }
	   if(opcao==3)
	    {
             fome=fome-10;
             energia=energia+6;
             saude=saude+5;
             sono=sono+0;
	      printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	    }
   }
   if(escolha==3)
   {
   printf("O que deseja fazer");
          printf("\n                 1.Dormir");
          printf("\n                 2.soneca");
          printf("\n                 3.estudar");
          scanf("%d",&opcao);
          if(opcao==1)
	  {
            fome=fome-3;
            energia=energia+40;
            saude=saude+10;
            sono=sono+20;
            higiene=higiene-10;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
          if(opcao==2)
	  {
            fome=fome-12;
            energia=energia+20;
            saude=saude+12;
            sono=sono+20;
            higiene=higiene-10;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
	  }
           if(opcao==3)
	  {
            fome=fome-4;
            energia=energia-2;
            saude=saude+12;
            sono=sono-15;
            higiene=higiene-1;
	     printf("%d %d %d %d %d",fome,energia,sono,higiene,saude);
          }
    }
    if(escolha==4)
    {
	    printf("\n           Oque deseja Brincar?");
	    printf("\n           1.Patinete");
	    scanf("%d",&opcao);
	    if(opcao==1)
	    {
	     
printf("\n |Â§Â§§Â§Â§Â|");                                                                       
printf("\n |  Â°---Â° | ");                                                                    
printf("\n |\\\\ y    |\\\\=  =  ");                                                                
printf("\n |_ _ _ _ __| ");                                                                                                                                                                                                                                                                                                              
printf("\n  | | | |     / ");                                                
printf("\n   +   +     /");
printf("\n0----------/-0");
usleep(200000);
printf("\e[H\e[2J");
printf("\n           |Â§Â§Â§ÂÂ§Â§|");                                                                       
 printf("\n          |   Â°---Â° |");                                                                     
 printf("\n          |\\\\  y    |\\\\=  =");                                                                  
 printf("\n          |_ _ _ __ __|");                                                                                                                                                                                                                                                                                                                 
 printf("\n             | | | |    /");                                                 
 printf("\n              *   *    /");
 printf("\n          []----------/-[]");
 usleep(200000);
 printf("\e[H\e[2J");
printf("\n                |Â§Â§Â§§Â§|");                                                                       
 printf("\n               | Â°---Â° | ");                                                                    
 printf("\n               |\\\\y    |\\\\=  =  ");                                                                
 printf("\n               |_ _ _ _ _| ");                                                                                                                                                                                                                                                                                                              
 printf("\n                 | | | |      / ");                                                
 printf("\n                  +   +      /");
 printf("\n               0------------/-0");
 printf("\e[H\e[2J");
printf("\n           |Â§Â§Â§ÂÂ§Â§|");                                                                       
 printf("\n          |   Â°---Â° |");                                                                     
 printf("\n          |\\\\  y    |\\\\=  =");                                                                  
 printf("\n          |_ _ _ __ __|");                                                                                                                                                                                                                                                                                                                 
 printf("\n             | | | |    /");                                                 
 printf("\n              *   *    /");
 printf("\n          []----------/-[]");
 usleep(200000);
 printf("\e[H\e[2J");
printf("\n                |Â§Â§Â§§Â§|");                                                                       
 printf("\n               | Â°---Â° | ");                                                                    
 printf("\n               |\\\\y    |\\\\=  =  ");                                                                
 printf("\n               |_ _ _ _ _| ");                                                                                                                                                                                                                                                                                                              
 printf("\n                 | | | |      / ");                                                
 printf("\n                  +   +      /");
 printf("\n               0------------/-0");
 printf("\e[H\e[2J");
printf("\n           |§Â§Â§Â§ÂÂ§Â|");                                                                       
 printf("\n          |   Â°---Â° |");                                                                     
 printf("\n          |\\\\  y    |\\\\=  =");                                                                  
 printf("\n          |_ _ _ __ __|");                                                                                                                                                                                                                                                                                                                 
 printf("\n             | | | |    /");                                                 
 printf("\n              *   *    /");
 printf("\n          []----------/-[]");
 usleep(200000);
 printf("\e[H\e[2J");
printf("\n                |Â§Â§Â§§Â§|");                                                                       
 printf("\n               | Â°---Â° | ");                                                                    
 printf("\n               |\\\\y    |\\\\=  =  ");                                                                
 printf("\n               |_ _ _ _ _| ");                                                                                                                                                                                                                                                                                                              
 printf("\n                 | | | |      / ");                                                
 printf("\n                  +   +      /");
 printf("\n               0------------/-0");
 printf("\e[H\e[2J");
printf("\n           |§Â§Â§Â§ÂÂ§Â|");                                                                       
 printf("\n          |   Â°---Â° |");                                                                     
 printf("\n          |\\\\  y    |\\\\=  =");                                                                  
 printf("\n          |_ _ _ _ _ _|");                                                                                                                                                                                                                                                                                                                 
 printf("\n             | | | |    /");                                                 
 printf("\n              *   *    /");
 printf("\n          []----------/-[]");
 usleep(200000);
 printf("\e[H\e[2J");
printf("\n                |Â§Â§Â§§Â§|");                                                                       
 printf("\n               | Â°---Â° | ");                                                                    
 printf("\n               |\\\\y    |\\\\=  =  ");                                                                
 printf("\n               |_ _ _ _ _| ");                                                                                                                                                                                                                                                                                                              
 printf("\n                 | | | |      / ");                                                
 printf("\n                  +   +      /");
 printf("\n               0------------/-0");
 printf("\e[H\e[2J");
printf("\n           |§Â§Â§Â§ÂÂ§Â|");                                                                       
 printf("\n          |   Â°---Â° |");                                                                     
 printf("\n          |\\\\  y    |\\\\=  =");                                                                  
 printf("\n          |_ _ _ _ _ _|");                                                                                                                                                                                                                                                                                                                 
 printf("\n             | | | |    /");                                                 
 printf("\n              *   *    /");
 printf("\n          []----------/-[]");
 usleep(200000);
 printf("\e[H\e[2J");
printf("\n                |Â§Â§Â§§Â§|");                                                                       
 printf("\n               | Â°---Â° | ");                                                                    
 printf("\n               |\\\\y    |\\\\=  =  ");                                                                
 printf("\n               |_ _ _ _ _| ");                                                                                                                                                                                                                                                                                                              
 printf("\n                 | | | |      / ");                                                
 printf("\n                  +   +      /");
 printf("\n               0------------/-0");
 usleep(200000);
 printf("\e[H\e[2J");
 
energia=energia-16;
saude=saude+4;
higiene=higiene+0;
fome=fome+3;
sono=sono+2;
	    } 
	  }
    if(escolha==5)
    {
      printf("Você é um pessímo criador!! TENTE NOVAMENTE");
    }
    }  
return 0;

}
