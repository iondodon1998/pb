program chibrituri;

var n,m,i,j,a,b,x,y,s,v,ori,f,g,max1,max2,min1,min2:longint;
f1,f2:text; p:boolean;
begin
assign(f1,'chibrituri.in'); reset(f1);
assign(f2,'chibrituri.out'); rewrite(f2);
read(f1,n,m);

s:=0;
for i:=0 to 23 do begin
a:=0; b:=0; f:=0; g:=0;
x:=i mod 10; y:=i mod 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
x:=i div 10; y:=i div 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
f:=a; g:=b;
if i=24 then begin f:=8; g:=4; end;
v:=f; ori:=g;
for j:=0 to 59 do begin
a:=0; b:=0;
x:=j mod 10; y:=j mod 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
x:=j div 10; y:=j div 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
v:=v+a; ori:=ori+b;
if (v=n) and (ori=m) then begin s:=s+1; max1:=i; max2:=j; end;
v:=f; ori:=g;
end;
end;

p:=false;
for i:=0 to 23 do begin
a:=0; b:=0; f:=0; g:=0;
x:=i mod 10; y:=i mod 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
x:=i div 10; y:=i div 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
f:=a; g:=b;
v:=f; ori:=g;
for j:=0 to 59 do begin
a:=0; b:=0;
x:=j mod 10; y:=j mod 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
x:=j div 10; y:=j div 10;
if x=0 then a:=a+4; if y=0 then b:=b+2;
if x=1 then a:=a+2; if y=1 then b:=b+0;
if x=2 then a:=a+2; if y=2 then b:=b+3;
if x=3 then a:=a+2; if y=3 then b:=b+3;
if x=4 then a:=a+3; if y=4 then b:=b+1;
if x=5 then a:=a+2; if y=5 then b:=b+3;
if x=6 then a:=a+3; if y=6 then b:=b+3;
if x=7 then a:=a+2; if y=7 then b:=b+1;
if x=8 then a:=a+4; if y=8 then b:=b+3;
if x=9 then a:=a+3; if y=9 then b:=b+3;
v:=v+a; ori:=ori+b;
if (v=n) and (ori=m) then begin min1:=i; min2:=j; p:=true; break; end;
v:=f; ori:=g;
end;
if p=true then break;
end;



writeln(f2,s);
if min1<10 then write(f2,'0',min1) else write(f2,min1); write(f2,':'); if min2<10 then write(f2,'0',min2) else write(f2,min2); writeln(f2);
if max1<10 then write(f2,'0',max1) else write(f2,max1); write(f2,':'); if max2<10 then write(f2,'0',max2) else write(f2,max2); 
close(f1);
close(f2);
end.


