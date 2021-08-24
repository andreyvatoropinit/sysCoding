#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>    /* for tasklets api */

/* Tasklet handler, that just print the data */

static void tasklet_function(struct tasklet_struct* input)
{
    pr_info("tasklet_function\n");
    return;
}

DECLARE_TASKLET( my_tasklet, tasklet_function);

static int __init my_init( void )
{
    /* Schedule the handler */
    tasklet_schedule( &my_tasklet );
    pr_info("tasklet example\n");
    return 0;
}

void my_exit( void )
{
    /* Stop the tasklet before we exit */
    tasklet_kill( &my_tasklet );
    pr_info("tasklet example cleanup\n");
    return;
}

module_init(my_init);
module_exit(my_exit);
MODULE_AUTHOR("John Madieu <john.madieu@gmail.com>");
MODULE_LICENSE("GPL");
