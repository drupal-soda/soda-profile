; Soda make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][subdir] = "contrib"

projects[admin_theme][subdir] = "contrib"

projects[admin_views][subdir] = "contrib"

projects[fasttoggle][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[module_filter][version] = "2.0"
projects[module_filter][subdir] = "contrib"

projects[user_registrationpassword][version] = "1.4"
projects[user_registrationpassword][subdir] = "contrib"

projects[ctools][subdir] = "contrib"

projects[remove_duplicates][version] = "1.4"
projects[remove_duplicates][subdir] = "contrib"

projects[date][version] = "2.9"
projects[date][subdir] = "contrib"

projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.2"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "2.7"
projects[features][subdir] = "contrib"

projects[features_extra][version] = "1.x-dev"
projects[features_extra][subdir] = "contrib"

projects[feeds][version] = "2.x-dev"
projects[feeds][subdir] = "contrib"

projects[feeds_tamper][version] = "1.1"
projects[feeds_tamper][subdir] = "contrib"

projects[bundle_copy][version] = "2.x-dev"
projects[bundle_copy][subdir] = "contrib"

projects[field_validation][subdir] = "contrib"

projects[filefield_paths][subdir] = "contrib"

projects[geofield][version] = "2.3"
projects[geofield][subdir] = "contrib"

projects[geolocation][version] = "1.6"
projects[geolocation][subdir] = "contrib"

projects[mirrors][version] = "1.x-dev"
projects[mirrors][subdir] = "contrib"

projects[oauth][version] = "3.2"
projects[oauth][subdir] = "contrib"

projects[aes][subdir] = "contrib"

projects[auto_entitylabel][version] = "1.x-dev"
projects[auto_entitylabel][subdir] = "contrib"

projects[backup_migrate][subdir] = "contrib"

projects[blockify][version] = "1.2"
projects[blockify][subdir] = "contrib"

projects[boolean_formatter][subdir] = "contrib"

projects[content_type_extras][subdir] = "contrib"

projects[custom_pub][subdir] = "contrib"

projects[diff][subdir] = "contrib"

projects[email_registration][subdir] = "contrib"

projects[entity][version] = "1.6"
projects[entity][subdir] = "contrib"

projects[geocoder][version] = "1.x-dev"
projects[geocoder][subdir] = "contrib"

projects[geophp][version] = "1.x-dev"
projects[geophp][subdir] = "contrib"

projects[image_url_formatter][subdir] = "contrib"

projects[job_scheduler][subdir] = "contrib"

projects[legal][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[node_clone][subdir] = "contrib"

projects[restws][version] = "2.4"
projects[restws][subdir] = "contrib"

projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[rdfx][version] = "2.x-dev"
projects[rdfx][subdir] = "contrib"

projects[sparql][version] = "2.x-dev"
projects[sparql][subdir] = "contrib"

projects[dbee][subdir] = "contrib"

projects[services][version] = "3.x-dev"
projects[services][subdir] = "contrib"

projects[services_entity][version] = "2.x-dev"
projects[services_entity][subdir] = "contrib"

projects[services_tools][version] = "3.x-dev"
projects[services_tools][subdir] = "contrib"

projects[contentapi][version] = "1.x-dev"
projects[contentapi][subdir] = "contrib"

projects[anonymous_publishing][subdir] = "contrib"

projects[honeypot][subdir] = "contrib"

projects[views][subdir] = "contrib"

projects[views_bulk_operations][subdir] = "contrib"

projects[views_data_export][subdir] = "contrib"

; +++++ Themes +++++

; adminimal_theme
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][subdir] = "contrib"

; +++++ Libraries +++++

; geoPHP
libraries[geoPHP][directory_name] = "geoPHP"
libraries[geoPHP][type] = "library"
libraries[geoPHP][destination] = "libraries"
libraries[geoPHP][download][type] = "get"
libraries[geoPHP][download][url] = "https://github.com/phayes/geoPHP/tarball/master"

; spyc
libraries[spyc][directory_name] = "spyc"
libraries[spyc][type] = "library"
libraries[spyc][destination] = "libraries"
libraries[spyc][download][type] = "get"
libraries[spyc][download][url] = "https://github.com/mustangostang/spyc/tarball/master"

; ARC2
libraries[ARC2][directory_name] = "ARC2/arc"
libraries[ARC2][type] = "library"
libraries[ARC2][destination] = "libraries"
libraries[ARC2][download][type] = "get"
libraries[ARC2][download][url] = "https://github.com/semsol/arc2/tarball/master"
