const string& string::operator + (const string& a ,const string& b)
{
  len = a.len + b.len;
  rep = new char[len+1];
  strcpy(rep,a);
  strcat(rep,b);
  return *this;
}
const string& string::operator += (const string& a)
{
  len += a.len;
  char* temp = rep;
  rep = new char[len+1];
  strcpy(rep,temp);
  strcat(rep,a);
  delete temp;
  return *this;
}
