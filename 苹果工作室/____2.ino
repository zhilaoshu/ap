int _ABVAR_1_IR = 0 ;

void cBot_back();
void Infrared();
void cBot_right();
void cBot_left();
void cBot_forward();

void setup()
{
  pinMode( 9, INPUT);
  pinMode( 10, INPUT);
  pinMode( 5, OUTPUT);
  pinMode( 6, OUTPUT);
  pinMode( 7 , OUTPUT);
  pinMode( 4 , OUTPUT);
  _ABVAR_1_IR = 0 ;

}

void loop()
{
  Infrared();
  if (( ( _ABVAR_1_IR ) == ( 0 ) ))
  {
    cBot_back();
  }
  else
  {
    if (( ( _ABVAR_1_IR ) == ( 1 ) ))
    {
      cBot_right();
    }
    else
    {
      if (( ( _ABVAR_1_IR ) == ( 2 ) ))
      {
        cBot_left();
      }
      else
      {
        cBot_forward();
      }
    }
  }
}

void cBot_left()
{
  digitalWrite( 7 , HIGH );
  digitalWrite( 4 , HIGH );
  analogWrite(6 , 200);
  analogWrite(5 , 200);
}

void cBot_right()
{
  digitalWrite( 7 , LOW );
  digitalWrite( 4 , LOW );
  analogWrite(6 , 200);
  analogWrite(5 , 200);
}

void Infrared()
{
  if (( ( ( digitalRead(9) ) == ( HIGH ) ) && ( ( digitalRead(10) ) == ( HIGH ) ) ))
  {
    _ABVAR_1_IR = 3 ;
  }
  else
  {
    if (( ( ( digitalRead(9) ) == ( LOW ) ) && ( ( digitalRead(10) ) == ( LOW ) ) ))
    {
      _ABVAR_1_IR = 0 ;
    }
    else
    {
      if (( ( ( digitalRead(9) ) == ( LOW ) ) && ( ( digitalRead(10) ) == ( HIGH ) ) ))
      {
        _ABVAR_1_IR = 1 ;
      }
      else
      {
        if (( ( ( digitalRead(9) ) == ( HIGH ) ) && ( ( digitalRead(10) ) == ( LOW ) ) ))
        {
          _ABVAR_1_IR = 2 ;
        }
      }
    }
  }
}

void cBot_back()
{
  digitalWrite( 7 , HIGH );
  digitalWrite( 4 , LOW );
  analogWrite(6 , 200);
  analogWrite(5 , 200);
}

void cBot_forward()
{
  digitalWrite( 7 , LOW );
  digitalWrite( 4 , HIGH );
  analogWrite(6 , 200);
  analogWrite(5 , 200);
}


