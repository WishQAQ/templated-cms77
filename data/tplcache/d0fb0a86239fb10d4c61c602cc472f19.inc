<li><a href="{dede:field.typeurl/}"
                title="{dede:field.typename/}">{dede:field.typename/}</a>
               <span style="z-index: 999; top:47px; left:1px;display: none;position: absolute;background: none repeat scroll 0 0 #023054;width: 131px;" class="xiala">
                       {dede:sql sql='Select * from ry_arctype where reid=~id~ ORDER BY id'} 
                        <a class="xialajia" title="[field:typename/]" href="[field:typedir function="cn_substr(@me,200,9) " /]">[field:typename/]</a>
						 {/dede:sql}
                    </span>
                </li>