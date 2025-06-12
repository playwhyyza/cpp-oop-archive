//Copy constructor & member initialization list
TextBox::TextBox(TextBox &source):A(source),textColor(source.textColor),
	frameThickness(source.frameThickness){
	if(source.text != 0){
		text = new char[strlen(source.text) + 1];
		strcpy(text, source.text);
	}else{
		text = 0;
	}
}
int main(){
	
}