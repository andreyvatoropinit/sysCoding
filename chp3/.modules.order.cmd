cmd_/home/andrew/Desktop/systemCoding/chp3/modules.order := {   echo /home/andrew/Desktop/systemCoding/chp3/dedicated-workqueue.ko;   echo /home/andrew/Desktop/systemCoding/chp3/hr-timer.ko;   echo /home/andrew/Desktop/systemCoding/chp3/shared-workqueue.ko;   echo /home/andrew/Desktop/systemCoding/chp3/std-timer.ko;   echo /home/andrew/Desktop/systemCoding/chp3/tasklet.ko;   echo /home/andrew/Desktop/systemCoding/chp3/user-invoke.ko;   echo /home/andrew/Desktop/systemCoding/chp3/waitqueue.ko; :; } | awk '!x[$$0]++' - > /home/andrew/Desktop/systemCoding/chp3/modules.order
