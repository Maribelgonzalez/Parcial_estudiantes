#include <iostream>

using namespace std;

class Estudiante {
	private:
		int Codigo;
		string Nombre;
		string Apellido;
		string Curso;
		
		public:
		Estudiante ();
		void setCodigo (int);
		void setNombre (string);
		void setApellido (string);
		void setCurso (string);
		int getCodigo ();
		string getNombre();
		string getApellido();
		string getCurso();
		
};

Estudiante :: Estudiante (){
	
}

void Estudiante :: setCodigo (int codigo){
	Codigo = codigo;
}
void Estudiante :: setNombre (string nombre){
	Nombre = nombre;
}
void Estudiante :: setApellido (string apellido){
	Apellido = apellido;
}
void Estudiante :: setCurso (string curso){
	Curso = curso;
}

int Estudiante :: getCodigo (){
	return Codigo;
}

string Estudiante :: getNombre (){
	return Nombre;
}

string Estudiante :: getApellido (){
	return Apellido;
}

string Estudiante :: getCurso (){
	return Curso;
}
int main (){
 	
	int codigo = 0, nota1, nota2, nota3, nota4;
	int resultado;
	string nombre, apellido, curso ;
	char continuar;
	do{
	Estudiante estu;
	cout <<"Ingrese Codigo del estudiante:";
	cin >> codigo;
	cout << "Ingrese Nombres:";
	cin >> nombre;
	cout << "Apellidos:";
	cin >> apellido;

	cout << "Ingrese el nombre del curso:";
	cin >> curso;

	estu.setCodigo(codigo);
	estu.setNombre(nombre);
	estu.setApellido(apellido);
	estu.setCurso(curso);
	cout <<"Ingrese las cuatro notas que obtuvo el estudiante:"<<endl;
	cin >> nota1 ;
	cin >> nota2 ;
	cin >> nota3 ;
	cin >> nota4 ;
	
	resultado = (nota1+nota2+nota3+nota4)/4;
	
	if (resultado >= 60){
		
		cout<< "El almuno:"<< estu.getNombre() << "  "<< estu.getApellido()<<"  Con el codigo:"<< estu.getCodigo()<<endl;
		cout<<"Tiene un promedio de: "<< resultado<<" " "en el curso de: "<< estu.getCurso()<< endl;;
		cout <<"Aprobado"<<endl;
	}else 
	cout << "Reprobado"<< endl;
	
	cout <<"Desea Agregar otro estudiante (s/n):";
	cin >> continuar;
	}while(continuar=='s' || continuar=='S');
	
	system ("pause");
	return 0;
}



