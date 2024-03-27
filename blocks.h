//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		      /*Interval*/	/*Signal*/
	{"",      "weather.py",	             900,	         13},
	{"󰘚 ",    "memory.sh",	              30,	         12},
	{"",      "battery.sh",	              30,	         11},
	{"",      "net_traffic.sh",	           1,	         10},
	{"",      "internet.sh",               5,	          9},
  {"󰌌 ",    "keyboard_layout.sh",        0,           8},
	{"",      "volume.sh",	               0,	          7},
	{"󰃭 ",    "calendar.sh",					     5,	          6},
  {" ",    "time.sh",                   1,           5},
  {"",     "emoji.sh",                  0,           4},
  {"󰸉",     "wallpaper.sh",              0,           3},
  {"󰍹",     "monitors.sh",               0,           2},
  {"󰐥",     "boot_options.sh",           0,           1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = " | ";
//static unsigned int delimLen = 5;
static char *delim = " | ";
