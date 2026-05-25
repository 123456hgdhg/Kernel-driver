#include <linux/module.h>
#include <linux/init.h>

static int __init my_driver_init(void) {
    printk("华哥哥：成功潜入 OPPO Reno10 5.4.210 内核！\n");
    return 0; // 返回 0 表示加载成功
}

static void __exit my_driver_exit(void) {
    printk("华哥哥：测试完毕，安全撤退！\n");
}

module_init(my_driver_init);
module_exit(my_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("HuaGeGe");
MODULE_DESCRIPTION("A clean kernel module for testing.");
