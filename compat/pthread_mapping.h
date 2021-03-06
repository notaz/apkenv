{"pthread_attr_init", my_pthread_attr_init},
{"pthread_attr_setdetachstate", my_pthread_attr_setdetachstate},
{"pthread_attr_setstacksize", my_pthread_attr_setstacksize},
{"pthread_attr_destroy", my_pthread_attr_destroy},
{"pthread_attr_getdetachstate", my_pthread_attr_getdetachstate},
{"pthread_attr_getstack",my_pthread_attr_getstack},
{"pthread_attr_setstack",my_pthread_attr_setstack},
{"pthread_attr_setschedpolicy",my_pthread_attr_setschedpolicy},
{"pthread_attr_setschedparam",my_pthread_attr_setschedparam},
{"pthread_getattr_np",my_pthread_getattr_np},

{"pthread_cond_init", my_pthread_cond_init},
{"pthread_cond_broadcast", my_pthread_cond_broadcast},
{"pthread_cond_signal", my_pthread_cond_signal},
{"pthread_cond_timedwait", my_pthread_cond_timedwait},
{"pthread_cond_wait", my_pthread_cond_wait},
{"pthread_cond_destroy", my_pthread_cond_destroy},

{"pthread_create", pthread_create},
{"pthread_self", pthread_self},
{"pthread_equal", pthread_equal},
{"pthread_getschedparam", pthread_getschedparam},
{"pthread_setschedparam", pthread_setschedparam},
{"pthread_join", pthread_join},
{"pthread_detach", pthread_detach},
{"pthread_exit", pthread_exit},
{"pthread_kill",pthread_kill},

{"pthread_key_create", pthread_key_create},
{"pthread_getspecific", pthread_getspecific},
{"pthread_setspecific", pthread_setspecific},
{"pthread_key_delete", pthread_key_delete},

{"pthread_mutexattr_init", pthread_mutexattr_init},
{"pthread_mutexattr_settype", pthread_mutexattr_settype},
{"pthread_mutexattr_destroy", pthread_mutexattr_destroy},

{"pthread_mutex_init", my_pthread_mutex_init},
{"pthread_mutex_lock", my_pthread_mutex_lock},
{"pthread_mutex_trylock", my_pthread_mutex_trylock},
{"pthread_mutex_unlock", my_pthread_mutex_unlock},
{"pthread_mutex_destroy", my_pthread_mutex_destroy},

{"pthread_once", pthread_once},

{"pthread_rwlock_init", pthread_rwlock_init},
{"pthread_rwlock_rdlock", pthread_rwlock_rdlock},
{"pthread_rwlock_unlock", pthread_rwlock_unlock},
{"pthread_rwlock_wrlock", pthread_rwlock_wrlock},
{"pthread_rwlock_destroy", pthread_rwlock_destroy},


{"pthread_sigmask",pthread_sigmask},

{"__pthread_cleanup_pop",my_pthread_cleanup_pop},
{"__pthread_cleanup_push",my_pthread_cleanup_push},
