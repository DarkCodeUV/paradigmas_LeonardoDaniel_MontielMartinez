clear, clc
xA = [0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0];
x1 = reshape(xA,1,169)
x1
%x1 = reshape(xA,13,13) #Funciona bien

xB = [0 1 1 1 1 1 1 1 1 1 1 1 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 0 0 0 0 0 0 0 1 1 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 1 1 1 1 1 1 1 1 1 1 1 0];
x2 = reshape(xB,1,169)
%x2 = reshape(xB,13,13) #Funciona bien
x2

x1mul = x1(:) * x1(:)';
x1mul

x2mul = x2(:) * x2(:)';
x2mul

w1 = x1mul + x2mul;
w1

w = w1 - diag(diag(w1));
w

xC =  [0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 1 1 1 1 1 1 1 1 1 1 1 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 1 1 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0];
x = reshape(xC,1,169);

%x = reshape(xC,13,13) #Funciona bien

u0 = x;
c=1;

ulast = x;
while(1)
u0 = u0 * w;
    % aplicar funcion de activacion thresold
    for i=1:1: 169
      if u0(i) > 0 
        u0(i) = 1;
      else
        u0(i) = -1
     endif 
   endfor
c
u0
ulast 
 if (u0 == ulast)
   fprintf( 'encontrado\n' )
   u0 
   ulast
   encontrado = reshape(ulast,13,13) #Funciona bien
   encontrado
   c  
   break;
 endif 
 c = c +1;
 ulast = u0; 
end




