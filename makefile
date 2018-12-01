.PHONY:all clean

all:	
	$(shell make clean)	
	#这几个路径中，main函数都目录必须放在最下面执行！	
	#make -C lcd
	#make -C usb
	#make -C media 
	make -C base

clean:
	#rm -f  fuwu
	rm -fr dep/*.d #link_obj/*.o
	#rm -rf link_obj dep 
