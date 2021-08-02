#define SOKOL_IMPL
#include "libs/imgui/imgui.h"
#define SOKOL_IMGUI_IMPL
#include "libs/Sokol/sokol_app.h"
#include "libs/Sokol/sokol_gfx.h"
#include "libs/Sokol/sokol_glue.h"
#include "libs/Sokol/util/sokol_imgui.h"

sapp_desc sokol_main(int argc, char* argv[])
{
	return (sapp_desc)
	{
		.width = 1024,
		.height = 768,
		.window_title = "GIAGE - Welcome",
	};
}


//  Hello webhook :o
