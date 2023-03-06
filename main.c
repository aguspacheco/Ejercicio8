#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define IS_DIGITO(c) c>='0' && c<='9' 
#define IS_VOC_MIN(c) c=='a' || c=='e' || c=='i' ||c=='o' || c=='u'
#define IS_VOC_MAY(c) c=='A' || c=='E' || c=='I' ||c=='O' || c=='U'
#define MAXDIG 10

int main(int argc, char *argv[]) {
	char *cadena="ondfg  --.,,../*-+\"567fy?¿*¨[] 091 23a2 5 7 6 90 12 34234 2 eFESA I";
	int cont_d,cont_vm,cont_vM,cont_e,cont_o,i;
	int digitos[MAXDIG]={0,0,0,0,0,0,0,0,0,0};
	int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
	c0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
	cont_d=cont_vm=cont_vM=cont_e=cont_o=i=0;
	for(i=0; cadena[i]!='\0';++i )
	{
		if(IS_DIGITO(cadena[i]))
		{
			digitos[cadena[i]-'0']++;
		  /*switch(cadena[i])
		  {
		  	 case '0': c0++;break;
		     case '1': c1++;break;
		     case '2': c2++;break;
		     case '3': c3++;break;
		     case '4': c4++;break;
		     case '5': c5++;break;
		     case '6': c6++;break;
		     case '7': c7++;break;
		     case '8': c8++;break;
		     case '9': c9++;break;		     	
		  }*/ 			
		  cont_d++;
		}
		else
		  if(IS_VOC_MIN(cadena[i]))
		    cont_vm+=1;
		  else
		    if(IS_VOC_MAY(cadena[i]))
		      ++cont_vM;
		    else
			   if(isspace(cadena[i]))			   
			     cont_e = cont_e +1;
			    else
			       cont_o++;
	}
	printf("Cant.digitos:%d\nCant.vocales min.:%d\nCant.vocales may.:%d\nCant espacios:%d\nOtros carac.%d\n",
	cont_d,cont_vm,cont_vM,cont_e,cont_o);
	printf("se encontro digitos:\n");
	for(i=0;i<MAXDIG;++i)
	  printf("%d : %d\n",i,digitos[i] );
		
	
	//printf("se encontro digitos:\n0:%d\n1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n7:%d\n8:%d\n9:%d\n", c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
	system("pause");
	
	return 0;
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	char *cadena="ondfg  --.,,../*-+\"567fy?¿*¨[] 091 23a eFESA I";
	int cont_d,cont_vm,cont_vM,cont_e,cont_o,i;
	cont_d=cont_vm=cont_vM=cont_e=cont_o=i=0;
	for(i=0; cadena[i]!='\0';++i )
	{
		if(cadena[i]>='0' && cadena[i]<='9' ) //es digito
		  cont_d++;
		else
		  if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' ||cadena[i]=='o' || cadena[i]=='u')
		    cont_vm+=1;
		  else
		    if(cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' ||cadena[i]=='O' || cadena[i]=='U')
		      ++cont_vM;
		    else
			   if(cadena[i]==' ')
			     cont_e = cont_e +1;
			    else
			       cont_o++;
	}
	printf("Cant.digitos:%d\nCant.vocales min.:%d\nCant.vocales may.:%d\nCant espacios:%d\nOtros carac.%d\n",
	cont_d,cont_vm,cont_vM,cont_e,cont_o);
	system("pause");
	
	return 0;
}*/

