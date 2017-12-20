<h4>
                    <a href="{dede:field.typeurl/}"
                        target="_blank" title="{dede:field.typename/}">
                        {dede:field.typename/}</a></h4>
                <ul>
                        {dede:sql sql='Select * from ry_arctype where reid=~id~ ORDER BY id'} 
                            <li ><a href="[field:typedir function="cn_substr(@me,200,9) " /]" target="_blank" title="[field:typename/]">[field:typename/]</a></li>
                            {/dede:sql}
                        
                    <div class="clear"></div>
                </ul>