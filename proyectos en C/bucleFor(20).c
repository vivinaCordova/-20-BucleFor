//1 suma de los digitos de un numero 
// ejemplo: 1234 = 1+2+3+4= 10
#include <stdio.h>
int main() {
    //la variable n, almacena el valor, y la variable suma parte desde 0
    // con form avance la variable sum almacera ese valor
    int n=12567, sum=0;
    //imprime en pantalla, para que el usuario pueda visualizarlo
    printf("la suma de %d\n", n);
    //a for se lo condiciona de forma  que n nosea igual a 0
    ///la variable sum, almacenara el valor de la suma por cada vuelta 
    //la variable suma el residua de n dividido entre 10
    //n es dividido igual a 10
    for (;n != 0;) {
        sum += n % 10;
        n /= 10;
    }
    //se imprime en pantallas la suma de todo los digitos
    printf("%d\n", sum);
    return 0;
}
//2 el inverso de un numero 
#include <stdio.h>
int main() {
    //la variable n, almacena el valor que ingresara el usuario
    //se define a la variable i antes, y no dentro del for, d es variable de almacenamiento
    int n, i = 0, d;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //el comando for esta condicionado para que n,sea diferente de 0
    //la variable d almacena el residuo de la valiable n dividido entre 10;
    //la variable i almacena la multiplicacion de i por 10 + d
    for (;n != 0;) {
        d = n % 10;
        i = i* 10 + d;
        n /= 10;
    }
    //imprime en pantalla la variable i
    printf("El inverso del número es: %d\n", i);
    return 0;
}
// 3 Potencia mediante suma sucesivas
#include <stdio.h>
int main (){
    //dos varible a y b que almacenaran el valor que ingresa el usuario
    //a base y b exponente, mientra r en  la cual se almacenara la suma total o potencia total
    int a,b, r=1;
    //indicaciones a el usuario
    printf("potencia mediante sumas sucesivas\ningrese base, un espacio y
    exponente: ");
    scanf("%d %d",&a,&b);
    //el for parte desde el n, hasta que i sea igual a d que ingresa el usuario con la actualizacion 
    //for conatara con el limite de el segundo numero que es el exponente
    // ira desde 1 hasta el valor que ingrese el usuario 
    for (int i = 1; i <= b; i++){
        //la variable r , va a multiplicar el segundo numero ingresado por el usuario
        //y esta almacenara el valor para precentarlo cuando la condicion sea falsa
        //esta variable sera a que precentara la potencia total
        //en esta es la respeticion de cuantas veses se multiplicara el a
        r =r*a;}
    printf("%d",r);
    return 0;
}
//	4Radicación mediante restas sucesivas 
#include <stdio.h>
int main() {
    // n es el valor ingresado por el usuario
    // r es una variable que almacena y expotara la radicion 
    int n, = 0;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    //el for esta condicionado para que n sea mayor o igual a 0, y la variable r se actuatilizara(aumentando)
    //el almacera la resta de i multiplicado 3 veses 
    //i++: la actualizacion hara una disminucion hasta que la condicion de for se cumpla 
    for (;n >= 0; i++) {
        n -= ( i* i * i);
    }
    i--;
    printf("%d", i);
    return 0;
}
//5 Serie Fibonacci
#include <stdio.h>
int main() {
    int n, a=0, b=1, c;
    printf("serie fibonacci\ningrese numero:");
    scanf("%d", &n);
    //en este caso la funcion printf, precentar en pantalla los valores de la variable
    //para una serie mas completa, 
    printf("%d %d ",a,b);
    //for la variable i es definida como entero
    //parte desde el dos, hasta el numero que el usuario ingresa
    //la serie fibonaci comnsisten en que cada numero es la suma de los dos numero anterioes, 
    for(int i=2; i<n; i++){
        //c es una variable que almacena la suma de las variable con valores ya asignados
        c=a+b;
        printf("%d ",c);
        //haciendo uso de un comado if determira si i es menor a la resta de n menos 1,
        //entonces a sera igual a b, y b igual a c, solo si la condicion se cumple
        if (i< n-1){
         a=b;
         b=c; }
    }
    return 0;
}
// 6 Factorial de un numero 
#include<stdio.h>
int main(){
    //la variable n es el valor que ingresa el usuario por pantalla
    // defino la variable i antes
    // la fariable f que incia con uno, pero almacenara el factorial
    int n,i,f=1;
    printf("Factorial de un número\ningrese un numero:");
    scanf("%d",&n);
    //la variable i parte desde el 1 hasta que sea igual a el numero ingresado por el usuario
    //actualizandose hasta i igual a n 
    //f multiplica por i y se le  asiga el valor de la multiplicacion de i
    for(i=1;i<=n;i++){
        f*=i;
    }
    //imprime en pantalla el valor final 
     printf("%d\n",f);
     return 0;
}
// 7 Suma de una serie aritmética 
#include <stdio.h>
int main() {
    // n, son los digitos que desea el usurio que sean sumados
    // c, es la raxzon de la serie;
    // r almacena el aumento he imprimar el valor de la serie
    // s es la suma de total de la serie 
    int n, c=2,r=1, s=0;
    printf("la serie aritmetica %d \n", c);
    printf("ingrese de numero para la suma de la serie:");
    scanf("%d", &n);
    //imprimira el la variable en pantalla para que la serie parte ddes el valor que esta asignada la variable
    printf("%d ", r);
    for(int i =1; i<n; i++){
        // se suma r + c y r se actualiza con el valor de la suma
        r+=c;
        // se suma s+r y s almacenara  y actualiza el valor de la suma y imprimira el valor en pantalla
        s+=r;
        printf("%d ",r);
    }
    printf("\nla suma de la srie aritmetica es:%d",s+1);

    return 0;
}
// 8 Producto de una serie geométrica 
//para la serie geometricas, necesita tres condiciones,
//desde el termino que parte(2)
// la razon es igual a el numero poir el cual se sumar ara serie(1)
// tres la cantidad de numero que sea sumar 
#include <stdio.h>
int main() {
    int n, mul=1, m=1;
    printf("producto de una serie geometrica\n");
    printf("ingrese digitos de los numeros que desea suma:");
    scanf("%d", &n);
    printf("%d ", m);
    for (int i = 1;i<n; i++) {
    //se define la variable m , que almacenara la suma de 1 mas i y se actualizara conformese cumpla la condicion 
        int m=1+i;
    //la variable mul multiplica y almacenara el valor de multiplicaion, de m 
    //imprimira mul que es la multiplicacion de todos los valores multiplicasdos por la razon
        mul*=m;
        //precentara la serie
        printf("%d ",i+1);
    }
    //precentara la suma de los n numeros que desa sumar de la serie
    printf("\nla suma de los digitos es: %d", mul);
    return 0;
}
// 9	Numero de dígitos de un numero 
#include <stdio.h>
int main() {
    int n, c= 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //la condicion de for es mientra n sea diferente de 0
    //asignara a n y la divicion de n entre y 10 
    //con una actualizacion o aumento 
    for (;n!= 0; n/=10) {
        c++;
    }
    printf("El número tiene %d dígitos.\n", c);
    return 0;
}
//	10 Verificar si un número es primo
#include <stdio.h>
int main() {
    //p variable que almacena el numero primo 
    //el valor ingresado por el usuario
    int n,p=1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //ocupo el comando if con al condicion de que si  n es menor que i
    //la variable p es igual a 0, por lo tanto no hay numero primos
    //esto esta condicionado con el fin de n tiene que ser mayor que 1 
    // en el caso de que esto no se cumpa , else , continuara con el comando for
    if (n<= 1) {
        p = 0;
    } else {
        //la variable i parte desde el 2 hasta que la el numero ingresado por el usuario dividido entre 2
        //y la operacion logica && la variable p, se aumenta 
        // hace uso de el comando if, con la condicion de que el residuo de n y i sea igual a 0
        //p es igual a 0 
        for (int i = 2; i <= n / 2 && p; i++) {
            if (n% i == 0) {
                p = 0;
            }
        }
    }//el comado if, condiciona que si p es igual a cero el numero es primo 
     // si no, else, el numero no es primo 
    if (p)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);
    return 0;
}
// 11	Encontrar el MCD
#include <stdio.h>
int main() {
    //se solicitara al usuario ingresar dos numeros
    //el primer termino se almacenara en a
    //el segundo termino se alamcenara en b
    int a, b, mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    //el comando for tiene la unica condicion de que el segundo termino no sea igual de 0
    // se define otra variable t, la cual toma la variable b y la almacena
    // b es igualel residuo de a y b 
    // a toma y almacena la variable t
    // hasta que se cumpla la condicion de for
    for (; b != 0; ) {
        int t = b;
        b = a % b;
        a = t;
    }
    //la variable mcd almacena a
    // la variable mcd se imprime en pantalla
    mcd = a;
    printf("El Máximo Común Divisor (MCD) es: %d\n", mcd);
    return 0;
}

// 12 Sumar números impares hasta n
#include<stdio.h>
int main(){
    int n, sum=0;
    printf ("serie que suma numeros impares\ningrese un numero:");
    scanf("%d", &n);
    //la condcion de for prate desde el 1 hasta el valor ingresado por el usuario
    // con una actualizacion o aumento de 2, dando solo numero impares
    //la variable sum, suma la variable j , y actualiza, almacenando todo los valores
    //y almacena el total de la suma de los numeros
        for (int j=1;j<=n; j+=2){
        sum+=j;} printf("%d\n", sum);
    return 0;
}
// 13	Sumar números pares hasta n
#include<stdio.h>
int main(){
    int n, sum=0;
    printf ("serie que suma numeros impares\ningrese un numero:");
    scanf("%d", &n);
    //el comando for parte deje la variable j con un valor incial de 2 hasta el valor ingreso por el usuario n
    // con un aumento suma y actualizacion de 2, para obtner numeros pares
    // sum, precenta la suma de los numeros pares
        for (int j=2; j<=n;j+=2){
            sum+=j;
        }
         printf("%d",sum);
    return 0;
}
// 14	Suma de los cuadrados de los primeros n números
#include<stdio.h>
int main (){
    int a, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&a);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r

    for (int i = 1; i <= a;i++){
        r+= i*i;
        printf("%d^2  ", i);
    }
    printf("=  %d", r);
    return 0;
}
//15	Suma del cubo de n números 
#include<stdio.h>
int main (){
    int a, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&a);
    //el bucle esta condicionado con la variable i igual 1 hasta el valor ingresado por el usuario 
    //la variable se suma y se actualizara, 
    //la variable r almacena la multiplicacion i multiplicada 3 veses
    //la serie se precenta con i
    //la suma de la seie se precenta con r
    for (int i = 1; i <= a;i++){
        r+= i*i*i;
        printf("%d^2  ", i);
    }
    printf("=  %d", r);
    return 0;
}
// 16	Suma de una serie de números fraccionarios 
#include<stdio.h>
int main(){
    int n, r=1, sum=1;
    printf("suma de numeros fraccionarios\ningrese numero: ");
    scanf("%d", &n);
    printf("%d ", r);
    //el bucle esta condicionado con la variable i con  valor de 1 hasta
    //n que es el valor que ingresa el usuario 
    //sum, suma y actualiza el valor de i 
    //el motivo por el que se le aumenta el uno a la variable 
    //la serie se imprime con  sum
    for(int i=1; i<n; i++){
        sum += i+1;
        printf("+ 1/%d  ", i);
    }
    printf("= 1/%d", sum );
    return 0;
}
//17	Producto de una serie de números fraccionarios 
#include<stdio.h>
int main(){
    int n, r=1, mul=1;
    printf("suma de numeros fraccionarios\ningrese numero: ");
    scanf("%d", &n);
    printf("%d ", r);
    // el for parte desde el i con un valor de uno hasta n con el valor que el usuario ingresa
    //la variable mul actualiza la multiplicacion de la variable i por 1
    //hasta que se complete la condicon de for
    //en la funcion printh se imprime con 1/ para que el numerador sea constante 
    //se multitiplica i * i para que el digito ingresado por el usuario sean correcta 
    //i imprime la serie
    // mul imprime el producto de la serie de fracciones 
    for(int i=1; i<n; i++){
        mul *= i*1;
        printf("* 1/%d", i*1 );
    }
    printf(" = 1/%d", mul );
    return 0;
}
//18	Contar los números primos hasta n
#include <stdio.h>
int main() {
    int n, cont = 0;
    printf("contador de numeros primos\ningrese el numero que desea contar: ");
    scanf("%d", &n);
    for (int i= 2; i < n; i++) {
        int p = 1;
        for (int j = 2; j <= i / 2 && p == 1; j++) {
            if (i % j == 0) {
                p = 0;
            }
        }
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
    }
            printf("\nhay %d numeros primos ", cont);
    return 0;
}
// 19 Calcular en n-esimo numero triangular
#include <stdio.h>
int main(){
    int n, r=1, sum=1;
    printf( "calcular el n-esimo numero triangular\ningrese n: ");
    scanf("%d", &n);
    //esto imprime para que la serie comienza desde 1, puesto que r es igual a 1
    printf("%d ", r);
    //for parte dede la variable i con valor de 1, hasta el valor que el usuario ingrese
    //se imprime i para la serie, pero sumando 1, un arreglo para imprimir la serie correctamente en pantallas
    //sum, actualiza y almacenal la suma de i mas 1, dentro le variable 
    //i exporta la serie
    //sum, es la suma de la serie 

    for(int i =1; i<n; i++){
        printf("+ %d ", i+1);
        sum+=i+1;
    }
   printf("= %d", sum);
    return 0;
}
//20 Calcular la suma de las factoriales de los primeros n números.
#include <stdio.h>
int main() {
    //n valor ingresado por el usuario
    //f variable que almacena el valor de los factoriales
    //sum variable que almace las uma de los factoriales 
    int n, f=1, sum=0;
    printf("calcula la suma de las factorilaes\ningrese un numero ");
    scanf("%d", &n);
    //el comando for parte desde i con valor 1 hasta el valor ingresado por el usuario 
    //f actualiza cada suma de i por uno, 
    //f precenta la serie 
    //sum actualiza y suma f
    //sum precenta la suma de los valores factoriales
    for(int i=1; i<=n ; i++){
        f*= i*1;
        printf("%d ", f);
        sum+=f; 
    }
    printf("la suma de el factirial es  %d", sum);
    return 0;
}




