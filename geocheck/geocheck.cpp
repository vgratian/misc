


bool isOnLine(float x1, float y1, float x2, float y2, float x3, float y3)
{

  float slope;
  slope = (y2-y1)/(x2-x1);

  float intercept;
  intercept = y1 - (slope * x1);

  if(y3  == (slope * x3 + intercept))
   return true;
  else
   return false;

}

