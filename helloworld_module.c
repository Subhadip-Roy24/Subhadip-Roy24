#include <linux/module.h>
#include <linux/kernel.h>

int entry_function(void){
        printk("Hello world from init module\n");
	return 0;
}

void exit_function(void){
       printk("Good Bye from exit module\n");
}

module_init(entry_function);
module_exit(exit_function);

MODULE_AUTHOR("Subhadip Roy");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A simple hello world module");
