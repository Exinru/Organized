# Organized

##Objectives:

* Storing and handling hardware
* Sorting your stuff according to tags
* Quick sorting algorithm

##Compilation:
```
>_make re
```

##Usage:
You have to execute the following command:
```
> ./organized
```

###Parameters:
* **Type:** Actuators, Devices, Processors, Sensors and Wires
* **Name:** material name
* **Id_number:** number assign to the material added (it does not repeat)
* **Tags:** Type(ASCII order), Name(ASCII order) and ID(numerically ascending)
* **-r:** sort in reverse

###Shell commands:
* add [type][name] -> to add new hardware
* del [id_number] -> to delete a hardware
* sort [-r][] -> to sort materials
* disp -> to display the material
