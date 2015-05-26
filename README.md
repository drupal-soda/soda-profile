# soda-profile
The installation profile for SODA distribution

## What is SODA?

## Installation

### "Fully Made" version:

https://github.com/drupal-soda/soda-full

### Drush Make

Requires drush version 6.x or 7.x.

Create a full version with drush make:

```
git clone --branch 7.x-1.x https://github.com/drupal-soda/soda-profile
cd soda-profile
drush make --prepare-install build-soda.make webroot
cd webroot
drush site-install soda --db-url="mysql://DBUSER:DBPASS@localhost/DBNAME"
```

## Getting Help with Soda

## Contributing
