#ifndef __BASE_PRINT__
#define __BASE_PRINT__

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory();

		/* Pure Virtual Generate Function */
		BasePrint* generatePrint(double value) = 0;
}

#endif