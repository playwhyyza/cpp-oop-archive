class TextBox{
	public:
		 TextBox();
		 ~TextBox();
		 void operator = (TextBox &source);
		 TextBox(TextBox &source);
		 void print(ostream *os);
};
ostream &operator << (ostream &os, TextBox &t);