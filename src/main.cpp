#include <LaborkaConfig.h>
#ifdef  USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else 
	#include<cmath>
#endif

#include<iostream>
#include<string>

int main()
{
double result_sin=0;
double result_cos=0;
double result_tan=0;
double result_ctg=0;


result_sin=degreemath::sin(45.0);
std::cout<<"Sin"<<std::endl;
std::cout<< result_sin <<std::endl;

result_cos=degreemath::cos(45.0);
std::cout<<"Cos"<<std::endl;
std::cout<< result_cos <<std::endl;

result_tan=degreemath::tan(45.0);
std::cout<<"tan"<<std::endl;
std::cout<< result_tan <<std::endl;

result_ctg=degreemath::ctg(45.0);
std::cout<<"Ctg"<<std::endl;
std::cout<< result_ctg <<std::endl;

#ifdef USE_TRIGONOMETRY_DEGREE
double result_ostateczny = 0.0;

	#ifdef USE_TRIGONOMETRY_DEGREE
	result_ostateczny = degreemath::cos(45.0);
	std::cout<< result_ostateczny <<std::endl;
	#else
    result_ostateczny = std::cos(45.0);
	std::cout<< result_ostateczny <<std::endl;

#endif

}