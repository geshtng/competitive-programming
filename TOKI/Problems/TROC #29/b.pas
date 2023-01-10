var n, x, y, i, odd, even: Int64;

begin

  odd := 0;
  even := 0;

  readLn(n);  

  for i := 1 to n do
  begin
    readLn(x, y);

    if (x+y) mod 2 = 1 then
        odd := odd + 1
    else
        even := even + 1;
  end;

  if (odd >= 1) and (even >= 1) then
    writeLn('YES')
  else 
    writeLn('NO');

end.
