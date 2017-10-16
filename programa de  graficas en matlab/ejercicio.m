clc
clear
x= 1:4;
x2 = 2015:2020;
subplot(3, 1, 1)  
bar(x,Graficauno(),'b'); %se usa el comando bar para proyectar una barra
title('Crecimiento en la venta de robots industriales para el 2020')
xlabel('Am�rica, �frica, Asia/Australia, Europa')
ylabel('ventas')

subplot(3, 1, 2) 
bar(x2,Graficados(),'k');
title('Crecimiento en la venta de robots industriales en M�xico desde el 2015 al 2020')
xlabel('A�o')
ylabel('ventas')

Valores = [summa(1,5) ; summa(6,12) ; summa(13,19) ; summa(20,20)]';
subplot(3, 1, 3) 
bar(Valores);
title('Crecimiento para cada regi�n del mundo')
xlabel('a�os desde el 2015 hasta 2020')
ylabel('ventas')
legend('Am�rica','Asia/Australia','Europa','�frica')


