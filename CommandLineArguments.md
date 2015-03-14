# Introduction #

StayAwake understands two kinds of argument: time ranges and options. These can be in any order.


## Time ranges ##

You can have an infinite amount of time ranges as command-line arguments. Any such argument consists of a number and a unit, _without_ a space between them. Valid units are:

| d | days |
|:--|:-----|
| h | hours |
| m | minutes |
| s | seconds |

Capitalized letters are OK, too.

All time ranges given will be summed up and give the total amount of time.

Example: "StayAwake 1h 30M 30s 10S" will sleep for 90 minutes and 40 seconds.


## Options ##

StayAwake can register with windows for three energy-related modes: System, Display and AwayMode.

| **Mode** | **Description** | **Default** |
|:---------|:----------------|:------------|
| System | requires the computer to stay on | enabled |
| Display | requires the display to stay on | disabled |
| AwayMode | when a user manually tries to enter energy-saving mode, the system will just disable the screen and mute audio, but stay running | disabled |

You can use these options to change which modes StayAwake will register for:
| **long form** | **short form** | **effect** |
|:--------------|:---------------|:-----------|
| /display | /d | enables registering for _Display_ |
| /awaymode | /a | enabled registering for _AwayMode_ |
| /nosystem | /s | **disables** registering for _System_ |