ifneq ($(KERNELRELEASE),)
obj-m:=helloworld.o
else
KERNELDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR)  M=$(PWD) modules
clean:
	make -C $(KERNELDIR) M=$(PWD) clean
endif