MODULE geocheck;

PROCEDURE isOnLine*(x1, y1, x2, y2, x3, y3: REAL): BOOLEAN;
VAR
  slope, intercept: REAL;
BEGIN
  slope := (y2 - y1) / (x2 - x1);
  intercept := y1 - (slope * x1);
  
  RETURN (y3 = (slope * x3 + intercept))
END isOnLine;

END geocheck.
