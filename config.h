/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {

	{ cpu_perc, 	"CPU %s %% ",	NULL },
/*      { run_command,  "%s | ", 	"sensors | grep -A 0 'Tctl:' | cut -c16-22" },
	{ run_command, 	"GPU %s ",  	"nvidia-smi -q -d UTILIZATION | grep Gpu | cut -c45-48" },
	{ run_command, 	"%s°C ",   	"nvidia-smi --query-gpu=temperature.gpu --format=csv,noheader --id=0" },
	{ run_command, 	"%s | ",   	"nvidia-smi -q -d POWER | grep Draw | cut -c45-52" }, */
        { ram_used, 	"RAM %s | ", 	NULL },
/*  	{ netspeed_rx, 	" ▼ %sB/s | ", 	"enp8s0" },
        { netspeed_tx, 	" ▲ %sB/s | ",  "enp8s0" }, */
/*      { run_command,  "%s | ",        "cat /home/cirelon/.cache/torrent " }, */
        { run_command, 	"%s | ",    	"forecast" },
	{ run_command, 	"📦 %s | ", 	"checkupdates | wc -l" },
        { run_command, 	"墳 %s | ",     "pamixer --get-volume-human" },
        { datetime, 	"%s", 		"%F - %T (%a)" },

};
