

#ifndef CARDEALMODULECAR_H
#define CARDEALMODULECAR_H 


#include "CarDealModuleCar.h"
#include <string.h>

namespace CarDeal{

	bool CarDealPropertyValue::addValue(int id, const char * value){
		// code goes for adding vlaues in Linked List.


		// by default false always.
		return false;
	}

	bool CarDealPropertyValue::setValue(int id, const char * value){
		//code goes here for set new value to exiting node in Linked List.

		// by default false always.
		return false;
	}

	bool CarDealProperty::InCategory(CarDealCategory *category){
		catgry = category;

		// by default false always.
		return false;
	}

	CarDealCategory CarDealProperty::GetCategory(){
		return *catgry;
	}

	bool CarDealProperty::updateValue(CarDealPropertyValue * propertyValue){
		propValue = propertyValue;

		// by default false always.
		return false;
	}	


	CarDealer::CarDealer(){

	}

	CarDealer::CarDealer(const char *type, const char *moduleName){

		if (strcmp(type, "module") == 0 && strcmp(moduleName, "car") == 0)
		{
			typeOf = 0;
			moduleType = 0;
		}

	}

	bool CarDealer::createNewCategory(CarDealCategory *category){
		//code goes here for creating new category,
		//either by inserting the data into Database.
		// or updating Linked list on the fly.

		// by default false always.
		return false;
	}
	
	bool CarDealer::createNewProperty(CarDealProperty *property){
		// code goes here for creating new property under specified category.
		// can be directly updated in Database or
		// updated in linked list on the fly.

		// by default false always.
		return false;
	}

	CarDealCategory CarDealer::getCategoryByName(const char *categoryName){
		// either search from Linked list and return category structure
		// or search details from DB and then collect data from it and return the object.

		CarDealCategory var;
		
		// obtain var on basis of name field.
		return  var;
	}

	CarDealProperty CarDealer::getPropertyByName(CarDealCategory *category, const char * propertyName){

		// while searching, search with parameter of category, then property name.
		CarDealProperty var;
		
		//either search from DB or from Linked List.

		return var;
	}

	bool CarDealer::updateProperty(CarDealProperty *property){

		// find the category in Linked list or in DB using 
		CarDealCategory var = property->GetCategory();
		// now search in category using var variable.
		// and update it

		// by default false always.
		return false;
	}

	bool CarDealer::updateCategory(CarDealCategory *category){


		//update the category details/ fields in Linked list on fly or directly
		// update the same in DB by carrying out DB operation.


		//by Default returns false;
		return false;
	}

	CarDealer::~CarDealer(){
		// destructor code goes here
	}
}

#endif