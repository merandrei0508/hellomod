#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
	pr_debug("Hello, world\n");

	/*
	 * A non 0 return means init_module failed; module can't be loaded.
	 */
	return 0;
}

static void hello_exit(void)
{
	pr_debug("Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
