/**
 * Fonction pour g�rer le changement de type de variable (avec les flux)
 * @date 19/06/2010
 */

#include <iostream>
#include <string>
// N�cessaire aux flux
#include <sstream>
// Header
#include "../include/convert.hpp"

using namespace std;

// passer sa variable de std::string a cont char*
const char* stringToConstChar(std::string stringName) {
    const char* charName = NULL;
    charName = stringName.c_str();
    return charName;
}

// passage int vers string
std::string intToString(int value) {
    // cr�er un flux de sortie
    ostringstream ossValue;
    // �crire un nombre dans le flux
    ossValue << value;
    // r�cup�rer une cha�ne de caract�res
    string text = ossValue.str();
    return text;
}


std::string floatToString(float value) {
    // cr�er un flux de sortie
    ostringstream ossValue;
    // �crire un nombre dans le flux
    ossValue  << value;
    // r�cup�rer une cha�ne de caract�res
    string text = ossValue.str();

    return text;
}


int stringToInt(string text) {
	if(text != "") {
		// creer un flux � partir de la chaine a� convertir
		istringstream iss(text);
		// convertir en un int
		int nomber;
		iss >> nomber;
		return nomber;
	}
	else
		return -1;
}


float stringToFloat(string text) {
	if(text != "") {
		// creer un flux � partir de la chaine a� convertir
		istringstream iss(text);
		// convertir en un float
		float nomber;
		iss >> nomber;
		return nomber;
	}
	else
		return -1;
}

