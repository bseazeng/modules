#include <linux/init.h>  
#include <linux/module.h>  
#include <linux/moduleparam.h>  
MODULE_LICENSE ("GPL");  

//insmod parameters_test.ko who="world" times=5

static char *who = "world";  
static int times = 1;  
module_param (times, int, S_IRUSR);  
module_param (who, charp, S_IRUSR);  
  
static int parameters_test_init (void)  
{  
    int i;  
    for (i = 0; i < times; i++)
        printk (KERN_ALERT "(%d) parameters_test, %s!\n", i, who);  
    
    return 0;  
}  
  
static void parameters_test_exit (void)  
{  
    printk (KERN_ALERT "Goodbye, %s!\n", who);  
}  
  
module_init (parameters_test_init);  
module_exit (parameters_test_exit); 