/*************************************************************************************************************************
 *
 * Copyright © 2016 <Team_Name_Pending>. All rights reserved.
 * The contents of this medium are confidential and proprietary to <Team_Name_Pending>,
 * and shall not be disclosed, disseminated, copied or used except as expressly
 * authorized in writing by a <Team_Name_Pending> offical.
 *
 * **********************************************************************************************************************/

#include "../headers/Fuel_Sensor_Constants.h"  // constants that were previously listed here have been moved to Fuel_Sensor_Constants.h
#include <math.h>                              // included for use of square root.
#include <iostream>                            // included for use of cout
using namespace std;



bool calculate_cp(int tempCnt, int pressureCnt, double &CPMethane, double &CPPropane, double &CPCO2, double &CPEthane, double &CPButane, double &thermConMethane, double &thermConEthane, double &thermConPropane, double &thermConCO2, double &thermConButane) {

    if (tempCnt == -20 && pressureCnt == 500) {
      CPMethane = methP500Tneg20 * gasvalue;
      CPEthane = ethP500Tneg20 * gasvalue;
      CPPropane = proP500Tneg20 * gasvalue;
      CPCO2 = CO2P500Tneg20 * gasvalue;
      CPButane = butP500Tneg20 * gasvalue;
      thermConMethane = thercoMethP500Tneg20;
      thermConEthane = thercoEthP500Tneg20;
      thermConPropane = thercoProP500Tneg20;
      thermConCO2 = thercoCO2P500Tneg20;
      thermConButane = thercoButP500Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 500) {
      CPMethane = methP500T0 * gasvalue;
      CPEthane = ethP500T0 * gasvalue;
      CPPropane = proP500T0 * gasvalue;
      CPCO2 = CO2P500T0 * gasvalue;
      CPButane = butP500T0 * gasvalue;
      thermConMethane = thercoMethP500T0;
      thermConEthane = thercoEthP500T0;
      thermConPropane = thercoProP500T0;
      thermConCO2 = thercoCO2P500T0;
      thermConButane = thercoButP500T0;
    } else if (tempCnt == 20 && pressureCnt == 500) {
      CPMethane = methP500T20 * gasvalue;
      CPEthane = ethP500T20 * gasvalue;
      CPPropane = proP500T20 * gasvalue;
      CPCO2 = CO2P500T20 * gasvalue;
      CPButane = butP500T20 * gasvalue;
      thermConMethane = thercoMethP500T20;
      thermConEthane = thercoEthP500T20;
      thermConPropane = thercoProP500T20;
      thermConCO2 = thercoCO2P500T20;
      thermConButane = thercoButP500T20;
    } else if (tempCnt == 40 && pressureCnt == 500) {
      CPMethane = methP500T40 * gasvalue;
      CPEthane = ethP500T40 * gasvalue;
      CPPropane = proP500T40 * gasvalue;
      CPCO2 = CO2P500T40 * gasvalue;
      CPButane = butP500T40 * gasvalue;
      thermConMethane = thercoMethP500T40;
      thermConEthane = thercoEthP500T40;
      thermConPropane = thercoProP500T40;
      thermConCO2 = thercoCO2P500T40;
      thermConButane = thercoButP500T40;
    } else if (tempCnt == 60 && pressureCnt == 500) {
      CPMethane = methP500T60 * gasvalue;
      CPEthane = ethP500T60 * gasvalue;
      CPPropane = proP500T60 * gasvalue;
      CPCO2 = CO2P500T60 * gasvalue;
      CPButane = butP500T60 * gasvalue;
      thermConMethane = thercoMethP500T60;
      thermConEthane = thercoEthP500T60;
      thermConPropane = thercoProP500T60;
      thermConCO2 = thercoCO2P500T60;
      thermConButane = thercoButP500T60; \
    } else if (tempCnt == 80 && pressureCnt == 500) {
      CPMethane = methP500T80 * gasvalue;
      CPEthane = ethP500T80 * gasvalue;
      CPPropane = proP500T80 * gasvalue;
      CPCO2 = CO2P500T80 * gasvalue;
      CPButane = butP500T80 * gasvalue;
      thermConMethane = thercoMethP500T80;
      thermConEthane = thercoEthP500T80;
      thermConPropane = thercoProP500T80;
      thermConCO2 = thercoCO2P500T80;
      thermConButane = thercoButP500T80;
    } else if (tempCnt == -20 && pressureCnt == 1000) {
      CPMethane = methP1000Tneg20 * gasvalue;
      CPEthane = ethP1000Tneg20 * gasvalue;
      CPPropane = proP1000Tneg20 * gasvalue;
      CPCO2 = CO2P1000Tneg20 * gasvalue;
      CPButane = butP1000Tneg20 * gasvalue;
      thermConMethane = thercoMethP1000Tneg20;
      thermConEthane = thercoEthP1000Tneg20;
      thermConPropane = thercoProP1000Tneg20;
      thermConCO2 = thercoCO2P1000Tneg20;
      thermConButane = thercoButP1000Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 1000) {
      CPMethane = methP1000T0 * gasvalue;
      CPEthane = ethP1000T0 * gasvalue;
      CPPropane = proP1000T0 * gasvalue;
      CPCO2 = CO2P1000T0 * gasvalue;
      CPButane = butP1000T0 * gasvalue;
      thermConMethane = thercoMethP1000T0;
      thermConEthane = thercoEthP1000T0;
      thermConPropane = thercoProP1000T0;
      thermConCO2 = thercoCO2P1000T0;
      thermConButane = thercoButP1000T0;
    } else if (tempCnt == 20 && pressureCnt == 1000) {
      CPMethane = methP1000T20 * gasvalue;
      CPEthane = ethP1000T20 * gasvalue;
      CPPropane = proP1000T20 * gasvalue;
      CPCO2 = CO2P1000T20 * gasvalue;
      CPButane = butP1000T20 * gasvalue;
      thermConMethane = thercoMethP1000T20;
      thermConEthane = thercoEthP1000T20;
      thermConPropane = thercoProP1000T20;
      thermConCO2 = thercoCO2P1000T20;
      thermConButane = thercoButP500T20;
    } else if (tempCnt == 40 && pressureCnt == 1000) {
      CPMethane = methP1000T40 * gasvalue;
      CPEthane = ethP1000T40 * gasvalue;
      CPPropane = proP1000T40 * gasvalue;
      CPCO2 = CO2P1000T40 * gasvalue;
      CPButane = butP1000T40 * gasvalue;
      thermConMethane = thercoMethP1000T40;
      thermConEthane = thercoEthP1000T40;
      thermConPropane = thercoProP1000T40;
      thermConCO2 = thercoCO2P1000T40;
      thermConButane = thercoButP1000T40;
    } else if (tempCnt == 60 && pressureCnt == 1000) {
      CPMethane = methP1000T60 * gasvalue;
      CPEthane = ethP1000T60 * gasvalue;
      CPPropane = proP1000T60 * gasvalue;
      CPCO2 = CO2P1000T60 * gasvalue;
      CPButane = butP1000T60 * gasvalue;
      thermConMethane = thercoMethP1000T60;
      thermConEthane = thercoEthP1000T60;
      thermConPropane = thercoProP1000T60;
      thermConCO2 = thercoCO2P1000T60;
      thermConButane = thercoButP1000T60;
    } else if (tempCnt == 80 && pressureCnt == 1000) {
      CPMethane = methP1000T80 * gasvalue;
      CPEthane = ethP1000T80 * gasvalue;
      CPPropane = proP1000T80 * gasvalue;
      CPCO2 = CO2P1000T80 * gasvalue;
      CPButane = butP1000T80 * gasvalue;
      thermConMethane = thercoMethP1000T80;
      thermConEthane = thercoEthP1000T80;
      thermConPropane = thercoProP1000T80;
      thermConCO2 = thercoCO2P1000T80;
      thermConButane = thercoButP1000T80;
    } else if (tempCnt == -20 && pressureCnt == 1500) {
      CPMethane = methP1500Tneg20 * gasvalue;
      CPEthane = ethP1500Tneg20 * gasvalue;
      CPPropane = proP1500Tneg20 * gasvalue;
      CPCO2 = CO2P1500Tneg20 * gasvalue;
      CPButane = butP1500Tneg20 * gasvalue;
      thermConMethane = thercoMethP1500Tneg20;
      thermConEthane = thercoEthP1500Tneg20;
      thermConPropane = thercoProP1500Tneg20;
      thermConCO2 = thercoCO2P1500Tneg20;
      thermConButane = thercoButP1500Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 1500) {
      CPMethane = methP1500T0 * gasvalue;
      CPEthane = ethP1500T0 * gasvalue;
      CPPropane = proP1500T0 * gasvalue;
      CPCO2 = CO2P1500T0 * gasvalue;
      CPButane = butP1500T0 * gasvalue;
      thermConMethane = thercoMethP1500T0;
      thermConEthane = thercoEthP1500T0;
      thermConPropane = thercoProP1500T0;
      thermConCO2 = thercoCO2P1500T0;
      thermConButane = thercoButP1500T0;
    } else if (tempCnt == 20 && pressureCnt == 1500) {
      CPMethane = methP1500T20 * gasvalue;
      CPEthane = ethP1500T20 * gasvalue;
      CPPropane = proP1500T20 * gasvalue;
      CPCO2 = CO2P1500T20 * gasvalue;
      CPButane = butP1500T20 * gasvalue;
      thermConMethane = thercoMethP1500T20;
      thermConEthane = thercoEthP1500T20;
      thermConPropane = thercoProP1500T20;
      thermConCO2 = thercoCO2P1500T20;
      thermConButane = thercoButP1500T20;
    } else if (tempCnt == 40 && pressureCnt == 1500) {
      CPMethane = methP1500T40 * gasvalue;
      CPEthane = ethP1500T40 * gasvalue;
      CPPropane = proP1500T40 * gasvalue;
      CPCO2 = CO2P1500T40 * gasvalue;
      CPButane = butP1500T40 * gasvalue;
      thermConMethane = thercoMethP1500T40;
      thermConEthane = thercoEthP1500T40;
      thermConPropane = thercoProP1500T40;
      thermConCO2 = thercoCO2P1500T40;
      thermConButane = thercoButP1500T40;
    } else if (tempCnt == 60 && pressureCnt == 1500) {
      CPMethane = methP1500T60 * gasvalue;
      CPEthane = ethP1500T60 * gasvalue;
      CPPropane = proP1500T60 * gasvalue;
      CPCO2 = CO2P1500T60 * gasvalue;
      CPButane = butP1500T60 * gasvalue;
      thermConMethane = thercoMethP1500T60;
      thermConEthane = thercoEthP1500T60;
      thermConPropane = thercoProP1500T60;
      thermConCO2 = thercoCO2P1500T60;
      thermConButane = thercoButP1500T60;
    } else if (tempCnt == 80 && pressureCnt == 1500) {
      CPMethane = methP1500T80 * gasvalue;
      CPEthane = ethP1500T80 * gasvalue;
      CPPropane = proP1500T80 * gasvalue;
      CPCO2 = CO2P1500T80 * gasvalue;
      CPButane = butP1500T80 * gasvalue;
      thermConMethane = thercoMethP1500T80;
      thermConEthane = thercoEthP1500T80;
      thermConPropane = thercoProP1500T80;
      thermConCO2 = thercoCO2P1500T80;
      thermConButane = thercoButP1500T80;
    } else if (tempCnt == -20 && pressureCnt == 2000) {
      CPMethane = methP2000Tneg20 * gasvalue;
      CPEthane = ethP2000Tneg20 * gasvalue;
      CPPropane = proP2000Tneg20 * gasvalue;
      CPCO2 = CO2P2000Tneg20 * gasvalue;
      CPButane = butP2000Tneg20 * gasvalue;
      thermConMethane = thercoMethP2000Tneg20;
      thermConEthane = thercoEthP2000Tneg20;
      thermConPropane = thercoProP2000Tneg20;
      thermConCO2 = thercoCO2P2000Tneg20;
      thermConButane = thercoButP2000Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 2000) {
      CPMethane = methP2000T0 * gasvalue;
      CPEthane = ethP2000T0 * gasvalue;
      CPPropane = proP2000T0 * gasvalue;
      CPCO2 = CO2P2000T0 * gasvalue;
      CPButane = butP2000T0 * gasvalue;
      thermConMethane = thercoMethP2000T0;
      thermConEthane = thercoEthP2000T0;
      thermConPropane = thercoProP2000T0;
      thermConCO2 = thercoCO2P2000T0;
      thermConButane = thercoButP2000T0;
    } else if (tempCnt == 20 && pressureCnt == 2000) {
      CPMethane = methP2000T20 * gasvalue;
      CPEthane = ethP2000T20 * gasvalue;
      CPPropane = proP2000T20 * gasvalue;
      CPCO2 = CO2P2000T20 * gasvalue;
      CPButane = butP2000T20 * gasvalue;
      thermConMethane = thercoMethP2000T20;
      thermConEthane = thercoEthP2000T20;
      thermConPropane = thercoProP2000T20;
      thermConCO2 = thercoCO2P2000T20;
      thermConButane = thercoButP2000T20;
    } else if (tempCnt == 40 && pressureCnt == 2000) {
      CPMethane = methP2000T40 * gasvalue;
      CPEthane = ethP2000T40 * gasvalue;
      CPPropane = proP2000T40 * gasvalue;
      CPCO2 = CO2P2000T40 * gasvalue;
      CPButane = butP2000T40 * gasvalue;
      thermConMethane = thercoMethP2000T40;
      thermConEthane = thercoEthP2000T40;
      thermConPropane = thercoProP2000T40;
      thermConCO2 = thercoCO2P2000T40;
      thermConButane = thercoButP2000T40;
    } else if (tempCnt == 60 && pressureCnt == 2000) {
      CPMethane = methP2000T60 * gasvalue;
      CPEthane = ethP2000T60 * gasvalue;
      CPPropane = proP2000T60 * gasvalue;
      CPCO2 = CO2P2000T60 * gasvalue;
      CPButane = butP2000T60 * gasvalue;
      thermConMethane = thercoMethP2000T60;
      thermConEthane = thercoEthP2000T60;
      thermConPropane = thercoProP2000T60;
      thermConCO2 = thercoCO2P2000T60;
      thermConButane = thercoButP2000T60;
    } else if (tempCnt == 80 && pressureCnt == 2000) {
      CPMethane = methP2000T80 * gasvalue;
      CPEthane = ethP2000T80 * gasvalue;
      CPPropane = proP2000T80 * gasvalue;
      CPCO2 = CO2P2000T80 * gasvalue;
      CPButane = butP2000T80 * gasvalue;
      thermConMethane = thercoMethP2000T80;
      thermConEthane = thercoEthP2000T80;
      thermConPropane = thercoProP2000T80;
      thermConCO2 = thercoCO2P2000T80;
      thermConButane = thercoButP2000T80;
    } else if (tempCnt == -20 && pressureCnt == 2500) {
      CPMethane = methP2500Tneg20 * gasvalue;
      CPEthane = ethP2500Tneg20 * gasvalue;
      CPPropane = proP2500Tneg20 * gasvalue;
      CPCO2 = CO2P2500Tneg20 * gasvalue;
      CPButane = butP2500Tneg20 * gasvalue;
      thermConMethane = thercoMethP2500Tneg20;
      thermConEthane = thercoEthP2500Tneg20;
      thermConPropane = thercoProP2500Tneg20;
      thermConCO2 = thercoCO2P2500Tneg20;
      thermConButane = thercoButP2500Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 2500) {
      CPMethane = methP2500T0 * gasvalue;
      CPEthane = ethP2500T0 * gasvalue;
      CPPropane = proP2500T0 * gasvalue;
      CPCO2 = CO2P2500T0 * gasvalue;
      CPButane = butP2500T0 * gasvalue;
      thermConMethane = thercoMethP2500T0;
      thermConEthane = thercoEthP2500T0;
      thermConPropane = thercoProP2500T0;
      thermConCO2 = thercoCO2P2500T0;
      thermConButane = thercoButP2500T0;
    } else if (tempCnt == 20 && pressureCnt == 2500) {
      CPMethane = methP2500T20 * gasvalue;
      CPEthane = ethP2500T20 * gasvalue;
      CPPropane = proP2500T20 * gasvalue;
      CPCO2 = CO2P2500T20 * gasvalue;
      CPButane = butP2500T20 * gasvalue;
      thermConMethane = thercoMethP2500T20;
      thermConEthane = thercoEthP2500T20;
      thermConPropane = thercoProP2500T20;
      thermConCO2 = thercoCO2P2500T20;
      thermConButane = thercoButP2500T20;
    } else if (tempCnt == 40 && pressureCnt == 2500) {
      CPMethane = methP2500T40 * gasvalue;
      CPEthane = ethP2500T40 * gasvalue;
      CPPropane = proP2500T40 * gasvalue;
      CPCO2 = CO2P2500T40 * gasvalue;
      CPButane = butP2500T40 * gasvalue;
      thermConMethane = thercoMethP2500T40;
      thermConEthane = thercoEthP2500T40;
      thermConPropane = thercoProP2500T40;
      thermConCO2 = thercoCO2P2500T40;
      thermConButane = thercoButP2500T40;
    } else if(tempCnt == 60 && pressureCnt == 2500) {
      CPMethane = methP2500T60 * gasvalue;
      CPEthane = ethP2500T60 * gasvalue;
      CPPropane = proP2500T60 * gasvalue;
      CPCO2 = CO2P2500T60 * gasvalue;
      CPButane = butP2500T60 * gasvalue;
      thermConMethane = thercoMethP2500T60;
      thermConEthane = thercoEthP2500T60;
      thermConPropane = thercoProP2500T60;
      thermConCO2 = thercoCO2P2500T60;
      thermConButane = thercoButP2500T60;
    } else if (tempCnt == 80 && pressureCnt == 2500) {
      CPMethane = methP2500T80 * gasvalue;
      CPEthane = ethP2500T80 * gasvalue;
      CPPropane = proP2500T80 * gasvalue;
      CPCO2 = CO2P2500T80 * gasvalue;
      CPButane = butP2500T80 * gasvalue;
      thermConMethane = thercoMethP2500T80;
      thermConEthane = thercoEthP2500T80;
      thermConPropane = thercoProP2500T80;
      thermConCO2 = thercoCO2P2500T80;
      thermConButane = thercoButP2500T80;
    } else if (tempCnt == -20 && pressureCnt == 3000) {
      CPMethane = methP3000Tneg20 * gasvalue;
      CPEthane = ethP3000Tneg20 * gasvalue;
      CPPropane = proP3000Tneg20 * gasvalue;
      CPCO2 = CO2P3000Tneg20 * gasvalue;
      CPButane = butP3000Tneg20 * gasvalue;
      thermConMethane = thercoMethP3000Tneg20;
      thermConEthane = thercoEthP3000Tneg20;
      thermConPropane = thercoProP3000Tneg20;
      thermConCO2 = thercoCO2P3000Tneg20;
      thermConButane = thercoButP3000Tneg20;
    } else if (tempCnt == 0 && pressureCnt == 3000) {
      CPMethane = methP3000T0 * gasvalue;
      CPEthane = ethP3000T0 * gasvalue;
      CPPropane = proP3000T0 * gasvalue;
      CPCO2 = CO2P3000T0 * gasvalue;
      CPButane = butP3000T0 * gasvalue;
      thermConMethane = thercoMethP3000T0;
      thermConEthane = thercoEthP3000T0;
      thermConPropane = thercoProP3000T0;
      thermConCO2 = thercoCO2P3000T0;
      thermConButane = thercoButP3000T0;
    } else if (tempCnt == 20 && pressureCnt == 3000) {
      CPMethane = methP3000T20 * gasvalue;
      CPEthane = ethP3000T20 * gasvalue;
      CPPropane = proP3000T20 * gasvalue;
      CPCO2 = CO2P3000T20 * gasvalue;
      CPButane = butP3000T20 * gasvalue;
      thermConMethane = thercoMethP3000T20;
      thermConEthane = thercoEthP3000T20;
      thermConPropane = thercoProP3000T20;
      thermConCO2 = thercoCO2P3000T20;
      thermConButane = thercoButP3000T20;
    } else if (tempCnt == 40 && pressureCnt == 3000) {
      CPMethane = methP3000T40 * gasvalue;
      CPEthane = ethP3000T40 * gasvalue;
      CPPropane = proP3000T40 * gasvalue;
      CPCO2 = CO2P3000T40 * gasvalue;
      CPButane = butP3000T40 * gasvalue;
      thermConMethane = thercoMethP3000T40;
      thermConEthane = thercoEthP3000T40;
      thermConPropane = thercoProP3000T40;
      thermConCO2 = thercoCO2P3000T40;
      thermConButane = thercoButP3000T40;
    } else if (tempCnt == 60 && pressureCnt == 3000) {
      CPMethane = methP3000T60 * gasvalue;
      CPEthane = ethP3000T60 * gasvalue;
      CPPropane = proP3000T60 * gasvalue;
      CPCO2 = CO2P3000T60 * gasvalue;
      CPButane = butP3000T60 * gasvalue;
      thermConMethane = thercoMethP3000T60;
      thermConEthane = thercoEthP3000T60;
      thermConPropane = thercoProP3000T60;
      thermConCO2 = thercoCO2P3000T60;
      thermConButane = thercoButP3000T60;
    } else if (tempCnt == 80 && pressureCnt == 3000) {
      CPMethane = methP3000T80 * gasvalue;
      CPEthane = ethP3000T80 * gasvalue;
      CPPropane = proP3000T80 * gasvalue;
      CPCO2 = CO2P3000T80 * gasvalue;
      CPButane = butP3000T80 * gasvalue;
      thermConMethane = thercoMethP3000T80;
      thermConEthane = thercoEthP3000T80;
      thermConPropane = thercoProP3000T80;
      thermConCO2 = thercoCO2P3000T80;
      thermConButane = thercoButP3000T80;
    } else {
     std::cout << "Error case not detected in compute.cpp file" << std::endl;
     return false;
    }

    return true;

} // End of calculate_cp

int main() {
    double CPMethane;
    double CPEthane;
    double CPPropane;
    double CPCO2;
    double CPButane;


    double thermConMethane;
    double thermConEthane;
    double thermConPropane;
    double thermConCO2;
    double thermConButane;

    double percentTexas;
    double percentRocky;
    double percentPeruvian;
    double percentHigh1;
    double percentHigh2;

    double MethaneRatio;
    double EthaneRatio;
    double PropaneRatio;
    double CO2Ratio;
    double ButaneRatio;

    double CpMixture;
    double CvMixture;
    double YouRatio;
    double zValue;
    double avgmolecularweight;
    double ThermalConducitivyMixture;
    double soundVelocity;

    for (int i = -20; i <= 80; i = i + 20) {
      for (int pressure = 500; pressure <= 3000; pressure = pressure + 500) {
        calculate_cp(i, pressure, CPMethane, CPPropane,CPCO2, CPEthane, CPButane, thermConMethane,thermConEthane, thermConPropane,  thermConCO2, thermConButane);

        //*******Here is where you should insert the permuations algoithim remember you are intoducting the percentTexas, percentRocky etc.

        MethaneRatio = (texasPipelineMethane*percentTexas + rockyPipelineMethane*percentRocky + peruvianLNGMethane*percentPeruvian + highAssociated1Methane*percentHigh1 + highAssociated2Methane*percentHigh2)*.01;

        EthaneRatio = (texasPipelineEthane*percentTexas + rockyPipelineEthane*percentRocky + peruvianLNGEthane*percentPeruvian + highAssociated1Ethane*percentHigh1 + highAssociated2Ethane*percentHigh2)*.01;

        PropaneRatio = (texasPipelinePropane*percentTexas + rockyPipelinePropane*percentRocky + peruvianLNGPropane*percentPeruvian + highAssociated1Propane*percentHigh1 + highAssociated2Propane*percentHigh2)*.01;

        CO2Ratio = (texasPipelineCO2*percentTexas + rockyPipelineCO2*percentRocky + peruvianLNGCO2*percentPeruvian + highAssociated1CO2*percentHigh1 + highAssociated2CO2*percentHigh2)*.01;

        ButaneRatio = (texasPipelineButane*percentTexas + rockyPipelineButane*percentRocky + peruvianLNGButane*percentPeruvian + highAssociated1Butane*percentHigh1 + highAssociated2Butane*percentHigh2)*.01;

        //file << "The ratio is " << MethaneRatio << "% Methane and " << CO2Ratio  << "% CO2 and " << EthaneRatio  << "% Ethane and " << PropaneRatio << “% Propane and “ << ButaneRatio << “% Butane.” <<  endl;

        CpMixture = (CPMethane * MethaneRatio) + (CPCO2 * CO2Ratio) + (CPEthane*EthaneRatio) + (CPPropane*PropaneRatio)+ (CPButane * ButaneRatio); // important we want this

        //file << "The Cp of the mixture is : " << CpMixture << endl; 
        CvMixture = CpMixture - gasvalue; // important we want this

        YouRatio = (CpMixture / CvMixture);

        avgmolecularweight = MethaneRatio * molarmassmethane + CO2Ratio * molarmassCO2 + EthaneRatio * molarmassethane + PropaneRatio*molarmasspropane + ButaneRatio*molarmassbutane;

        pressure = pressure*0.0689476;

        i = i+273.15;

        zValue=1; //*********Program to calculate Z goes here******** erase this line after
                                // Both i which is temperature and pressure variable are needed

        pressure = pressure * 14.50;


        ThermalConducitivyMixture = ((thermConMethane * MethaneRatio) + (thermConEthane * EthaneRatio) + ( thermConCO2 * CO2Ratio)+ (thermConPropane*PropaneRatio) + (thermConButane * ButaneRatio))/1000; // important we want this


        soundVelocity = sqrt((YouRatio*zValue*idealgasvalue*i)/(avgmolecularweight));

                    //file << "The Thermal Conductivity of the Mixture is : " << ThermalConducitivyMixture; // important we want this
                    //file << endl << " --------------------------------------------------------" << endl;

                    //file1 << i << ", " << pressure << ", " << count << ", " << CombinationFossil << ", " << CombinationAnaerobic << ", " << CombinationLandfill;// this will be different in our case
                    //file1 << ", , " << MethaneRatio * 100 << ", " << CO2Ratio * 100 << ", " << EthaneRatio * 100<< ", , " << ThermalConducitivyMixture << ", " << CpMixture << ", " << CvMixture << ", " << soundVelocity << endl;

      }
    }

    return 0;
}
