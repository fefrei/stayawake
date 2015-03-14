# General #

### What does StayAwake do? ###
StayAwake simply keeps running for a amount of time you specify and tells Windows not to enter energy-saving-mode while it as running.

### That's not much. Why can't it wake up my PC, have time schedules, ...? ###
Because Windows can already do that. You can simply use the Task Scheduler to wake your PC. StayAwake is a small tool to use with the Task Scheduler so your PC not only wakes up, but also stays awake for some time. See [this wiki article on how to set this up](TaskScheduler.md).

### I use wake-on-LAN to wake my PC remotely, but it starts sleeping a few minutes after that. Can StayAwake help me? ###
Yes. You can start it manually to keep your PC awake after connecting, and you can even use the [Task Scheduler](TaskScheduler.md) to start it automatically when you log on.

### How can I stop StayAwake before the set time runs out? ###
You can simply kill the task StayAwake.exe. Windows will register that and allow sleep mode again.

### I started StayAwake, but I can still enter standby manually. What's wrong? ###
StayAwake is not there to prevent you from manually entering standby, it's there to prevent automatic energy saving. However, the ["/awaymode"-command-line-parameter](CommandLineArguments.md) may be what you're looking for: While StayAwake is running with this parameter, pressing the standby-button will disable your screen and mute audio, but keep your PC running.

### How can I check StayAwake is working? How can I check if other programs block automatic energy saving? ###
Start a command prmt with administrative rights, and run "powercfg /requests".

### With StayAwake, my system keeps running, but the screen still turns off. ###
That's not a question.

### _How_ can I stop my screen from turning off while StayAwake is running? ###
Use the [command-line argument "/display"](CommandLineArguments.md).

### Why does StayAwake stay running the whole time? It is wasting my resources! ###
Programs need to be running to keep Windows from entering standby. However, StayAwake is a really small program. It uses less than 1 MB of RAM and zero† CPU while it is sleeping.

†Yes, zero. There is no footprint.

### <Insert Question not listed on this page> ###
Ask your question [here](https://code.google.com/p/stayawake/issues/entry?template=help).