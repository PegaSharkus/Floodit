Librairie json c++------------------
Url     : http://codes-sources.commentcamarche.net/source/52527-librairie-json-cAuteur  : ordiman85Date    : 11/08/2013
Licence :
=========

Ce document intitulé « Librairie json c++ » issu de CommentCaMarche
(codes-sources.commentcamarche.net) est mis à disposition sous les termes de
la licence Creative Commons. Vous pouvez copier, modifier des copies de cette
source, dans les conditions fixées par la licence, tant que cette note
apparaît clairement.

Description :
=============

J'ai cr&eacute;&eacute; cette petite librairie pour d&eacute;coder et encoder de
s fichiers JSON, avec un fichier en-t&ecirc;te et un fichier source seulement.

<br />
<br />JSON est un format de fichier tr&egrave;s l&eacute;ger pour stocke
r vos donn&eacute;es un peu comme XML.
<br /><a href='http://fr.wikipedia.org/w
iki/JavaScript_Object_Notation' target='_blank'>http://fr.wikipedia.org/wiki/Jav
aScript_Object_Notation</a>
<br />
<br />Fonctionnalit&eacute;s :
<br />Acces
seurs de tableaux et d'objets [].
<br />Test des types &quot;isBoolean&quot;, &
quot;isNumber&quot;...
<br />Assignation directe avec les bool, int, double, st
ring, etc.
<br />Ajout, insertion directe dans un tableau avec &quot;&lt;&lt;&q
uot; ou &quot;push_back&quot;.
<br />Extraction des valeurs vers les types nati
fs avec &quot;&gt;&gt;&quot; ou la m&eacute;thode &quot;asInt&quot;, etc.
<br /
>Gestion d'exceptions.
<br />etc.
<br /><a name='source-exemple'></a><h2> Sour
ce / Exemple : </h2>
<br /><pre class='code' data-mode='basic'>
#include &quo
t;json.h&quot;
#include &lt;iostream&gt;

int main()
{
	JSONValue object;

	object = JSON::decode( &quot; {\&quot;menu\&quot;: { \
	   \&quot;id\&quot;: \
&quot;file\&quot;, \
	   \&quot;value\&quot;: \&quot;File\&quot;, \
	   \&quot
;popup\&quot;: { \
	     \&quot;menuitem\&quot;: [ \
	       {\&quot;value\&qu
ot;: \&quot;New\&quot;, \&quot;onclick\&quot;: \&quot;CreateNewDoc()\&quot;}, \

	       {\&quot;value\&quot;: \&quot;Open\&quot;, \&quot;onclick\&quot;: \&quot
;OpenDoc()\&quot;}, \
	       {\&quot;value\&quot;: \&quot;Close\&quot;, \&quot
;onclick\&quot;: \&quot;CloseDoc()\&quot;} \
	     ] \
	   } \
	}}&quot; );


	object[ &quot;menu&quot; ][ &quot;id&quot; ] = &quot;fichier&quot;;          
               // Assignation
	object[ &quot;menu&quot; ][ &quot;popup&quot; ][
 &quot;menuitem&quot; ].erase( 1 );         // Suppression dans un tableau
	obj
ect[ &quot;menu&quot; ][ &quot;popup&quot; ][ &quot;options&quot; ] = JSONArray(
);
	object[ &quot;menu&quot; ][ &quot;popup&quot; ][ &quot;options&quot; ] &lt;
&lt; 1 &lt;&lt; JSON::null &lt;&lt; 2; // Ajout dans un tableau
	object[ &quot;
menu&quot; ][ &quot;popup&quot; ][ &quot;options&quot; ].insert( 0, &quot;json&q
uot; ); // Insertion dans un tableau
	object[ &quot;menu&quot; ][ &quot;value&q
uot; ] = 5;                              // Assignation avec un type différent


	std::cout &lt;&lt; object.encode() &lt;&lt; std::endl;
	JSON::save( object, 
&quot;data.json&quot; );
/*
	Résultat attendu :

	{&quot;menu&quot;: {&quot;
id&quot;: &quot;fichier&quot;, &quot;popup&quot;: {&quot;menuitem&quot;: [{&quot
;onclick&quot;: &quot;CreateNewDoc()&quot;, &quot;value&quot;: &quot;New&quot;},
 {&quot;onclick&quot;: &quot;CloseDoc()&quot;, &quot;value&quot;: &quot;Close&qu
ot;}], &quot;options&quot;: [&quot;json&quot;, 1, null, 2]}, &quot;value&quot;: 
5}}

<ul><li>/</li></ul>
	return 0;
}
</pre>
<br /><a name='conclusion'></
a><h2> Conclusion : </h2>
<br />Si vous avez besoin de fonctionnalit&eacute;s 
suppl&eacute;mentaires ou si vous avez modifi&eacute; la biblioth&egrave;que pou
r corriger des bugs, merci de m'en informer.
