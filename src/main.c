#define SOKOL_IMPL
#include "libs/Sokol/sokol_app.h"
#include "libs/Sokol/sokol_gfx.h"
#include "libs/Sokol/sokol_glue.h"



sapp_desc sokol_main(int argc, char* argv[])
{
	return (sapp_desc)
	{
		.width = 1024,
		.height = 768,
		.window_title = "GIAGE - Welcome",
	};
}

