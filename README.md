# downloadui
A windows, tool with a GUI for converting download speeds and estimating download times written in C++/CLI using winforms.
<br />
<br />
This is just for fun, yeah this could be made without the GUI which would make this so much easier for me, but thats boring.
<br />
I coded this in 24 hours, using my small amount of prior C++ knowledge and experience in C# and winforms to create this tool.
<br />
I created this to practice both my math skills and C++ skills as I have learnt most of my C++ knowledge within the last week and wanted to apply what I have learnt.
<br />
The very basic user interface. There are a few issues in my work, mainly being an exception causing the application to crash when inputing anything that isnt a valid number into any of the text box input boxes. I may come back and fix these issues, but I wanted to smash this out to continue on with focusing on my Uni work.
<br />
<br />
![alt text](https://cdn.discordapp.com/attachments/1135564406143582210/1137050216642650233/UI.png)
<br />
<br />
Input your value, e.g. 40 megabits per second, input 40 into the textbox, select megabits in the 'unit' drop down/combo box, select your time, being per second, in the 'time' drop down. 
<br />
<br />
Select what speed format you want to convert to, e.g. GigaBytes per hour, etc.

<br />
<br />
Update / fix log:
<br />
9/8/23: Changed a lowercase b into an uppercase B so you can succesfully convert download speeds into kilobytes again. (Line 803 MyForm.h)
<br />
