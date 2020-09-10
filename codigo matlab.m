clc;clear;
#s1=serial("COM10");
s1 = serial("\\\\.\\COM10");
srl_flush(s1);

set(s1, "baudrate", 115200) # Change baudrate
set(s1, "bytesize", 8)    # Change byte size (config becomes 5-N-1)
set(s1, "parity", "N")    # Changes parity checking (config becomes 5-E-1),
set(s1, "stopbits", 2)    # Changes stop bits (config becomes 5-E-2), possible

%b1=imread('LenaFinal.jpg');
b2=imread('chihuahua.jpg');
b1=rgb2gray(b2);
#b1=[1,2,3;4,5,6;7,8,9];
%b2=double(b1);
%b3=b2./16;
%b4=uint8(b3);
b2=bitand(254,b1);
b4=bitshift(b2,-1);

[n,m]=size(b1);
y=zeros(n,m);
#kernel=[-1,0,1;-2,0,2;-1,0,1];
for i=2:n-1
    for j=2:m-1 
#     y(i,j)= b2(i-1,j-1)*kernel(1,1)+b2(i,j-1)*kernel(2,1) + b2(i+1,j-1)*kernel(3,1)+...
#             b2(i-1,j)*kernel(1,2)+b2(i,j)*kernel(2,2)+ b2(i+1,j)*kernel(3,2)+...
#             b2(i-1,j+1)*kernel(1,3)+b2(i,j+1)*kernel(2,3)+ b2(i+1,j+1)*kernel(3,3);
      #k=i;
      #p=j;
      for k=i-1:i+1
        for p=j-1:j+1
        srl_write(s1,uint8(b4(k,p)));   
        end
      end
    
    y(i,j)=srl_read(s1,1);

  end
end

y1=y./max(max(y));
y2=uint8(y1*255);
y3=y2-((mean(mean(y2)))/2);
imshow(y3);
%imshow(y2);
fclose(s1);