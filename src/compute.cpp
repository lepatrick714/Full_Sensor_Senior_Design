const double molarmassmethane = 16.04; 
const double molarmassCO2 = 44.01;
const double molarmassethane = 30.07;
const double airmolecularweight = 28.967;

const double gasvalue =  8.314;
const double idealgasvalue = 8.314; 
const double gasDensityvalue = 10.7316;
const double sidensityconvert = 16.0185; 

const double methane1 = 4.1315;
const double methane2 = 4.189874;
const double methane3 = 4.27075;
const double methane4 = 4.363;
const double methane5 = 4.466875;
const double methane6 = 4.57975;

const double ethaneneg20 = 5.701;
const double ethane0 = 5.9665;
const double ethane20 = 6.243375;
const double ethane40 = 6.529625;
const double ethane60 = 6.82225;
const double ethane80 = 7.121875;

const double CO2neg20 = 4.214125;
const double CO20 = 4.3285;
const double CO220 = 4.438875;
const double CO240 = 4.545875;
const double CO260 = 4.648625;
const double CO280 = 4.747;

const double thermalConductMethaneneg20 = 28.1; 
const double thermalConductMethane0 = 31.05;
const double thermalConductMethane20 = 33.89; 
const double thermalConductMethane40 = 36.86;       //Thermal Conductivity of Methane at 
const double thermalConductMethane60 = 39.96; 
const double thermalConductMethane80 = 43.21; 

const double thermalConductEthaneneg20 = 15.9; 
const double thermalConductEthane0 = 18.3;
const double thermalConductEthane20 = 20.5; 
const double thermalConductEthane40 = 22.9;       //Thermal Conductivity of Ethane at 
const double thermalConductEthane60 = 25.5; 
const double thermalConductEthane80 = 27;

const double thermalConductCO2neg20 = 13; 
const double thermalConductCO2zero = 14.6;
const double thermalConductCO220 = 16.23; 
const double thermalConductCO240 = 17.87;       //Thermal Conductivity of C02 at different 
const double thermalConductCO260 = 19.52; 
const double thermalConductCO280 = 21.11; 

const double texasPipleineMethane = 0.96
const double texasPipleineEthane = .018;
const double texasPipleineCO2 = 0.004;

const double rockyPipelineMethane = 0.945;
const double rockyPipelineEthane = 0.035;
const double rockyPipelineCO2 = 0.006;

const double peruvianLNGMethane = 0.883;
const double peruvianLNGEthane = 0.105
const double peruvianLNGCO2 = 0;

const double highAssociated1Methane = 0.8365;
const double highAssociated1Ethane = 0.1075;
const double highAssociated1CO2 = 0.027;

const double highAssociated2Methane = 0.875;
const double highAssociated2Ethane = 0.045;
const double highAssociated2CO2 = 0.044;

void 
calculate_cp(int tempCnt, 
             double &CPMethane, 
             double &CPCO2, 
             double &CPEthane, 
             double &thermConMethane, 
             double &thermConEthane, 
             double &thermConCO2) 
{
    if (tempCnt == -20) {
        CPMethane = methane1 * gasvalue;
        CPCO2 = CO2neg20 * gasvalue;
        CPEthane = ethaneneg20 * gasvalue;
        thermConMethane = thermalConductMethaneneg20;
        thermConEthane = thermalConductEthaneneg20; 
        thermConCO2 = thermalConductCO2neg20; 
    }
    if (tempCnt == 0) {
        CPMethane = methane2 * gasvalue;
        CPCO2 = CO20 * gasvalue;
        CPEthane = ethane0 * gasvalue;
        thermConMethane = thermalConductMethane0;
        thermConEthane = thermalConductEthane0; 
        thermConCO2 = thermalConductCO2zero; 
    }
    if (tempCnt == 20) {
        CPMethane = methane3 * gasvalue;
        CPCO2 = CO220 * gasvalue;
        CPEthane = ethane20 * gasvalue; 
        thermConMethane = thermalConductMethane20;
        thermConEthane = thermalConductEthane20; 
        thermConCO2 = thermalConductCO220; 
    }
    if (tempCnt == 40) {
        CPMethane = methane4 * gasvalue; 
        CPCO2 = CO240 * gasvalue;
        CPEthane = ethane40 * gasvalue;
        thermConMethane = thermalConductMethane40;
        thermConEthane = thermalConductEthane40; 
        thermConCO2 = thermalConductCO240; 
    }
    if (tempCnt == 60) {
        CPMethane = methane5 * gasvalue;
        CPCO2 = CO260 * gasvalue;
        CPEthane = ethane60 * gasvalue; 
        thermConMethane = thermalConductMethane60;
        thermConEthane = thermalConductEthane60; 
        thermConCO2 = thermalConductCO260; 
    }
    if (tempCnt == 80) {
        CPMethane = methane6 * gasvalue; 
        CPCO2 = CO280 * gasvalue;
        CPEthane = ethane80 * gasvalue; 
        thermConMethane = thermalConductMethane80;
        thermConEthane = thermalConductEthane80; 
        thermConCO2 = thermalConductCO280; 
    }
}



int count = 1;

for(int i = -20; i <= 80; i = i + 20) {
    calculate_cp(i, CPMethane, CPCO2, CPEthane, thermConMethane, thermConEthane, thermConCO2);

    for(int pressure = 500; pressure <= 3000; pressure = pressure + 500) {

        for(int j = 0; j < v.size(); ++j) {
            obtain_combinations(j, CombinationFossil, CombinationAnaerobic, CombinationLandfill);

            MethaneRatio = texasPipleineMethane*percentTexas + 
                           rockyPipelineMethane*percentRocky + 
                           peruvianLNGMethane*percentPeruvian + 
                           highAssociated1Methane*percentHigh1 + 
                           highAssociated2Methane*percentHigh2;

            //Here the percent variable are the percentages the permutations should be generating

            EthaneRatio = texasPipleineEthane*percentTexas + 
                          rockyPipelineEthane*percentRocky + 
                          peruvianLNGEthane*percentPeruvian + 
                          highAssociated1Ethane*percentHigh1 + 
                          highAssociated2Ethane*percentHigh2;


            CO2Ratio = texasPipleineCO2*percentTexas + 
                       rockyPipelineCO2*percentRocky + 
                       peruvianLNGCO2*percentPeruvian + 
                       highAssociated1CO2*percentHigh1 + 
                       highAssociated2CO2percentHigh2;

            file << endl << " --------------------------------------------------------" << endl;

            file << "(" << count << ")" << endl;
            count++;

            temp = i + 273.15;

            file << "At " << temp - 273.15 << " degrees, the Cp of Methane is: " << CPMethane << endl;
            file << "At " << temp << " degrees, the Cp of CO2 is: " << CPCO2 << endl;
            file << "Pressure: " << pressure << endl;

            CO2Ratio = 100 - MethaneRatio - EthaneRatio;
            file << "The ratio is " << MethaneRatio << "% Methane and " 
                << CO2Ratio  << "% CO2 and " << EthaneRatio  << "% Ethane." << endl;

            CpMixture = (CPMethane * MethaneRatio) + 
                        (CPCO2 * CO2Ratio) + 
                        (CPEthane*EthaneRatio); // important we want this
            
            file << "The Cp of the mixture is : " << CpMixture << endl; 
            CpMixture = CpMixture/100 ;
            CvMixture = CpMixture - gasvalue; // important we want this
            MethaneRatio = MethaneRatio / 100;
            CO2Ratio = CO2Ratio / 100;
            EthaneRatio = EthaneRatio / 100;
            YouRatio = (CpMixture / CvMixture);

            avgmolecularweight = MethaneRatio * molarmassmethane + 
                                 CO2Ratio * molarmassCO2 + 
                                 EthaneRatio * molarmassethane;

            specificgravity = avgmolecularweight / airmolecularweight; // important we want this
            file << "The specific gravity of the mixture is: " << specificgravity << endl;
            z=1;
            mixtureDensity = ((avgmolecularweight * pressure) / 
                             (z*gasDensityvalue* temp)) * sidensityconvert; // important we want this
            file << "The molar density is : " << mixtureDensity << endl;
            ThermalConducitivyMixture = ((thermConMethane * MethaneRatio) + 
                                         (thermConEthane * EthaneRatio) + 
                                         ( thermConCO2 * CO2Ratio))/1000; // important we want this

            soundVelocity = sqrt((YouRatio*z*idealgasvalue*temp)/(avgmolecularweight));
            file << "The Thermal Conductivity of the Mixture is : " << ThermalConducitivyMixture; // important we want this
            file << endl << " --------------------------------------------------------" << endl;

            file1 << i << ", " << pressure << ", " << count << ", " 
                  << CombinationFossil << ", " << CombinationAnaerobic << ", " 
                  << CombinationLandfill;
            file1 << ", , " << MethaneRatio * 100 << ", " << CO2Ratio * 100 
                  << ", " << EthaneRatio * 100 << ", , " << ThermalConducitivyMixture 
                  << ", " << CpMixture << ", " << CvMixture 
                  << ", " << mixtureDensity << ", " << specificgravity 
                  << ", " << soundVelocity << endl; 
            }
        }
    }
}







