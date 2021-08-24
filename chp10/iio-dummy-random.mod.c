#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x19fdd0c3, "module_layout" },
	{ 0x6d0347b5, "platform_driver_unregister" },
	{ 0x99720f75, "__platform_driver_register" },
	{ 0x69fee9d4, "_dev_err" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe3deb9d8, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2c3d3f6d, "devm_iio_device_alloc" },
	{ 0xc60019f4, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "C57C67E36BD667512ABDBF0");
