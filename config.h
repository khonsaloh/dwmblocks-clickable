//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"$BARBLOCKS/menu-dwm",	0,	3},
	{"",	"$BARBLOCKS/vol2",	0,	10},
	{"",	"$BARBLOCKS/forecast2",	18000,	5},
	{"",	"$BARBLOCKS/temp",	5,	6},
	{"",	"$BARBLOCKS/correo-rss",	0,	7},
	{"",	"$BARBLOCKS/paquetes",	0,	4},
	{"",	"$BARBLOCKS/memory",	10,	14},
	{"",	"$BARBLOCKS/ip",	0,	2},
	{"",	"$BARBLOCKS/clock",	120,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
