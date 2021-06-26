#include <iostream>
#include <vector>
using namespace std;
struct Super
{
vector<string> save;
void print(string str)
{
cout << str << endl;
save.push_back(str);
}
~Super(){
for(auto s:save) {
cout << "s.print(\"";
for(auto ch:s) {
if (ch == '"')
cout << "\\\"";
else if (ch == '\\')
cout << ch << ch;
else
cout << ch;
}
cout << "\");" << endl;
}
cout << '}';
}};
int main(){
Super s;
s.print("#include <iostream>");
s.print("#include <vector>");
s.print("using namespace std;");
s.print("struct Super");
s.print("{");
s.print("vector<string> save;");
s.print("void print(string str)");
s.print("{");
s.print("cout << str << endl;");
s.print("save.push_back(str);");
s.print("}");
s.print("~Super(){");
s.print("for(auto s:save) {");
s.print("cout << \"s.print(\\\"\";");
s.print("for(auto ch:s) {");
s.print("if (ch == '\"')");
s.print("cout << \"\\\\\\\"\";");
s.print("else if (ch == '\\\\')");
s.print("cout << ch << ch;");
s.print("else");
s.print("cout << ch;");
s.print("}");
s.print("cout << \"\\\");\" << endl;");
s.print("}");
s.print("cout << '}';");
s.print("}};");
s.print("int main(){");
s.print("Super s;");
}