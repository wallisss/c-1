<?php

use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;
//require_once "vendor/autoload.php";

$handle=fopen("lector.csv","r");
    if ($handle==false)
    {
        print("Could`t open file\n");
        exit(1);
    }

    $addresses=[];

    while($row=fgetcsv($handle))
    {
        $number=$row[2];
        $carrier=$row[3];

        if ($carrier=="lmt")//xxxxxxx@sms.lmt.lv
        {
            $address="{$number}@sms.lmt.lv";
            $addresses[]=$address;
        }
        else if ($carrier=="Tele2")//3712xxxxxxx@sms.tele2.lv
        {
            $address="371{$number}@sms.lmt.lv";
            $addresses[]=$address;
        }
    }

    // close file
    fclose($handle);

    //instatiate mailer
    $mail = new PHPMailer(true);

    // configure mailer
    // http://phpmailer.worxware.com/index.php?pg=methods
    // http://phpmailer.worxware.com/index.php?pg=methods
    //
    $mail ->IsSMTP();
    $mail ->Host="smtp.gmail.com";
    $mail ->Password="PASSWORD";
    $mail ->Port=587;
    $mail ->SMTPAuth=true;
    $mail ->SMTPDebug=1;
    $mail ->SMTPSecure="tls";
    $mail ->Username="tetakonline2@gmail.com";

    //set From
    $mail ->SetFrom("bot@cs50.net");

    //set body
    $mail ->Body="Miss you! love , CS50 Bot";

    //iterate over email adresses
    for ($i=0, $n=count($addresses); $i<$n; $i++)
    {
        //add email address to To:field
        $mail->addAddress($addresses[$i]);

        //send mail
        if ($mail->$send())
        {
           print("Sent text #{$i}.\n");
        }
        else
        {
             print($mail->$ErrorInfo);
        }
        // clear To:field
        $mail->ClearAddresses();


    }








?>