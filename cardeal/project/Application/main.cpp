
#include "stdafx.h"

using namespace CarDeal;


void main(){


	CarDealer car("module", "car");// create an object, asking for CAR module in Car Dealer's Shop.(My thought to create in this way.)

	CarDealCategory category;//Category of details so associated with a CAR.
	CarDealProperty property;// Details or say Property of a CAR.

	//code goes here for creating new category and property.
	category.name = "<Name>";
	category.Id = "some id goes here";
	//category.parent = null;


	// now create property values
	// like engine size, car color, condition, price "structure", location, classification
	CarDealPropertyValue propertyValue;
	propertyValue.addValue(0, "Value");
	propertyValue.addValue(1, "Value");

	// Let this be price structure, so you can mention price break in propertyValue variable.
	// the point that price break varibale to this property variable for updating or for creating new.
	property.name = "<PropertyName>";
	property.Id = "<some id goes here>";
	property.value = &propertyValue;
	property.InCategory(&category);
	//

	// first add category in car
	car.createNewCategory(&category);
	// Then add property .
	car.createNewProperty(&property);

	//ZeroMemory(category);

	//get category details back using parametrized search.
	category = car.getCategoryByName("categoryName");
	// change the name or other relavant fields.
	category.name = "";//can change name of category;
	// finally update the changes.
	car.updateCategory(&category);

	//ZeroMemory(property);
	// obtain back the property using prameterized search.
	property = car.getPropertyByName(&category, "propertyName");
	// change the parameter fields values.
	property.name = "";//can change the name;

	//ZeroMemory(propertyValue);
	//function / method to handle change car location, and other relevant fields
	propertyValue = *property.value;
	propertyValue.setValue(0, "NewValue");// 0 - Indexed column under propertyName.
	// various Property Name like location, engine number, color will have propertyValue variable.
	// change the propertyValue variable fields and then update the changes in your Memory.
	// Apply changes to property so changed.
	property.updateValue(&propertyValue);
	// also, update tehe changed property to car's DB or memory.
	car.updateProperty(&property);

}