function [y] = summa (a,b)
load('Datos.mat');
a1 = 0;a2 = 0;a3 = 0;a4 = 0;a5 = 0;a6 = 0;
for c=a:1:b
a1 = a1 + VentasAnuales(c,1);
end
for c=a:1:b
a2 = a2 + VentasAnuales(c,2);
end
for c=a:1:b
a3 = a3 + VentasAnuales(c,3);
end
for c=a:1:b
a4 = a4 + VentasAnuales(c,4);
end
for c=a:1:b
a5 = a5 + VentasAnuales(c,5);
end
for c=a:1:b
a6 = a6 + VentasAnuales(c,6);
end
y=[a1,a2,a3,a4,a5,a6];
endfunction
