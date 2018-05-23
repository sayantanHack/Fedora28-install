# Fedora28-install

<b>If one prefers to use his system without problems, system maintenance is the keyword.</b>
<ol>
<li>Remove old kernels from the system</li><ul><li>
sudo dnf yum-utils</li>
  <li>sudo package-cleanup --oldkernels --count=1</li></ul>
<li>Update the system</li><ul><li>
sudo dnf upgrade</li></ul>
<li>Remove a package from the system</li><ul><li>
sudo dnf remove Paketname</li></ul>
<li>Remove packages that are no longer needed by the system</li>
  <ul><li>
sudo dnf autoremove</li></ul>
<p>It is also possible to use this <a href="https://github.com/sayantanHack/Fedora28-install/blob/master/update.c">C program </a>.
<br>
sudo dnf -y install gcc && gcc update.c -o Update && ./Update </p>
