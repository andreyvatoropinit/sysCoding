cmd_/home/andrew/Desktop/systemCoding/chp1/modules.order := {   echo /home/andrew/Desktop/systemCoding/chp1/helloworld-params.ko;   echo /home/andrew/Desktop/systemCoding/chp1/helloworld.ko; :; } | awk '!x[$$0]++' - > /home/andrew/Desktop/systemCoding/chp1/modules.order