MODULE test;

IMPORT In, Out, geocheck;

VAR
  x1, x2, x3, y1, y2, y3: REAL;
  b: BOOLEAN;
BEGIN
  
  Out.String("enter x1: ");
  In.Real(x1); Out.Ln;
  Out.String("enter x2: ");
  In.Real(x2); Out.Ln;
  Out.String("enter x3: ");
  In.Real(x3); Out.Ln;

  Out.String("enter y1: ");
  In.Real(y1); Out.Ln;
  Out.String("enter y2: ");
  In.Real(y2); Out.Ln;
  Out.String("enter y3: ");
  In.Real(y3); Out.Ln;

  b := geocheck.isOnLine(x1, y1, x2, y2, x3, y3);
  
  IF b THEN
    Out.String("true"); Out.Ln
  ELSE
    Out.String("false"); Out.Ln
  END
END test.
