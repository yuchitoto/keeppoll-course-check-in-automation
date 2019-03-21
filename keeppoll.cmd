@echo off
SET course=%1
SET ses=%2
SET link="https://poll.keep.edu.hk/a/%course%/%ses%"
START chrome %link%
TIMEOUT /T 6
START chrome %link%
