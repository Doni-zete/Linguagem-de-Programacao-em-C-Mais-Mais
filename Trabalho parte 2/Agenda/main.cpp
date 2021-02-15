#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


/*Crear Una agenda
Que pida el Nombre, evento y fecha
que permita crear , buscar y borrar
*/
using namespace std;


int x=0,menu ,dia, aux,borrar;
int mes[31];
int fecha[31]; int busqf;
string nom[31];
string evento[31];
string busq;

int main()
{

	cout << "\n------------Bienvenido----------\n";
	do{
	cout << " \n 1).Agendar \n 2).Mostrar dias Libres \n 3).Mostrar por dias\n 4).Busqueda Y Borrado \n 0).Salir\n";
	cin >> menu;
	switch(menu)
	{
		case 1:
			cout << "\nQue dia desea agendar\n"; cin >> dia;
			if(dia>0 && dia<=30)
			{
				for(x=dia;x<=dia;x++)
	    		{
	    			if(mes[x]!=0){
	    				cout << "\nError\n";
	    				cout <<"dia ocupado\n";
	    				cout << " Fecha |   Nombre   |   Evento \n";
	    				cout << "   " << fecha[x] << "   "  ;
			    	    cout << "  -  " << nom[x] << "  " ;
			    	    cout << "  -  " << evento[x] << "\n" ;
					}else{
						cout << "Ingrese el Nombre :"; cin >> nom[x];
	        	    	cout << "Ingrese el Evento :"; cin >> evento[x];
	        	    	mes[x]=1;
	            		fecha[x]=dia;
	            		cout << "\nGuardado Con Exito\n";
					}

		    	}
			}else{
				cout << "\nDia fuera de los perametros!\n los parametros son del 1 al 30";
			}
			break;
		case 2:
			cout << "---------Agenda---------\n";
			cout << "Dom  Lun  Mar  Mie  Jue  Vie  Sab\n";
			for(x=1;x<=30;x++)
			{
				cout << " " << mes[x] << "   ";
				if(x==7 || x==14 || x==21 || x==28)
				{
					cout << "\n";
				}
			}
			break;
		case 3:
			cout << " Fecha |   Nombre   |   Evento \n";
			for(x=1;x<=30;x++)
			{
				if(fecha[x]!=0)
				{
			    	cout << "   " << fecha[x] << "   "  ;
			    	cout << "  -  " << nom[x] << "  " ;
			    	cout << "  -  " << evento[x] << "\n" ;
		    	}
			}
			break;
		case 4:
			borrar=0;
			cout << "-------Busqueda--------\n";
			cout << "\n1)Por Nombre \n2)Por fecha\n";
			cin >> borrar;
			if(borrar==1){
				cout << "\nIngrese el Nombre :"; cin >> busq;
				cout << " Fecha |   Nombre   |   Evento \n";
			for(x=1;x<=30;x++)
	    		{
	    			if(busq==nom[x])
					{
			    		    cout << "   " << fecha[x] << "   "  ;
			            	cout << "  -  " << nom[x] << "  " ;
			            	cout << "  -  " << evento[x] << "\n" ;
		            	cout << "\n 1).Salir \n 9).Borrar\n"; cin>>borrar;
		            	if(borrar==9)
						{
		                	fecha[x]=0;
	            	    	nom[x]="\0";
		                	evento[x]="\0";
		            	    mes[x]=0;
		            	    aux=0;
		            	    cout << "\nBorrado Con Exito\n";
						}else{
							cout << "\n";
						}
		            }else{
		    	        aux=aux+1;
					}
		        }
				if(aux>=30)
		        {
		        	cout<<" Nombre no encontrado o Dia Libre"<<endl;
				}
			}else{
				cout << "\nIngrese la fecha :"; cin >> busqf;
				cout << " Fecha |   Nombre   |   Evento \n";
				for(x=1;x<=30;x++)
	    		{
	    			if(busqf==fecha[x])
					{
			    		cout << "   " << fecha[x] << "   "  ;
			        	cout << "  -  " << nom[x] << "  " ;
			        	cout << "  -  " << evento[x] << "\n" ;
		            	cout << "\n 1).salir \n 9).Borrar\n";cin>>borrar;
		            	if(borrar==9){
		            	fecha[x]=0;
	            		 nom[x]="\0";
		            	 evento[x]="\0";
		            	 mes[x]=0;
		            	 aux=0;
		            	 cout << "\nBorrado Con Exito\n";
						}else{
							cout << "\n";
						}
		            }else{
		    	     aux=aux+1;
					}
		        }
		        if(aux>=30)
		        {
		        	cout<<"dia Libre"<<endl;
				}
			}

			break;
		default:

			break;
	}
	cout << "\nVolver al menu Principál";
	cout << "\n1).Si \n0).Salir\n";
	cin >> menu;
}while(menu>0);
getch();

	return 0;
}
