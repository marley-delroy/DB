<?php
ini_set('include_path', realpath(dirname(__FILE__) . "/../..") .
        ":.:" . ini_get('include_path'));
require_once 'DB.php';
$dbh = DB::connect("mysql://localhost/test");
if (DB::isError($dbh)) {
    die("connect.inc: ".$dbh->getMessage());
}

?>