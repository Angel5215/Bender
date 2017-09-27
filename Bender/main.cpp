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

	//	MANIJA PUERTA (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(93.7, 120, 0);
	glVertex3f(93.9, 121.5, 0);
	glVertex3f(94, 122.5, 0);
	glVertex3f(95, 123, 0);
	glVertex3f(96.5, 123, 0);
	glVertex3f(98, 122.8, 0);
	glVertex3f(98.5, 122, 0);
	glVertex3f(98.7, 120.5, 0);
	glVertex3f(98, 119, 0);
	glVertex3f(97, 118, 0);
	glVertex3f(95, 118, 0);
	glVertex3f(94.3, 119, 0);

	glEnd();


	//	PECHO (RELLENO)
	glColor3f(0.8745, 0.9098, 0.9411);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glVertex3f(144, 154.5, 0);	//	PUNTO DE UNIÓN C1
	glVertex3f(140, 153, 0);
	glVertex3f(137, 152, 0);
	glVertex3f(133, 151, 0);
	glVertex3f(129, 150, 0);
	glVertex3f(124, 149, 0);
	glVertex3f(120, 148.5, 0);
	glVertex3f(114, 148, 0);
	glVertex3f(110, 148, 0);
	glVertex3f(108, 148, 0);
	glVertex3f(104, 149, 0);
	glVertex3f(100, 149.5, 0);
	glVertex3f(97.5, 150, 0);
	glVertex3f(94, 151, 0);
	glVertex3f(92, 152, 0);
	glVertex3f(90, 153, 0);
	glVertex3f(86.5, 155, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(88, 157.5, 0);
	glVertex3f(90, 159.5, 0);
	glVertex3f(93, 162, 0);
	glVertex3f(95, 164, 0);
	glVertex3f(98.5, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(98.5, 163.5, 0);
	glVertex3f(100, 163, 0);
	glVertex3f(103, 162, 0);
	glVertex3f(106, 161.5, 0);
	glVertex3f(110, 161, 0);
	glVertex3f(115, 161, 0);
	glVertex3f(120, 162, 0);
	glVertex3f(123.5, 162.5, 0);
	glVertex3f(127, 164, 0);
	glVertex3f(130, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(132, 165, 0);
	glVertex3f(135, 163, 0);
	glVertex3f(138, 161, 0);
	glVertex3f(140, 159, 0);
	glVertex3f(142, 156.5, 0);

	glEnd();

	//	PECHO (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(144, 154.5, 0);	//	PUNTO DE UNIÓN C1
	glVertex3f(140, 153, 0);
	glVertex3f(137, 152, 0);
	glVertex3f(133, 151, 0);
	glVertex3f(129, 150, 0);
	glVertex3f(124, 149, 0);
	glVertex3f(120, 148.5, 0);
	glVertex3f(114, 148, 0);
	glVertex3f(110, 148, 0);
	glVertex3f(108, 148, 0);
	glVertex3f(104, 149, 0);
	glVertex3f(100, 149.5, 0);
	glVertex3f(97.5, 150, 0);
	glVertex3f(94, 151, 0);
	glVertex3f(92, 152, 0);
	glVertex3f(90, 153, 0);
	glVertex3f(86.5, 155, 0);	//	PUNTO DE UNIÓN C1

	glVertex3f(88, 157.5, 0);
	glVertex3f(90, 159.5, 0);
	glVertex3f(93, 162, 0);
	glVertex3f(95, 164, 0);
	glVertex3f(98.5, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(98.5, 163.5, 0);
	glVertex3f(100, 163, 0);
	glVertex3f(103, 162, 0);
	glVertex3f(106, 161.5, 0);
	glVertex3f(110, 161, 0);
	glVertex3f(115, 161, 0);
	glVertex3f(120, 162, 0);
	glVertex3f(123.5, 162.5, 0);
	glVertex3f(127, 164, 0);
	glVertex3f(130, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(132, 165, 0);
	glVertex3f(135, 163, 0);
	glVertex3f(138, 161, 0);
	glVertex3f(140, 159, 0);
	glVertex3f(142, 156.5, 0);

	glEnd();

	//	CABEZA (COLOR)
	glColor3f(0.7882, 0.8313, 0.8823);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glVertex3f(130, 166, 0);	//	PUNTO DE UNIÓN CA1
	glVertex3f(127, 164, 0);
	glVertex3f(123.5, 162.5, 0);
	glVertex3f(120, 162, 0);
	glVertex3f(115, 161, 0);
	glVertex3f(110, 161, 0);
	glVertex3f(106, 161.5, 0);
	glVertex3f(103, 162, 0);
	glVertex3f(100, 163, 0);
	glVertex3f(98.5, 163.5, 0);
	glVertex3f(98.5, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(98.5, 168.5, 0);
	glVertex3f(99, 169.5, 0);
	glVertex3f(101, 170, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(101, 178, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(96, 178, 0);
	glVertex3f(96, 184, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(90, 184, 0);
	glVertex3f(88, 185, 0);
	glVertex3f(86, 186.5, 0);
	glVertex3f(85, 189, 0);
	glVertex3f(85, 194, 0);
	glVertex3f(85.5, 196.5, 0);
	glVertex3f(87, 198.5, 0);
	glVertex3f(89.5, 200, 0);
	glVertex3f(97, 204, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(97, 210, 0);
	glVertex3f(97.5, 213.5, 0);
	glVertex3f(98.5, 216, 0);
	glVertex3f(100, 219, 0);
	glVertex3f(102, 221, 0);
	glVertex3f(104, 222, 0);
	glVertex3f(106.5, 223.5, 0);
	glVertex3f(109.5, 224.5, 0);	//	PUNTO DE UNIÓN ANTENA 1
	glVertex3f(110, 223, 0);
	glVertex3f(112, 222.5, 0);
	glVertex3f(114, 222, 0);
	glVertex3f(118, 222, 0);
	glVertex3f(120, 222.5, 0);
	glVertex3f(120.5, 223, 0);		//	PUNTO DE UNIÓN ANTENA 1
	glVertex3f(123, 222.5, 0);
	glVertex3f(125, 221, 0);
	glVertex3f(126.5, 219.5, 0);
	glVertex3f(129, 216.5, 0);
	glVertex3f(130, 213.5, 0);
	glVertex3f(131, 210, 0);


	glEnd();

	//	CABEZA (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(130, 166, 0);	//	PUNTO DE UNIÓN CA1
	glVertex3f(127, 164, 0);
	glVertex3f(123.5, 162.5, 0);
	glVertex3f(120, 162, 0);
	glVertex3f(115, 161, 0);
	glVertex3f(110, 161, 0);
	glVertex3f(106, 161.5, 0);
	glVertex3f(103, 162, 0);
	glVertex3f(100, 163, 0);
	glVertex3f(98.5, 163.5, 0);
	glVertex3f(98.5, 166, 0);	//	PUNTO DE UNIÓN CA1

	glVertex3f(98.5, 168.5, 0);
	glVertex3f(99, 169.5, 0);
	glVertex3f(101, 170, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(101, 178, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(96, 178, 0);
	glVertex3f(96, 184, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(90, 184, 0);
	glVertex3f(88, 185, 0);
	glVertex3f(86, 186.5, 0);
	glVertex3f(85, 189, 0);
	glVertex3f(85, 194, 0);
	glVertex3f(85.5, 196.5, 0);
	glVertex3f(87, 198.5, 0);
	glVertex3f(89.5, 200, 0);
	glVertex3f(97, 204, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(97, 210, 0);
	glVertex3f(97.5, 213.5, 0);
	glVertex3f(98.5, 216, 0);
	glVertex3f(100, 219, 0);
	glVertex3f(102, 221, 0);
	glVertex3f(104, 222, 0);
	glVertex3f(106.5, 223.5, 0);
	glVertex3f(109.5, 224.5, 0);	//	PUNTO DE UNIÓN ANTENA 1
	glVertex3f(110, 223, 0);
	glVertex3f(112, 222.5, 0);
	glVertex3f(114, 222, 0);
	glVertex3f(118, 222, 0);
	glVertex3f(120, 222.5, 0);
	glVertex3f(120.5, 223, 0);		//	PUNTO DE UNIÓN ANTENA 1
	glVertex3f(123, 222.5, 0);
	glVertex3f(125, 221, 0);
	glVertex3f(126.5, 219.5, 0);
	glVertex3f(129, 216.5, 0);
	glVertex3f(130, 213.5, 0);
	glVertex3f(131, 210, 0);


	glEnd();

	//	DIENTES (CONTORNO)
	glColor3f(0.9882, 0.9764, 0.8470);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glVertex3f(101, 170, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(101, 178, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(120, 178, 0);
	glVertex3f(121.8, 177, 0);
	glVertex3f(123.5, 176, 0);
	glVertex3f(124, 175, 0);
	glVertex3f(124, 170.5, 0);
	glVertex3f(123, 168.5, 0);
	glVertex3f(121, 167, 0);
	glVertex3f(118.8, 166.5, 0);
	glVertex3f(103, 166.5, 0);
	glVertex3f(101.5, 167.5, 0);
	glVertex3f(101.6, 168.5, 0);

	glEnd();


	//	DIENTES (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(101, 170, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(101, 178, 0);	//	PUNTO DE UNIÓN BOCA
	glVertex3f(120, 178, 0);
	glVertex3f(121.8, 177, 0);
	glVertex3f(123.5, 176, 0);
	glVertex3f(124, 175, 0);
	glVertex3f(124, 170.5, 0);
	glVertex3f(123, 168.5, 0);
	glVertex3f(121, 167, 0);
	glVertex3f(118.8, 166.5, 0);
	glVertex3f(103, 166.5, 0);
	glVertex3f(101.5, 167.5, 0);
	glVertex3f(101.6, 168.5, 0);

	glEnd();

	//	LINEAS DIENTES (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_LINE_STRIP);

	glVertex3f(101, 169.5, 0);
	glVertex3f(119, 169.5, 0);
	glVertex3f(121.5, 170, 0);
	glVertex3f(124, 171, 0);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex3f(101, 174.5, 0);
	glVertex3f(119, 174.5, 0);
	glVertex3f(121.5, 175, 0);
	glVertex3f(124, 176, 0);

	glEnd();

	glBegin(GL_LINES);

	glVertex3f(106, 178, 0);
	glVertex3f(106, 166, 0);

	glVertex3f(112, 178, 0);
	glVertex3f(112, 166, 0);

	glVertex3f(119, 178, 0);
	glVertex3f(119, 166, 0);


	glEnd();

	//	OJOS (CONTORNO)
	glColor3f(0.8745, 0.9098, 0.9411);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glVertex3f(96, 184, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(90, 184, 0);
	glVertex3f(88, 185, 0);
	glVertex3f(86, 186.5, 0);
	glVertex3f(85, 189, 0);
	glVertex3f(85, 194, 0);
	glVertex3f(85.5, 196.5, 0);
	glVertex3f(87, 198.5, 0);
	glVertex3f(89.5, 200, 0);
	glVertex3f(97, 204, 0);		//	PUNTO DE UNIÓN OJOS

	glVertex3f(99, 203.5, 0);
	glVertex3f(101, 202.5, 0);
	glVertex3f(118, 202.5, 0);
	glVertex3f(120, 202, 0);
	glVertex3f(122.3, 200, 0);
	glVertex3f(123.5, 198.5, 0);
	glVertex3f(123.5, 189, 0);
	glVertex3f(122.5, 187, 0);
	glVertex3f(120, 185, 0);
	glVertex3f(118.7, 184.5, 0);

	glEnd();

	//	OJOS (CONTORNO)
	glColor3f(0, 0, 0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_POLYGON);

	glVertex3f(96, 184, 0);		//	PUNTO DE UNIÓN OJOS
	glVertex3f(90, 184, 0);
	glVertex3f(88, 185, 0);
	glVertex3f(86, 186.5, 0);
	glVertex3f(85, 189, 0);
	glVertex3f(85, 194, 0);
	glVertex3f(85.5, 196.5, 0);
	glVertex3f(87, 198.5, 0);
	glVertex3f(89.5, 200, 0);
	glVertex3f(97, 204, 0);		//	PUNTO DE UNIÓN OJOS

	glVertex3f(99, 203.5, 0);
	glVertex3f(101, 202.5, 0);
	glVertex3f(118, 202.5, 0);
	glVertex3f(120, 202, 0);
	glVertex3f(122.3, 200, 0);
	glVertex3f(123.5, 198.5, 0);
	glVertex3f(123.5, 189, 0);
	glVertex3f(122.5, 187, 0);
	glVertex3f(120, 185, 0);
	glVertex3f(118.7, 184.5, 0);

	glEnd();
	

	

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

