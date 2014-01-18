********************************************************************
                     D R U P A L    M O D U L E
********************************************************************
Name: Force New Password
Drupal: 7.x
********************************************************************

DESCRIPTION:

  Consider to use this module after a user migration coming from a non default Drupal schema database.
  Useful when passwords cannot be regenerated with SHA1.
  The module offers the ability to set a role for a group of users and force these users to change 
  their password at the first login after migration.

** How the flow works **

  1 - The user perfoms a regular login into site account;
  2 - The module intercepts user login and checks if the coming user is part of a group that you 
  set to force a new password;
  3 - If it is a migrated user, the module redirects into a disclaimer page and sends the 
  "request new password" e-mail with the one-time-login feature;
  4 - The user clicks over one-time-login and is redirected into edit profile form;
  5 - User changes the password;
  6 - The module removes the user from the "migrated" group avoiding looping this process.

** IMPORTANT **

  This module will not work properly if you have redirect actions used with Trigger module.

** Configuration **

  1 - Install the module and go to Configuation section.
  2 - Click over "Search new password general settings" - /admin/config/force_new_password/general
  3 - Fill out the following information:
  - Disclaimer page
  - Confirmation page (after password change)
  - The user role to forcing new password.
  
** User import **
    You can make use of User Import module (https://drupal.org/project/user_import) to perform the user migration.
