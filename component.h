#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Base {
    public:
        /* Constructors */
        Base() {}

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class UnaryOperator : public Base {
		protected:
		Base* node;
		public:
		UnaryOperator() : Base() { };
		UnaryOperator(Base* n) : node(n){};
		
		Base* getNode() {return node;} ;
		virtual double evaluate() = 0;
};


class Square : public UnaryOperator {
	public:
	Square() : UnaryOperator() {};
	Square(Base* node) : UnaryOperator(node) { };
	double evaluate();

};



class Operator : public Base {
		protected:
			Base* left, *right;
		public:
			Operator() : Base(){ };
			Operator(Base* l, Base* r) : left(l), right(r){ };
			
			Base* get_left() { return left; };
			Base* get_right() { return right ;
};
			virtual double evaluate() = 0;

};

class Op: public Base {
			private:
				double value;
			public:
				Op() : Base(), value(0){};
				Op(double val) : Base(),
			value(val) {};
			double evaluate(); 
};

class Add: public Operator {
	public:
		Add() : Operator() {};
		Add(Base* left, Base* right) :
	Operator(left, right){};
		double evaluate();
};

class Subtract: public Operator {
	public:
		Subtract() : Operator() {};
		Subtract(Base* left, Base* right) :
	Operator(left, right){};
		double evaluate();
};

class Divide: public Operator {
	public:
		Divide() : Operator() {};
		Divide(Base* left, Base* right) :
	Operator(left, right){};
		double evaluate();
};

class Multiply: public Operator {
	public:
		Multiply() : Operator() {};
		Multiply(Base* left, Base* right) :
	Operator(left, right){};
		double evaluate();
};	
#endif // __COMPONENT_H__
