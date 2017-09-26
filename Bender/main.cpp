//	Semestre 2018 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//************* Quiñones Rivera Josué Emanuel			******//
//*************	Vázquez Álvarez Ángel Eduardo			******//
//************************************************************//


//	Colores utilizados
// (223, 232, 240) -----> (0.8745, 0.9098, 0.9411)
// (201, 212, 225) -----> (0.7882, 0.8313, 0.8823)
// (252, 249, 216) -----> (0.9882, 0.9764, 0.8470)
// (171, 186, 206) -----> (0.6705, 0.7294, 0.8078)

#include "Main.h"
void InitGL(GLvoid)
{
	/* glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);*/

	//	Color plata de fondo.
	glClearColor(1.0000, 1.0000, 1.0000, 0.0);
}

void display(void)	//	Creamos la funcion donde se dibuja
{
	//	Limpiamos pantalla y depth buffer.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glMatrixMode(GL_MODELVIEW);
	//	Reinicializamos la actual matriz ModelView
	glLoadIdentity();

	//	Poner aqui codigo a dibujar

	//	Pie izquierdo (color)
	glColor3f(0.7882, 0.8313, 0.8823);
	glLineWidth(1.5);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(77, 30, 0);
	glVertex3f(78, 28.5, 0);
	glVertex3f(80, 27.5, 0);
	glVertex3f(82, 27, 0);
	glVertex3f(85, 26.5, 0);
	glVertex3f(87, 26, 0);
	glVertex3f(90, 25.5, 0);
	glVertex3f(93, 25.2, 0);
	glVertex3f(95, 25, 0);
	glVertex3f(98, 25.2, 0);
	glVertex3f(100, 25.5, 0);
	glVertex3f(103, 25.8, 0);
	glVertex3f(105, 26, 0);
	glVertex3f(108, 26.5, 0);
	glVertex3f(110, 27, 0);
	glVertex3f(112, 27.5, 0);
	glVertex3f(113, 28, 0);
	glVertex3f(113, 30, 0);
	glVertex3f(112, 31.5, 0);
	glVertex3f(111, 32.5, 0);
	glVertex3f(110, 35, 0);
	glVertex3f(108, 37, 0);
	glVertex3f(107, 38, 0);
	glVertex3f(105, 39.5, 0);
	glVertex3f(103, 40.5, 0);
	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(100, 40, 0);
	glVertex3f(98, 39.3, 0);
	glVertex3f(95, 38.8, 0);
	glVertex3f(93, 39.3, 0);
	glVertex3f(90, 39.5, 0);
	glVertex3f(89, 40.5, 0);
	glVertex3f(88, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(85, 40.5, 0);
	glVertex3f(83, 38.7, 0);
	glVertex3f(81, 37, 0);
	glVertex3f(80, 35.5, 0);
	glVertex3f(78, 32.5, 0);

	glEnd();

	//	Pie izquierdo (contorno)
	glColor3f(0, 0, 0);
	glLineWidth(1.0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);

	glVertex3f(77, 30, 0);
	glVertex3f(78, 28.5, 0);
	glVertex3f(80, 27.5, 0);
	glVertex3f(82, 27, 0);
	glVertex3f(85, 26.5, 0);
	glVertex3f(87, 26, 0);
	glVertex3f(90, 25.5, 0);
	glVertex3f(93, 25.2, 0);
	glVertex3f(95, 25, 0);
	glVertex3f(98, 25.2, 0);
	glVertex3f(100, 25.5, 0);
	glVertex3f(103, 25.8, 0);
	glVertex3f(105, 26, 0);
	glVertex3f(108, 26.5, 0);
	glVertex3f(110, 27, 0);
	glVertex3f(112, 27.5, 0);
	glVertex3f(113, 28, 0);
	glVertex3f(113, 30, 0);
	glVertex3f(112, 31.5, 0);
	glVertex3f(111, 32.5, 0);
	glVertex3f(110, 35, 0);
	glVertex3f(108, 37, 0);
	glVertex3f(107, 38, 0);
	glVertex3f(105, 39.5, 0);
	glVertex3f(103, 40.5, 0);
	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(100, 40, 0);
	glVertex3f(98, 39.3, 0);
	glVertex3f(95, 38.8, 0);
	glVertex3f(93, 39.3, 0);
	glVertex3f(90, 39.5, 0);
	glVertex3f(89, 40.5, 0);
	glVertex3f(88, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(85, 40.5, 0);
	glVertex3f(83, 38.7, 0);
	glVertex3f(81, 37, 0);
	glVertex3f(80, 35.5, 0);
	glVertex3f(78, 32.5, 0);

	glEnd();

	glLineWidth(1.0);

	//	Pierna izquierda (color)
	glColor3f(0.6705, 0.7294, 0.8078);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(100, 40, 0);
	glVertex3f(98, 39.3, 0);
	glVertex3f(95, 38.8, 0);
	glVertex3f(93, 39.3, 0);
	glVertex3f(90, 39.5, 0);
	glVertex3f(89, 40.5, 0);
	glVertex3f(88, 41.5, 0);	//	PUNTO DE UNIÓN 1

	glVertex3f(87, 45, 0);		//	PUNTO DE UNIÓN 2
	glVertex3f(86, 47, 0);
	glVertex3f(85, 50, 0);
	glVertex3f(84, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(83.5, 57, 0);
	glVertex3f(83, 60, 0);
	glVertex3f(83, 63, 0);
	glVertex3f(83.2, 65, 0);	//	PUNTO DE UNIÓN 4
	glVertex3f(83.5, 68, 0);
	glVertex3f(84, 70, 0);
	glVertex3f(84.5, 73, 0);
	glVertex3f(85.5, 75.5, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(86, 78, 0);
	glVertex3f(87, 80, 0);
	glVertex3f(88, 82, 0);
	glVertex3f(89, 84, 0);
	glVertex3f(90.5, 86, 0);	//	PUNTO DE UNIÓN 6
	glVertex3f(92, 88.5, 0);
	glVertex3f(94, 92, 0);		//	PUNTO DE UNIÓN 7 _
	glVertex3f(97, 91, 0);
	glVertex3f(100, 90, 0);
	glVertex3f(103, 89, 0);
	glVertex3f(105.8, 88.5, 0);	//	PUNTO DE UNIÓN 7 _

	glVertex3f(104, 86, 0);
	glVertex3f(102, 83.5, 0);
	glVertex3f(100, 80, 0);		//	PUNTO DE UNIÓN 6
	glVertex3f(98, 77, 0);
	glVertex3f(97, 75, 0);
	glVertex3f(95.5, 71, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(95, 68, 0);
	glVertex3f(93.7, 65, 0);
	glVertex3f(94, 63, 0);		//	PUNTO DE UNIÓN 4
	glVertex3f(94.1, 60, 0);
	glVertex3f(94.5, 56, 0);
	glVertex3f(95, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(96, 51, 0);
	glVertex3f(97, 48, 0);
	glVertex3f(97.7, 46.5, 0);	//	PUNTO DE UNIÓN 2
	glVertex3f(99, 44, 0);
	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1

	glEnd();

	//	Correción color 1
	glColor3f(1, 1, 1);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(105.8, 88.5, 0);	//	PUNTO DE UNIÓN 7 _

	glVertex3f(104, 86, 0);
	glVertex3f(102, 83.5, 0);
	glVertex3f(100, 80, 0);		//	PUNTO DE UNIÓN 6
	glVertex3f(98, 77, 0);
	glVertex3f(97, 75, 0);
	glVertex3f(95.5, 71, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(95, 68, 0);
	glVertex3f(93.7, 65, 0);
	glVertex3f(94, 63, 0);		//	PUNTO DE UNIÓN 4
	glVertex3f(94.1, 60, 0);
	glVertex3f(94.5, 56, 0);
	glVertex3f(95, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(96, 51, 0);
	glVertex3f(97, 48, 0);
	glVertex3f(97.7, 46.5, 0);	//	PUNTO DE UNIÓN 2
	glVertex3f(99, 44, 0);
	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1

	glEnd();

	//	Pierna izquierda (contorno)
	glColor3f(0, 0, 0);
	glLineWidth(1.0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);

	glVertex3f(101, 41.5, 0);	//	PUNTO DE UNIÓN 1
	glVertex3f(100, 40, 0);
	glVertex3f(98, 39.3, 0);
	glVertex3f(95, 38.8, 0);
	glVertex3f(93, 39.3, 0);
	glVertex3f(90, 39.5, 0);
	glVertex3f(89, 40.5, 0);
	glVertex3f(88, 41.5, 0);	//	PUNTO DE UNIÓN 1

	glVertex3f(87, 45, 0);		//	PUNTO DE UNIÓN 2
	glVertex3f(86, 47, 0);
	glVertex3f(85, 50, 0);
	glVertex3f(84, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(83.5, 57, 0);
	glVertex3f(83, 60, 0);
	glVertex3f(83, 63, 0);
	glVertex3f(83.2, 65, 0);	//	PUNTO DE UNIÓN 4
	glVertex3f(83.5, 68, 0);
	glVertex3f(84, 70, 0);
	glVertex3f(84.5, 73, 0);
	glVertex3f(85.5, 75.5, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(86, 78, 0);
	glVertex3f(87, 80, 0);
	glVertex3f(88, 82, 0);
	glVertex3f(89, 84, 0);
	glVertex3f(90.5, 86, 0);	//	PUNTO DE UNIÓN 6
	glVertex3f(92, 88.5, 0);
	glVertex3f(94, 92, 0);		//	PUNTO DE UNIÓN 7 _
	glVertex3f(97, 91, 0);
	glVertex3f(100, 90, 0);
	glVertex3f(103, 89, 0);
	glVertex3f(105.8, 88.5, 0);	//	PUNTO DE UNIÓN 7 _

	glVertex3f(104, 86, 0);
	glVertex3f(102, 83.5, 0);
	glVertex3f(100, 80, 0);		//	PUNTO DE UNIÓN 6
	glVertex3f(98, 77, 0);
	glVertex3f(97, 75, 0);
	glVertex3f(95.5, 71, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(95, 68, 0);
	glVertex3f(93.7, 65, 0);
	glVertex3f(94, 63, 0);		//	PUNTO DE UNIÓN 4
	glVertex3f(94.1, 60, 0);
	glVertex3f(94.5, 56, 0);
	glVertex3f(95, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(96, 51, 0);
	glVertex3f(97, 48, 0);	
	glVertex3f(97.7, 46.5, 0);	//	PUNTO DE UNIÓN 2
	glVertex3f(99, 44, 0);

	glEnd();
	glLineWidth(1.0);

	//	LÍNEAS PARA PIERNA IZQUIERDA
	glColor3f(0, 0, 0);
	glLineWidth(1.0);

	glBegin(GL_LINE_STRIP);
	glVertex3f(87, 45, 0);		//	PUNTO DE UNIÓN 2
	glVertex3f(90, 44.5, 0);
	glVertex3f(93, 44.8, 0);
	glVertex3f(96, 45.5, 0);
	glVertex3f(97.7, 46.5, 0);	//	PUNTO DE UNIÓN 2
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(84, 54, 0);		//	PUNTO DE UNIÓN 3
	glVertex3f(87, 53.5, 0);
	glVertex3f(90, 53, 0);
	glVertex3f(93, 53.5, 0);
	glVertex3f(95, 54, 0);		//	PUNTO DE UNIÓN 3
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(83.2, 65, 0);	//	PUNTO DE UNIÓN 4
	glVertex3f(86, 64, 0);
	glVertex3f(89, 63.2, 0);
	glVertex3f(92, 63, 0);
	glVertex3f(94, 63, 0);		//	PUNTO DE UNIÓN 4
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(85.5, 75.5, 0);	//	PUNTO DE UNIÓN 5
	glVertex3f(87, 74, 0);
	glVertex3f(89, 72.5, 0);
	glVertex3f(92, 71.5, 0);
	glVertex3f(94, 71.2, 0);
	glVertex3f(95.5, 71, 0);	//	PUNTO DE UNIÓN 5
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(90.5, 86, 0);	//	PUNTO DE UNIÓN 6
	glVertex3f(92, 83.5, 0);
	glVertex3f(94, 81.5, 0);
	glVertex3f(97, 80.5, 0);
	glVertex3f(100, 80, 0);		//	PUNTO DE UNIÓN 6
	glEnd();

	glLineWidth(1.0);

	//	Pie derecho (relleno)
	glColor3f(0.7882, 0.8313, 0.8823);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(114.5, 25, 0);
	glVertex3f(115, 23.5, 0);
	glVertex3f(118, 22.5, 0);
	glVertex3f(120, 21.5, 0);
	glVertex3f(123, 21, 0);
	glVertex3f(125, 20.5, 0);
	glVertex3f(128, 20.2, 0);
	glVertex3f(130, 20, 0);
	glVertex3f(133, 20, 0);
	glVertex3f(136, 20.2, 0);
	glVertex3f(140, 21, 0);
	glVertex3f(145, 22, 0);
	glVertex3f(149, 23, 0);
	glVertex3f(151, 24, 0);
	glVertex3f(151.5, 26, 0);
	glVertex3f(151, 28, 0);
	glVertex3f(150, 29.5, 0);
	glVertex3f(148.5, 32, 0);
	glVertex3f(146, 35, 0);
	glVertex3f(144, 35.5, 0);
	glVertex3f(142, 36.5, 0);
	glVertex3f(140, 37, 0);
	glVertex3f(138, 37.5, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(136, 36, 0);
	glVertex3f(134, 35, 0);
	glVertex3f(131, 34.7, 0);
	glVertex3f(128, 35, 0);
	glVertex3f(124.5, 36, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(122, 34, 0);
	glVertex3f(120, 32.5, 0);
	glVertex3f(118, 31, 0);
	glVertex3f(116, 29, 0);
	glVertex3f(115, 27, 0);

	glEnd();


	//	Pie derecho (contorno)
	glColor3f(0, 0, 0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);

	glVertex3f(114.5, 25, 0);
	glVertex3f(115, 23.5, 0);
	glVertex3f(118, 22.5, 0);
	glVertex3f(120, 21.5, 0);
	glVertex3f(123, 21, 0);
	glVertex3f(125, 20.5, 0);
	glVertex3f(128, 20.2, 0);
	glVertex3f(130, 20, 0);
	glVertex3f(133, 20, 0);
	glVertex3f(136, 20.2, 0);
	glVertex3f(140, 21, 0);
	glVertex3f(145, 22, 0);
	glVertex3f(149, 23, 0);
	glVertex3f(151, 24, 0);
	glVertex3f(151.5, 26, 0);
	glVertex3f(151, 28, 0);
	glVertex3f(150, 29.5, 0);
	glVertex3f(148.5, 32, 0);
	glVertex3f(146, 35, 0);
	glVertex3f(144, 35.5, 0);
	glVertex3f(142, 36.5, 0);
	glVertex3f(140, 37, 0);
	glVertex3f(138, 37.5, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(136, 36, 0);
	glVertex3f(134, 35, 0);
	glVertex3f(131, 34.7, 0);
	glVertex3f(128, 35, 0);
	glVertex3f(124.5, 36, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(122, 34, 0);
	glVertex3f(120, 32.5, 0);
	glVertex3f(118, 31, 0);
	glVertex3f(116, 29, 0);
	glVertex3f(115, 27, 0);

	glEnd();

	//	Pierna derecha (RELLENO)
	glColor3f(0.6705, 0.7294, 0.8078);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(138, 37.5, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(136, 36, 0);
	glVertex3f(134, 35, 0);
	glVertex3f(131, 34.7, 0);
	glVertex3f(128, 35, 0);
	glVertex3f(124.5, 36, 0);	//	PUNTO DE UNIÓN D1

	glVertex3f(123, 38, 0);
	glVertex3f(121, 40, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(120, 42, 0);
	glVertex3f(118, 45, 0);
	glVertex3f(116, 48, 0);
	glVertex3f(115, 50, 0);		//	PUNTO DE UNIÓN D3
	glVertex3f(114, 53, 0);
	glVertex3f(113, 55.5, 0);
	glVertex3f(112, 58, 0);
	glVertex3f(111.5, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(111, 64, 0);
	glVertex3f(110.7, 67.5, 0);
	glVertex3f(111, 70, 0);
	glVertex3f(111.2, 72, 0);	//	PUNTO DE UNIÓN D5
	glVertex3f(112, 76, 0);
	glVertex3f(113, 80, 0);
	glVertex3f(114.5, 83.5, 0);	//	PUNTO DE UNIÓN D6
	glVertex3f(115.5, 86, 0);
	glVertex3f(116.5, 88, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(120, 88.2, 0);
	glVertex3f(125, 89, 0);
	glVertex3f(130, 89.5, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(128, 87, 0);
	glVertex3f(127, 85, 0);
	glVertex3f(126, 82, 0);
	glVertex3f(125, 80, 0);		//	PUNTO DE UNIÓN D6
	glVertex3f(124, 77, 0);
	glVertex3f(123.5, 75, 0);
	glVertex3f(122.8, 72, 0);
	glVertex3f(123, 70, 0);		//	PUNTO DE UNIÓN D5
	glVertex3f(123.2, 66.5, 0);
	glVertex3f(123.7, 63, 0);
	glVertex3f(124, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(125, 58, 0);
	glVertex3f(126, 55, 0);
	glVertex3f(127, 52.5, 0);	//	PUNTO DE UNIÓN D3
	glVertex3f(129, 50, 0);
	glVertex3f(131, 46.5, 0);
	glVertex3f(132, 45, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(134, 42, 0);
	glVertex3f(137, 39, 0);

	glEnd();

	//	Correción color 1
	glColor3f(1, 1, 1);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);

	glVertex3f(130, 89.5, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(128, 87, 0);
	glVertex3f(127, 85, 0);
	glVertex3f(126, 82, 0);
	glVertex3f(125, 80, 0);		//	PUNTO DE UNIÓN D6
	glVertex3f(124, 77, 0);
	glVertex3f(123.5, 75, 0);
	glVertex3f(122.8, 72, 0);
	glVertex3f(123, 70, 0);		//	PUNTO DE UNIÓN D5
	glVertex3f(123.2, 66.5, 0);
	glVertex3f(123.7, 63, 0);
	glVertex3f(124, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(125, 58, 0);
	glVertex3f(126, 55, 0);
	glVertex3f(127, 52.5, 0);	//	PUNTO DE UNIÓN D3
	glVertex3f(129, 50, 0);
	glVertex3f(131, 46.5, 0);
	glVertex3f(132, 45, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(134, 42, 0);
	glVertex3f(137, 39, 0);
	glVertex3f(138, 37.5, 0);	//	PUNTO DE UNIÓN D1

	glEnd();

	//	Pierna derecha (contorno)
	glColor3f(0, 0, 0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);

	glVertex3f(138, 37.5, 0);	//	PUNTO DE UNIÓN D1
	glVertex3f(136, 36, 0);
	glVertex3f(134, 35, 0);
	glVertex3f(131, 34.7, 0);
	glVertex3f(128, 35, 0);
	glVertex3f(124.5, 36, 0);	//	PUNTO DE UNIÓN D1

	glVertex3f(123, 38, 0);
	glVertex3f(121, 40, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(120, 42, 0);
	glVertex3f(118, 45, 0);
	glVertex3f(116, 48, 0);
	glVertex3f(115, 50, 0);		//	PUNTO DE UNIÓN D3
	glVertex3f(114, 53, 0);
	glVertex3f(113, 55.5, 0);
	glVertex3f(112, 58, 0);
	glVertex3f(111.5, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(111, 64, 0);
	glVertex3f(110.7, 67.5, 0);
	glVertex3f(111, 70, 0);
	glVertex3f(111.2, 72, 0);	//	PUNTO DE UNIÓN D5
	glVertex3f(112, 76, 0);
	glVertex3f(113, 80, 0);
	glVertex3f(114.5, 83.5, 0);	//	PUNTO DE UNIÓN D6
	glVertex3f(115.5, 86, 0);
	glVertex3f(116.5, 88, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(120, 88.2, 0);
	glVertex3f(125, 89, 0);
	glVertex3f(130, 89.5, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(128, 87, 0);
	glVertex3f(127, 85, 0);
	glVertex3f(126, 82, 0);
	glVertex3f(125, 80, 0);		//	PUNTO DE UNIÓN D6
	glVertex3f(124, 77, 0);
	glVertex3f(123.5, 75, 0);
	glVertex3f(122.8, 72, 0);
	glVertex3f(123, 70, 0);		//	PUNTO DE UNIÓN D5
	glVertex3f(123.2, 66.5, 0);
	glVertex3f(123.7, 63, 0);
	glVertex3f(124, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(125, 58, 0);
	glVertex3f(126, 55, 0);
	glVertex3f(127, 52.5, 0);	//	PUNTO DE UNIÓN D3
	glVertex3f(129, 50, 0);
	glVertex3f(131, 46.5, 0);
	glVertex3f(132, 45, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(134, 42, 0);
	glVertex3f(137, 39, 0);

	glEnd();

	//	Líneas para pierna derecha
	glColor3f(0, 0, 0);

	glBegin(GL_LINE_STRIP);
	glVertex3f(121, 40, 0);		//	PUNTO DE UNIÓN D2
	glVertex3f(125, 40.5, 0);
	glVertex3f(128, 42, 0);
	glVertex3f(132, 45, 0);		//	PUNTO DE UNIÓN D2

	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(115, 50, 0);		//	PUNTO DE UNIÓN D3
	glVertex3f(120, 50, 0);
	glVertex3f(124, 51, 0);
	glVertex3f(127, 52.5, 0);	//	PUNTO DE UNIÓN D3

	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(111.5, 60.5, 0);	//	PUNTO DE UNIÓN D4
	glVertex3f(115, 59.5, 0);
	glVertex3f(118, 59, 0);
	glVertex3f(121, 59.5, 0);
	glVertex3f(124, 60.5, 0);	//	PUNTO DE UNIÓN D4

	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(111.2, 72, 0);	//	PUNTO DE UNIÓN D5
	glVertex3f(115, 70.5, 0);
	glVertex3f(119, 69.7, 0);
	glVertex3f(123, 70, 0);		//	PUNTO DE UNIÓN D5

	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex3f(114.5, 83.5, 0);	//	PUNTO DE UNIÓN D6
	glVertex3f(116.5, 81.5, 0);
	glVertex3f(120, 80.5, 0);
	glVertex3f(125, 80, 0);		//	PUNTO DE UNIÓN D6

	glEnd();


	//	CUERPO (COLOR)
	glColor3f(0.7882, 0.8313, 0.8823);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glVertex3f(130, 89.5, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(125, 89, 0);
	glVertex3f(120, 88.2, 0);
	glVertex3f(116.5, 88, 0);	//	PUNTO DE UNIÓN D7

	glVertex3f(115, 88, 0);
	glVertex3f(111.5, 87.5, 0);
	glVertex3f(108, 88, 0);

	glVertex3f(105.8, 88.5, 0);	//	PUNTO DE UNIÓN 7 _
	glVertex3f(103, 89, 0);
	glVertex3f(100, 90, 0);
	glVertex3f(97, 91, 0);
	glVertex3f(94, 92, 0);		//	PUNTO DE UNIÓN 7 _
	glVertex3f(92, 93, 0);
	glVertex3f(90, 94, 0);
	glVertex3f(89, 96, 0);
	glVertex3f(88, 133.5, 0);	//	PUNTO DE UNIÓN BI1
	glVertex3f(86.5, 153, 0);	//	PUNTO DE UNIÓN BI1

	glVertex3f(86.5, 155, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(90, 153, 0);
	glVertex3f(92, 152, 0);
	glVertex3f(94, 151, 0);
	glVertex3f(97.5, 150, 0);
	glVertex3f(100, 149.5, 0);
	glVertex3f(104, 149, 0);
	glVertex3f(108, 148, 0);
	glVertex3f(110, 148, 0);
	glVertex3f(114, 148, 0);
	glVertex3f(120, 148.5, 0);
	glVertex3f(124, 149, 0);
	glVertex3f(129, 150, 0);
	glVertex3f(133, 151, 0);
	glVertex3f(137, 152, 0);
	glVertex3f(140, 153, 0);
	glVertex3f(144, 154.5, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(143.5, 150, 0);	//	PUNTO DE UNIÓN BD1
	glVertex3f(141.5, 132.5, 0);//	PUNTO DE UNIÓN BD2

	glVertex3f(135, 95, 0);
	glVertex3f(134, 93, 0);
	glVertex3f(133, 91.5, 0);


	glEnd();

	//	CUERPO (CONTORNO)

	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(130, 89.5, 0);	//	PUNTO DE UNIÓN D7
	glVertex3f(125, 89, 0);
	glVertex3f(120, 88.2, 0);
	glVertex3f(116.5, 88, 0);	//	PUNTO DE UNIÓN D7

	glVertex3f(115, 88, 0);
	glVertex3f(111.5, 87.5, 0);
	glVertex3f(108, 88, 0);

	glVertex3f(105.8, 88.5, 0);	//	PUNTO DE UNIÓN 7 _
	glVertex3f(103, 89, 0);
	glVertex3f(100, 90, 0);
	glVertex3f(97, 91, 0);
	glVertex3f(94, 92, 0);		//	PUNTO DE UNIÓN 7 _
	glVertex3f(92, 93, 0);
	glVertex3f(90, 94, 0);
	glVertex3f(89, 96, 0);
	glVertex3f(88, 133.5, 0);	//	PUNTO DE UNIÓN BI1
	glVertex3f(86.5, 153, 0);	//	PUNTO DE UNIÓN BI1
	
	glVertex3f(86.5, 155, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(90, 153, 0);
	glVertex3f(92, 152, 0);
	glVertex3f(94, 151, 0);
	glVertex3f(97.5, 150, 0);
	glVertex3f(100, 149.5, 0);
	glVertex3f(104, 149, 0);
	glVertex3f(108, 148, 0);
	glVertex3f(110, 148, 0);
	glVertex3f(114, 148, 0);
	glVertex3f(120, 148.5, 0);
	glVertex3f(124, 149, 0);
	glVertex3f(129, 150, 0);
	glVertex3f(133, 151, 0);
	glVertex3f(137, 152, 0);
	glVertex3f(140, 153, 0);
	glVertex3f(144, 154.5, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(143.5, 150, 0);	//	PUNTO DE UNIÓN BD1
	glVertex3f(141.5, 132.5, 0);//	PUNTO DE UNIÓN BD2

	glVertex3f(135, 95, 0);
	glVertex3f(134, 93, 0);
	glVertex3f(133, 91.5, 0); 


	glEnd();

	//	PUERTA (CONTORNO)
	glColor3f(0, 0, 0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(92.5, 102, 0);
	glVertex3f(91.5, 142, 0);
	glVertex3f(92, 143, 0);
	glVertex3f(94, 142.7, 0);
	glVertex3f(98, 142, 0); 
	glVertex3f(103, 141, 0);
	glVertex3f(108.5, 140, 0);
	glVertex3f(115, 139.7, 0);
	glVertex3f(120, 140, 0);
	glVertex3f(123.5, 141, 0);
	glVertex3f(126.5, 141.5, 0);
	glVertex3f(128, 140.5, 0);
	glVertex3f(128.5, 139.5, 0);
	glVertex3f(128, 137.5, 0);
	glVertex3f(123.5, 99, 0);
	glVertex3f(122, 97, 0);
	glVertex3f(120.5, 96, 0);
	glVertex3f(117, 95.5, 0);
	glVertex3f(107, 95.5, 0);
	glVertex3f(101, 96.5, 0);
	glVertex3f(96.5, 98, 0);
	glVertex3f(94, 99.5, 0);

	glEnd();

	//	Cabello (0000 0001)
	/* glColor3f(0, 0, 0);
	glLineWidth(1.5);
	glBegin(GL_LINE_STRIP);

	glVertex3f(21.5, 4, 0);
	glVertex3f(22.2, 8.5, 0);
	glVertex3f(22.5, 9.5, 0);
	glVertex3f(23.1, 12.5, 0);
	glVertex3f(23.9, 15, 0);
	glVertex3f(24.2, 17.2, 0);
	glVertex3f(25, 20, 0);
	glVertex3f(25.7, 22.5, 0);
	glVertex3f(26, 25, 0);
	glVertex3f(26.9, 27.5, 0);
	glVertex3f(27.5, 30, 0);
	glVertex3f(28, 32.5, 0);
	glVertex3f(28.8, 35, 0);
	glVertex3f(29.5, 37.5, 0);
	glVertex3f(30, 40, 0);
	glVertex3f(31.1, 42.5, 0);
	glVertex3f(32, 45, 0);
	glVertex3f(32.7, 47.5, 0);
	glVertex3f(33.5, 50, 0);
	glVertex3f(34.4, 52.5, 0);
	glVertex3f(35.1, 55, 0);
	glVertex3f(36.1, 57.5, 0);
	glVertex3f(37, 60, 0);
	glVertex3f(38, 62.5, 0);
	glVertex3f(38.8, 65, 0);
	glVertex3f(39.6, 67.5, 0);
	glVertex3f(40.1, 70, 0);
	glVertex3f(41, 72.5, 0);
	glVertex3f(42, 75, 0);
	glVertex3f(42.5, 77.5, 0);
	glVertex3f(43.1, 80, 0);
	glVertex3f(44, 82.5, 0);
	glVertex3f(45, 85, 0);
	glVertex3f(45.3, 87.5, 0);
	glVertex3f(46, 90, 0);
	glVertex3f(46.7, 92.5, 0);
	glVertex3f(47, 95, 0);
	glVertex3f(48, 97.5, 0);
	glVertex3f(48.5, 100, 0);
	glVertex3f(49, 102.5, 0);
	glVertex3f(49.5, 105, 0);
	glVertex3f(50, 107.5, 0);
	glVertex3f(50.4, 110, 0);
	glVertex3f(50.8, 112.5, 0);
	glVertex3f(51, 115, 0);
	glVertex3f(51.2, 117.5, 0);
	glVertex3f(51.5, 120, 0);
	glVertex3f(52, 122.5, 0);
	glVertex3f(52, 125, 0);
	glVertex3f(52.2, 127.5, 0);
	glVertex3f(52.6, 130, 0);
	glVertex3f(53, 132.5, 0);
	glVertex3f(53.2, 135, 0);
	glVertex3f(53.5, 137.5, 0);
	glVertex3f(54, 140, 0);
	glVertex3f(54.2, 142.5, 0);
	glVertex3f(54.5, 145, 0);
	glVertex3f(55, 147.5, 0);
	glVertex3f(55.1, 150, 0);
	glVertex3f(55.5, 152.5, 0);
	glVertex3f(56, 155, 0);
	glVertex3f(56.2, 157.5, 0);
	glVertex3f(56.8, 160, 0);
	glVertex3f(57.2, 162.5, 0);
	glVertex3f(57.5, 165, 0);
	glVertex3f(58, 167.5, 0);
	glVertex3f(58.8, 170, 0);
	glVertex3f(59.5, 172.5, 0);
	glVertex3f(60.5, 175, 0);

	glEnd();
	glLineWidth(1.0);*/

	/*
	////	Moño 1, relleno (0000 0001)
	//glColor3f(0.9372, 0.7098, 0.7333);

	//glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	//glBegin(GL_POLYGON);

	//glVertex3f(60.5, 175, 0);
	//glVertex3f(60.2, 177.5, 0);
	//glVertex3f(60, 180, 0);
	//glVertex3f(60.2, 182.5, 0);
	//glVertex3f(60.8, 185, 0);
	//glVertex3f(62.5, 187.5, 0);
	//glVertex3f(63.5, 190, 0);
	//glVertex3f(64.7, 191, 0);
	//glVertex3f(66, 190, 0);
	//glVertex3f(68, 187.5, 0);
	//glVertex3f(68.5, 186.5, 0);	//	cuadro del moño
	//glVertex3f(67.8, 185, 0);
	//glVertex3f(68, 182.5, 0);
	//glVertex3f(67.5, 180, 0);	//	Unión linea
	//glVertex3f(66, 177.5, 0);
	//glVertex3f(64.5, 175, 0);
	//glVertex3f(63, 173.5, 0);
	//glVertex3f(62, 172.5, 0);

	//glEnd();

	////	Moño 1, relleno (0000 0010)
	//glColor3f(0.9372, 0.7098, 0.7333);

	//glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	//glBegin(GL_POLYGON);

	//glVertex3f(68.5, 186.5, 0);	//	cuadro del moño
	//glVertex3f(67.8, 185, 0);
	//glVertex3f(68, 182.5, 0);

	//glVertex3f(69.5, 182, 0);
	//glVertex3f(69.75, 184, 0);
	//glVertex3f(70, 186.8, 0);


	//glEnd();

	////	Moño 1, relleno (0000 0011)
	//glColor3f(0.9372, 0.7098, 0.7333);

	//glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	//glBegin(GL_POLYGON);

	//glVertex3f(70, 186.8, 0);
	//glVertex3f(71.5, 187.5, 0);
	//glVertex3f(72.5, 189.5, 0);
	//glVertex3f(74, 191, 0);
	//glVertex3f(75, 191.7, 0);
	//glVertex3f(77, 192.5, 0);
	//glVertex3f(79, 193.0, 0);
	//glVertex3f(80, 193.5, 0);
	//glVertex3f(82.5, 193, 0);
	//glVertex3f(82, 190, 0);
	//glVertex3f(81.5, 187.5, 0);
	//glVertex3f(81, 185, 0);
	//glVertex3f(80, 182.5, 0);
	//glVertex3f(79, 180, 0);
	//glVertex3f(78, 177.5, 0);
	//glVertex3f(77, 175, 0);
	//glVertex3f(75.5, 174, 0);
	//glVertex3f(73.5, 175, 0);
	//glVertex3f(72, 177.5, 0);
	//glVertex3f(71.5, 180, 0);
	//glVertex3f(69.5, 182, 0);
	//glVertex3f(69.75, 184, 0);

	//glEnd();

	////	Moño 1, línea (0000 0001)
	//glColor3f(0, 0, 0);
	//glLineWidth(1.5);
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glBegin(GL_POLYGON);

	//glVertex3f(60.5, 175, 0);
	//glVertex3f(60.2, 177.5, 0);
	//glVertex3f(60, 180, 0);
	//glVertex3f(60.2, 182.5, 0);
	//glVertex3f(60.8, 185, 0);
	//glVertex3f(62.5, 187.5, 0);
	//glVertex3f(63.5, 190, 0);
	//glVertex3f(64.7, 191, 0);
	//glVertex3f(66, 190, 0);
	//glVertex3f(68, 187.5, 0);
	//glVertex3f(68.5, 186.5, 0);	//	cuadro del moño
	//glVertex3f(67.8, 185, 0);
	//glVertex3f(68, 182.5, 0);
	//glVertex3f(67.5, 180, 0);	//	Unión linea
	//glVertex3f(66, 177.5, 0);
	//glVertex3f(64.5, 175, 0);
	//glVertex3f(63, 173.5, 0);
	//glVertex3f(62, 172.5, 0);

	//glEnd();
	//glLineWidth(1.0);

	////	Moño 1, línea (0000 0010)
	//glColor3f(0, 0, 0);
	//glLineWidth(1.5);
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glBegin(GL_POLYGON);

	//glVertex3f(68.5, 186.5, 0);	//	cuadro del moño
	//glVertex3f(67.8, 185, 0);
	//glVertex3f(68, 182.5, 0);

	//glVertex3f(69.5, 182, 0);
	//glVertex3f(69.75, 184, 0);
	//glVertex3f(70, 186.8, 0);


	//glEnd();
	//glLineWidth(1.0);

	////	Moño 1, línea (0000 0011)
	//glColor3f(0, 0, 0);
	//glLineWidth(1.5);
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glBegin(GL_POLYGON);

	//glVertex3f(70, 186.8, 0);
	//glVertex3f(71.5, 187.5, 0);
	//glVertex3f(72.5, 189.5, 0);
	//glVertex3f(74, 191, 0);
	//glVertex3f(75, 191.7, 0);
	//glVertex3f(77, 192.5, 0);
	//glVertex3f(79, 193.0, 0);
	//glVertex3f(80, 193.5, 0);
	//glVertex3f(82.5, 193, 0);
	//glVertex3f(82, 190, 0);
	//glVertex3f(81.5, 187.5, 0);
	//glVertex3f(81, 185, 0);
	//glVertex3f(80, 182.5, 0);
	//glVertex3f(79, 180, 0);
	//glVertex3f(78, 177.5, 0);
	//glVertex3f(77, 175, 0);
	//glVertex3f(75.5, 174, 0);
	//glVertex3f(73.5, 175, 0);
	//glVertex3f(72, 177.5, 0);
	//glVertex3f(71.5, 180, 0);
	//glVertex3f(69.5, 182, 0);
	//glVertex3f(69.75, 184, 0);

	//glEnd();
	//glLineWidth(1.0);

	////	Moño 1, línea (0000 0001)
	//glColor3f(0, 0, 0);
	//glLineWidth(1.5);
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glBegin(GL_POLYGON);

	//glVertex3f(60.5, 175, 0);
	//glVertex3f(60.2, 177.5, 0);
	//glVertex3f(60, 180, 0);
	//glVertex3f(60.2, 182.5, 0);
	//glVertex3f(60.8, 185, 0);
	//glVertex3f(62.5, 187.5, 0);
	//glVertex3f(63.5, 190, 0);
	//glVertex3f(64.7, 191, 0);
	//glVertex3f(66, 190, 0);
	//glVertex3f(68, 187.5, 0);
	//glVertex3f(68.8, 186.5, 0);	//	cuadro del moño
	//glVertex3f(67.8, 185, 0);
	//glVertex3f(68, 182.5, 0);
	//glVertex3f(67.5, 180, 0);	//	Unión linea
	//glVertex3f(66, 177.5, 0);
	//glVertex3f(64.5, 175, 0);
	//glVertex3f(63, 173.5, 0);
	//glVertex3f(62, 172.5, 0);


	//glEnd();
	//glLineWidth(1.0);
	*/

	glFlush();
}


void reshape(int width, int height)
{
	//	Prevenir división entre cero.
	if (height == 0)
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	//	Seleccionamos Projection Matrix
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//	Proyección ortogonal
	glOrtho(0, 225, 0, 265, 0, 20);

	//	Seleccionamos ModelView Matrix
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: 
			exit(0);
			break;
	 }
	 
	 glutPostRedisplay();
}    

int main(int argc, char ** argv)   // Main Function
{
	glutInit(&argc, argv);							//	Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);	//	Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(200 * 2.5, 265 * 2.5);		//	Tamaño de la Ventana
	glutInitWindowPosition(0, 0);					//	Posicion de la Ventana
	glutCreateWindow("Tarea 02");					//	Nombre de la Ventana
	InitGL();										//	Parametros iniciales de la aplicacion
	glutDisplayFunc(display);						//	Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);						//	Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);						//	Indicamos a Glut función de manejo de teclado
	glutMainLoop();

	return 0;
}

