//Nombre : Marcos Alonso Frisancho Machaca
//Codigo : 20210702

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Solucion de la parte a
void solve_a(){
    
    //Ingresar los datos con las variables descriptivas
    int peso_maximo, longitud;
    cout << "Ingrese el precio maximo que soporta el barco: ";
    cin >> peso_maximo;
    cout << endl;
    cout << "Ingrese la longitud (n) del almacen nxn: ";
    cin >> longitud;
    int cant_paquetes = longitud * longitud;
    int peso_paquetes[cant_paquetes] = {};
    int valor_paquetes[cant_paquetes] = {};
    cout << endl << "Ingrese el peso de cada paquete: ";
    for(int i = 0; i < cant_paquetes; i++) cin >> peso_paquetes[i];
    cout << endl << "Ingrese los valores de cada paquete: ";
    for(int i = 0; i < cant_paquetes; i++) cin >> valor_paquetes[i];
    
    //calculamos las combinaciones para el cromosoma
    int combinaciones = pow(2, cant_paquetes);
    int answer = 0, valor_maximo = 0;
    
    //Comenzamoz el cromosoma
    for(int i = 0; i < combinaciones; i++){
        //Creamos el arreglo del cromosoma dentro del for
        //para que se borre cada vez que termina y sus elementos vuelvan a
        //ser cero.
        int cromo[cant_paquetes] = {};
        int peso_actual = 0, valor_actual = 0;
        int num_actual = i, ind = 0;
        while(num_actual > 0){
            int x = num_actual % 2;
            cromo[ind] = x;
            num_actual /= 2;
            ind++;
        }
        
        //Si el cromosoma es 1 sumamos el peso de los paquetes y sus valores
        for(int j = 0; j < cant_paquetes; j++){
            if(cromo[j] == 1){
                peso_actual += peso_paquetes[j];
                valor_actual += valor_paquetes[j];
            }
        }
        
        //Verificamos que el peso sea inferior al peso maximo y el valor 
        //actual sea maximo
        if(peso_actual <= peso_maximo and valor_actual > valor_maximo){
            valor_maximo = valor_actual;
            //Guardamos el i donde el valor es maximo en la variable answer
            answer = i;
        }
         
        
    }
    
    //Para imprimir la respuesta, creamos otro cromosoma con el valor answer
    int cromo[cant_paquetes] = {}, ind = 0, num = answer;
    while(num > 0){
        int x = num % 2;
        cromo[ind] = x;
        ind++;
        num /= 2;
    }
    int contador = 0;
    
    //Imprimimos la respuesta, primero el peso de los paquetes
    cout << endl << "El peso en toneladas de los paquetes sera: " << endl;
    for(int i = 0; i < cant_paquetes; i++){
        if(cromo[i] == 1){
            cout << setw(4) << peso_paquetes[i] << " ";
        }else{
            cout << setw(4) << 0 << " ";
        }
        contador++;
        if(contador == 4){
            contador = 0;
            cout << endl;
        }
    }
    
    //Despues el valor de los paquetes
    cout << endl << "El valor en miles de dolares de los paquetes sera: " << endl;
    
    for(int i = 0; i < cant_paquetes; i++){
        if(cromo[i] == 1){
            cout << setw(4) << valor_paquetes[i] << " ";
        }else{
            cout << setw(4) << 0 << " ";
        }
        contador++;
        if(contador == 4){
            contador = 0;
            cout << endl;
        }
    }
    
    cout << endl << endl << "El valor maximo en miles de dolares sera: " << valor_maximo;
}


//Esta es la parte b de la pregunta 1
void solve_b(){
    
    // Creamos el arreglo pupiletra y leemos los datos
    char pupi[4][10] = {};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++)
            cin >> pupi[i][j];
    }
    
    
    cout << "El acido sulfurico se puede formar a partir de las siguientes "
            "posiciones: " << endl;
    
    //Un for para las filas y columnas
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            int tam = 0;
            //Creamos un arreglo 'cumple' que nos almacena las letras
            char cumple[3] = {};
            
            //Si la palabra comienza con cualquiera de estas letras, 
            //entonces comenzamos el recorrido
            if(pupi[i][j] == 'H' or pupi[i][j] == 'S' or pupi[i][j] == 'O'){
                
                //Asiganmos a 'cumple' la primera letra de la palabra
                cumple[tam] = pupi[i][j];
                
                //Primero leemos para la derecha
                if(j <= 7){
                    for(int ind1 = 1; ind1 <= 2; ind1++){
                        if(pupi[i][j + ind1] == 'H' or pupi[i][j + ind1] == 'S' or pupi[i][j + ind1] == 'O'){
                            tam++;
                            cumple[tam] = pupi[i][j + ind1];
                        }
                    }
                }
            
                //Aqui comprobamos si el tamaño es correcto y si los elementos de 'cumple' son diferentes
                if(tam == 2 and cumple[0] != cumple[1] and cumple[0] != cumple[2] and cumple[1] != cumple[2]) {
                    cout << i << "," << j << "    ";
                }
            
             
                //Volvemos el tamaño a cero 
                tam = 0;
                cumple[tam] = pupi[i][j];
                
                //Ahora lo haremos a la izquierda
                if(j >= 2){
                    for(int ind1 = 1; ind1 <= 2; ind1++){
                        if(pupi[i][j - ind1] == 'H' or pupi[i][j - ind1] == 'S' or pupi[i][j - ind1] == 'O'){
                            tam++;
                            cumple[tam] = pupi[i][j - ind1];
                        }
                    }
                }
            
            
                if(tam == 2 and cumple[0] != cumple[1] and cumple[0] != cumple[2] and cumple[1] != cumple[2]) {
                    cout << i << "," << j << "    ";
                }
            

                //Tamaño nuevamente a cero
                tam = 0;
                cumple[tam] = pupi[i][j];
                
                //Ahora lo haremos para abajo
                if(i <= 1){
                    for(int ind1 = 1; ind1 <= 2; ind1++){
                        if(pupi[i + ind1][j] == 'H' or pupi[i + ind1][j] == 'S' or pupi[i + ind1][j] == 'O'){
                            tam++;
                            cumple[tam] = pupi[i + ind1][j];
                        }
                    }
                }
            
            
                if(tam == 2 and cumple[0] != cumple[1] and cumple[0] != cumple[2] and cumple[1] != cumple[2]) {
                    cout << i << "," << j << "    ";
                }
            

                //Tamaño a cero nuevamente
                tam = 0;
                cumple[tam] = pupi[i][j];
                
                //Ahora lo haremos para arriba
                if(i >= 2){
                    for(int ind1 = 1; ind1 <= 2; ind1++){
                        if(pupi[i - ind1][j] == 'H' or pupi[i - ind1][j] == 'S' or pupi[i - ind1][j] == 'O'){
                            tam++;
                            cumple[tam] = pupi[i - ind1][j];
                        }
                    }
                }
            
            
                if(tam == 2 and cumple[0] != cumple[1] and cumple[0] != cumple[2] and cumple[1] != cumple[2]) {
                    cout << i << "," << j << "    ";
                }       
            }  
        }
    }
    
}

int main(){
    //Esta es la solucion de la parte a de la pregunta 1
    //solve_a();
    
    //Esta es la solucionn de la parte b de la pregunta 1
    solve_b();
    return 0;
}



