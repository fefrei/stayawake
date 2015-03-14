# Introduction #

AwayMode is a special mode in Windows in which...
  * the screen is turned off
  * any audio is muted
  * the system continues to run

Windows will enter AwayMode if (and only if)...
  * a program has requested AwayMode
  * the user tries to enter an energy-saving mode manually

There is no way to enter this mode manually without a program requesting it. You can use the [/awaymode](CommandLineArguments.md) switch in StayAwake to request AwayMode.