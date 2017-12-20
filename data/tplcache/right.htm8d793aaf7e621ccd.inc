<?php
$z[0]=Array("channelartlist","\r\n       <h4 sid=\"0001,0008\"><a href=\" {dede:field.typeurl/}\" title=\" {dede:field.typename/}\"> {dede:field.typename/}</a></h4>\r\n	   <ul>\r\n	   {dede:sql sql='Select * from ry_arctype where reid=~id~ ORDER BY id'} \r\n	   <li><a href=\"[field:typedir function=\"cn_substr(@me,200,9) \" /]\" title=\"[field:typename/]\">[field:typename/]</a></li>\r\n	    {/dede:sql}\r\n	   </ul>\r\n	   ",187,611);
$z[0][4]['typeid']="2";
$z[1]=Array("global","",941,963);
$z[1][4]['name']="company";
$z[2]=Array("global","",1001,1022);
$z[2][4]['name']="rexian";
$z[3]=Array("global","",1059,1077);
$z[3][4]['name']="fax";
$z[4]=Array("global","",1110,1127);
$z[4][4]['name']="qq";
$z[5]=Array("global","",1164,1182);
$z[5][4]['name']="add";

?>