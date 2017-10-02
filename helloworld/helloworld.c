#include <linux/module.h>  //所有模块都必须包含的头文件
#include <linux/kernel.h> //一些宏定义，例如这里的KERN_INFO

int init_module(void)
{
    printk(KERN_INFO "[bseazeng]Hello world 1.\n");
    /*  
     * 返回非0表示模块初始化失败，无法载入
     */
    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "[bseazeng]Goodbye world 1.\n");
}
