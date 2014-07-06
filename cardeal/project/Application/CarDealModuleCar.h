

namespace CarDeal{

	struct CarDealPropertyValue
	{		
		// a member varible of Linked List class shall be introduced here.
		bool addValue(int id, const char * value);
		bool setValue(int id, const char * value);		
	};

	struct CarDealCategory
	{
		const char * name;
		const char * Id;
		CarDealCategory *parent;
	};


	struct CarDealProperty
	{
	private:
		CarDealCategory *catgry;
		CarDealPropertyValue *propValue;

	public:
		const char * name;
		const char * Id;		
		struct CarDealPropertyValue *value;
		bool InCategory(CarDealCategory *);
		CarDealCategory GetCategory();
		bool updateValue(CarDealPropertyValue *);
	};

	class CarDealer{

	private:
		int moduleType;
		int typeOf;

	public:
		__declspec(dllexport) CarDealer();
		__declspec(dllexport) CarDealer(const char *type, const char *moduleName);

		__declspec(dllexport) bool createNewCategory(CarDealCategory *);
		__declspec(dllexport) bool createNewProperty(CarDealProperty *);
		__declspec(dllexport) CarDealCategory getCategoryByName(const char *);
		__declspec(dllexport) CarDealProperty getPropertyByName(CarDealCategory *, const char *propertyName);
		__declspec(dllexport) bool updateProperty(CarDealProperty *);
		__declspec(dllexport) bool updateCategory(CarDealCategory*);

		__declspec(dllexport) ~CarDealer();



	};
}