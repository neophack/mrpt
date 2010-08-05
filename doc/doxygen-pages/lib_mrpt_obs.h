/** \page mrpt-obs Library overview: mrpt-obs
 *

<small> <a href="index.html#libs">Back to list of libraries</a> </small>
<br>

<h2>mrpt-obs</h2>
<hr>

In this library there are <b>four</b> key elements or groups of elements:

<ul>

<li><b>Sensor observations:</b> All sensor observations share a common virtual base
class (mrpt::slam::CObservation). There are classes to store laser scanners, 3D range images,
monocular and stereo images, GPS data, odometry, etc. A concept very related to observations
is a mrpt::slam::CSensoryFrame, a set of observations which were collected approximately at the same instant. </li>

<li><b>Rawlogs (datasets):</b> A robotics dataset can be loaded, edited and explored by means 
of the class mrpt::slam::CRawlog. See also: http://www.mrpt.org/Rawlog_Format </li>

<li><b>Actions:</b> For convenience in many Bayesian filtering algorithms, robot actions 
(like 2D displacement characterized by an odometry increment) can be represented by means
of "actions". See mrpt::slam::CAction.</li>

<li><b>"Simple maps":</b> In MRPT, a "simple map" is a set of pairs: "position", "sensory frames" (read above).
The advantage of maintaining such a "simple map" instead a metric map is that the metric maps 
can be rebuilt when needed with different parameters from the raw observations, which are never lost. </li>

<li><b>CARMEN logs tools:</b> Utilities to read from CARMEN log files and load the observations there
as MRPT observations. See mrpt::slam::carmen_log_parse_line and the applications: carmen2rawlog, carmen2simplemap. </li>

</ul>




*/

