// comentario unilinear

/*
comentarios
multilineales
klk mi gente 
*/

// importo la libreria nativa "lostream" *obligatorio
// me permite interactual con un programa desde cero
#include <iostream>


// defino la funcion principal *obligatorio que se llame main
int main() {
    // mostra informacion en pantalla
    std::cout << "tipos de datos en c++:" <<std::endl;
    //texto
      std::cout << "Vladimir cornelio Dominguez" <<std::endl;
        std::cout << "4" <<std::endl;
        
      //numero entero
      std::cout << "4" <<std::endl;
      
      //decimal
        std::cout << 4.5 <<std::endl;
        
        //booleanos:
        //se representa con 1 si es verdadedor, y con un 0 si es falso
        std::cout << (5 > 4) <<std::endl;
        std::cout << (5 == 4) <<std::endl;
        std::cout << (5 > 4) <<std::endl;
        std::cout << true <<std::endl;
        std::cout << false <<std::endl;
    
    // para controlar el flujo dse nuestra logica
    //permiten comparar valores
    //controlan que bloque de codigo se va a ejecutar, dependediendo del resulatado de la comparacion.
    //declaremos una variable llamada edad, y le asingo un valor numerico de tipo entero.
    int edad = 24;
    
    //estructura basica de un if
    if(edad <= 1 && edad >=17) {
          std::cout << "Eres menor de edad" <<std::endl;
    } else if (edad <=18 && edad >=59) {
          std::cout << "Eres mayor adulto/a" <<std::endl;
    } else {
    std::cout << "Eres mayor adulto/a" <<std::endl;
    }
    
    
//siempre al final de la funcion, se debe colocar esta linea de codigo, que indica que el progrma si llega a esta linea, es porque se ha ejecutado exitosamente
    return 0;
}
