#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct S_Empleado
{
  int id;
  char nombre[128];
  int horasTrabajadas;
  int sueldo;
};
typedef struct S_Empleado Empleado;

void em_calcularSueldo(void* p);
int em_filtrarListaPorSueldo(void* p,int from, int to);

Empleado* employee_new();
void employee_delete(Empleado *this);

int employee_setId(Empleado* this,int id);
int employee_getId(Empleado* this,int* id);
int employee_setIdString(Empleado *this,char *id);

int employee_setNombre(Empleado* this,char* nombre);
int employee_getNombre(Empleado* this,char* nombre);

int employee_setHorasTrabajadas(Empleado* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Empleado* this,int* horasTrabajadas);
int employee_setHorasTrabajadasString(Empleado *this,char *horasTrabajadas);



#endif // EMPLEADO_H_INCLUDED
