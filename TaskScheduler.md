# Introduction #

You can use these instructions to keep your PC awake for specified amounts of time.
They have been tested with Windows 7 and should work with Windows Vista and Windows 8, too.


# Preparation #

Download StayAwake and place the .exe-File somewhere (like C:\Program Files\StayAwake\StayAwake.exe).


# Setting up the Task #
| ![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/UAC.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/UAC.png) | You will need administrative rights to follow these steps. |
|:--------------------------------------------------------------------------------------------------------------------------------------------------|:-----------------------------------------------------------|


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/StartTaskScheduler.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/StartTaskScheduler.png)

Start the Task Scheduler from the start menu.


| ![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/UAC.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/UAC.png) | If you see a UAC prompt, accept it. |
|:--------------------------------------------------------------------------------------------------------------------------------------------------|:------------------------------------|


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/NewFolder.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/NewFolder.png)

If you want to create a new folder for the StayAwake-Task(s), you can do so.


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/NewTask.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/NewTask.png)

Create a new task. Do _not_ click "Create Basic Task". It's a trap.


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/SecurityDefault.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/SecurityDefault.png)

In the group "Security Options", click "Change User or Group".


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/SecuritySystem.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/SecuritySystem.png)

Enter "System", and click "OK".


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/CaptTriggers.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/CaptTriggers.png)

On the tab "triggers", click "New".


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Trigger.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Trigger.png)

Configure the times. In this example, my system would be ready to use at 07:00 every day from Monday to Friday.


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/CaptActions.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/CaptActions.png)

Select the tab "actions" and click "New".

![https://stayawake.googlecode.com/svn/wiki/images/Action.png](https://stayawake.googlecode.com/svn/wiki/images/Action.png)

Enter or browse for the path to your StayAwake.exe, and enter the [command-line arguments](CommandLineArguments.md). In this example, my system would stay on for 8.5 hours (through 15:30).


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Conditions.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Conditions.png)

Now, on the tab "Conditions", check "Wake the computer to run this task". You may also want to configure other options here.


![https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Settings.png](https://stayawake.googlecode.com/svn/wiki/images/TaskScheduler/Settings.png)

Also, check the tab "Settings". If you entered a stay-awake-time of more than 3 days, you need to uncheck "Stop the task if it runs longer than...".