<?php
$dahisar_info = [
    "name" => "Dahisar",
    "district" => "Mumbai Suburban",
    "station_code" => "DIC",
    "notable_areas" => ["Dahisar West", "Dahisar East", "Ovaripada"],
    "pincode" => 400068
];

echo "<h2>Exploring " . $dahisar_info['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Admin District:</strong> " . $dahisar_info['district'] . "</li>";
echo "<li><strong>Railway Code:</strong> " . $dahisar_info['station_code'] . "</li>";
echo "<li><strong>Major Areas:</strong> " . implode(", ", $dahisar_info['notable_areas']) . "</li>";
echo "</ul>";
?>
