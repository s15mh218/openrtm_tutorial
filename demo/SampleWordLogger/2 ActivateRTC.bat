for /f "usebackq" %%h in (`hostname`) do set HOSTNAME=%%h

call ..\Apps\rtshell\rtact 127.0.0.1/%HOSTNAME%.host_cxt/SampleWordLogger0.rtc


