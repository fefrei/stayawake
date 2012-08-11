// StayAwake.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <string>
#include "stdafx.h"
#include "windows.h"


void setMode(bool system, bool display, bool awaymode)
{
	EXECUTION_STATE flags = ES_CONTINUOUS;

	if (system) flags |= ES_SYSTEM_REQUIRED;
	if (display) flags |= ES_DISPLAY_REQUIRED;
	if (awaymode) flags |= ES_AWAYMODE_REQUIRED;

	SetThreadExecutionState(flags);
}

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Use arguments like 8h or 30m to specify the duration.\n");
		printf("Allowed units: (s)econds, (m)inutes, (h)ours, (d)ays\n");
		printf("Capitalization is ignored.\n");
		printf("\n");
		printf("To set the mode, use /display, /awaymode and possibly /nosystem\n");
		printf("Short forms: /d, /a, /ns\n");
		printf("\n");
		printf("Example: StayAwake 1h 30m /display\n");
		return 0;
	}

	int sleep_time = 0;
	bool system = true;
	bool display = false;
	bool awaymode = false;

	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		char last_char = arg[arg.length() - 1];
		int factor = 0;

		printf("Processing argument: %s", arg.c_str());

		if (arg.compare("/display") == 0 || arg.compare("/d") == 0) {display = true; printf(" OK.\n"); continue;}
		if (arg.compare("/awaymode") == 0 || arg.compare("/a") == 0) {awaymode = true; printf(" OK.\n"); continue;}
		if (arg.compare("/nosystem") == 0 || arg.compare("/ns") == 0) {system = false; printf(" OK.\n"); continue;}

		switch(last_char)
		{
		case 'S':
		case 's':
			factor = 1000;
			break;
		case 'M':
		case 'm':
			factor = 60000;
			break;
		case 'H':
		case 'h':
			factor = 3600000;
			break;
		case 'D':
		case 'd':
			factor = 86400000;
			break;
		}

		int val = atoi(arg.c_str()) * factor;

		printf(" -> %u ms\n", val);

		sleep_time += val;
	}

	printf("Requiring System... ");
	setMode(system, display, awaymode);
	printf("Done.\nSleeping for %u ms... ", sleep_time);
	Sleep(sleep_time);
	printf("Done.\nFreeing System... ");
	setMode(false, false, false);
	printf("Done.\nGoodbye.\n");
	return 0;
}

