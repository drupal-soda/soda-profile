; Soda make file for local development

core = "7.x"
api = "2"
projects[drupal][version] = "7.x"

; include the d.o. profile base
includes[] = "drupal-org.make"

; Profile
projects[soda][type] = profile
projects[soda][download][type] = git
projects[soda][download][url] = https://github.com/drupal-soda/soda-profile.git
projects[soda][download][branch] = 7.x-1.x

