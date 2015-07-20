# Small Open DAta framework
This is the installation profile for Drupal SODA distribution.

## What is SODA?
*Small Open DAta framework* is a Drupal 7.x distribution aimed to solve the fundamental problem of the [Open Data](http://opendefinition.org/od/) which is:

> "Where is the data?"

In fact there is a lot of data available but they are not opened or are hidden etc. Sometimes data need to be created from the beginning and it is where simple people can contribute.

Using SODA you will be able to create, manage, manipulate and export open data to several open data hubs such as [CKAN](http://ckan.org), [TheDataTank](http://thedatatank.com) etc.

Contribute on this project at <b>https://github.com/drupal-soda</b>.

## Installation

### "Full Drupal" version:

https://github.com/drupal-soda/soda-full

### Drush Make

Requires drush version 6.x or 7.x.

Create a full version with drush make:

``` bash
git clone --branch 7.x-1.x git@github.com:drupal-soda/soda-profile.git
cd soda-profile
drush make --prepare-install build-soda.make webroot
cd webroot
drush site-install soda --db-url="mysql://DBUSER:DBPASS@localhost/DBNAME"
```

## Getting Help with Soda

## Contributing
