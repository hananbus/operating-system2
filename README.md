Enhancing Xv6’s to add processor affinity functionality.

We implement a processor affinity system. Instead of the single process list
Xv6 uses, our new system will use a ready process list for every CPU, and 3 more process lists, UNUSED
entries, SLEEPING and ZOMBIE.
