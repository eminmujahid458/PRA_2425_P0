#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H
class BrazoRobotico{
private: 
	double x, y, z;
	bool sujetando;
public:
	BrazoRobotico(double x_ini, double y_ini, double z_ini);
	double getX();
	double getY();
	double getZ();
	bool estaSujetando();
	void coger();
	void soltar();
	void mover(double x_dest, double y_dest, double z_dest);
}

#endif
