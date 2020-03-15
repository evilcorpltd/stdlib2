.global _exit

.text
_exit:
    # %rcs already has the exit code from the caller.
    call ExitProcess
