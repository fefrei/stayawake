# Normal operation #

If the power plan you chose in Windows is configured to turn off the screen, enter standby or enter hibernation after a specified timeout, in normal operation, Windows will track when a user is actively using the computer. "Actively using" means...

  * moving the mouse
  * typing
  * using touchscreens

Also, applications running on the computer can tell Windows that a user has interacted with the computer in some other way.

If none of these things happen for the configured timeout, Windows will turn off the screen, enter standby or enter hibernation.


# Registering for System, Display or AwayMode #

If a program requires the system to continue operating even if no user is present, it can register itself with Windows [using a special API](http://msdn.microsoft.com/en-us/library/windows/desktop/aa373208%28v=vs.85%29.aspx). This API allows three special modes to be set:

| **mode** | **effect** |
|:---------|:-----------|
| system required | The computer may not automatically enter standby or hibernation. |
| display required | The display may not be turned off automatically. |
| away mode required | The user may not (unintentionally) enter standby. Instead, the screen will be turned off, and the audio muted. Hibernation will work as usual. |

StayAwake can be used to set any of these modes for a specified amount of time.


# Debugging Power Requests #

If you want to check which programs prevent your system from automatically entering energy-saving mode (or which programs force AwayMode), you can open a command prompt with administrative rights and run the command "powercfg /requests". You will see a list of all programs requesting any of the modes listed above.