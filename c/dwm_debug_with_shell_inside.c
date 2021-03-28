char out[32];
sprintf(out, "notify-send %s", "togglewin");
system(out);

char out[32];
sprintf(out, "echo %s >> /tmp/file", "togglewin");
system(out);
