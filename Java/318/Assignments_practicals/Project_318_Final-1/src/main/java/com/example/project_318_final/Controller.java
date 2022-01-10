package com.example.project_318_final;



import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.servlet.view.RedirectView;

import java.util.Properties;
import javax.mail.Message;
import javax.mail.MessagingException;
import javax.mail.Session;
import javax.mail.Transport;
import javax.mail.internet.AddressException;
import javax.mail.internet.InternetAddress;
import javax.mail.internet.MimeMessage;



@RestController
public class Controller {


    @Autowired
    private Pelatis_repository pelatis_repository;
    @Autowired
    private Texnikos_repository texnikos_repository;
    @Autowired
    private Match_repository match_repository;
    @Autowired
    private Hlektrologos_repository hlektrologos_repository;
    @Autowired
    private  Idravlikos_repository idravlikos_repository;
    @Autowired
    private Psiktikos_repository psiktikos_repository;






    @GetMapping("/StoixeiaPelati")
    public RedirectView addPelatis(@RequestParam   String namePelati , String emailPelati, String topothesiaPelati ,String perigrafi ,Integer epilogiTexnikou  ) throws MessagingException {
        Pelatis newPelatis = new Pelatis();

        newPelatis.setNamePelati(namePelati);
        newPelatis.setEmailPelati(emailPelati);
        newPelatis.setTopothesiaPelati(topothesiaPelati);
        newPelatis.setPerigrafi(perigrafi);
        newPelatis.setEpilogiTexnikou(epilogiTexnikou);

        pelatis_repository.save(newPelatis);

        findmatch();
         return new RedirectView("http://localhost:8080/Pelatis2.html");
    }

    @GetMapping("/listStoixeiaPelati")
    public Iterable<Pelatis>getStoixeiaPelati(){
        return pelatis_repository.findAll();
    }

    @GetMapping("/deleteStoixeiaPelati")
    public RedirectView deleteStoixeiaPelati(@RequestParam Integer id){
        pelatis_repository.deleteById(id);
        System.out.println("Delete stoixeia pelati : id="+id);
        return new RedirectView("Pelatis2.html");
    }
    //------------------------------------------------------------------------------------
    @GetMapping("/StoixeiaTexnikou")
    public RedirectView addTexnikos(@RequestParam   String nameTexnikou , String emailTexnikou, String topothesiaTexnikou ,Integer epilogiTexnikou_apotexniko  ) throws MessagingException {
        Texnikos newTexnikos = new Texnikos();

        newTexnikos.setNameTexnikou(nameTexnikou);
        newTexnikos.setEmailTexnikou(emailTexnikou);
        newTexnikos.setTopothesiaTexnikou(topothesiaTexnikou);
        newTexnikos.setEpilogiTexnikou_apotexniko(epilogiTexnikou_apotexniko);
        System.out.println("neos texnikos ");
        texnikos_repository.save( newTexnikos);

        findmatch();
        return new RedirectView("http://localhost:8080/Texnikos2.html");
    }

    @GetMapping("/listStoixeiaTexnikou")
    public Iterable<Texnikos>getStoixeiaTexnikou(){
        return texnikos_repository.findAll();
    }

    @GetMapping("/deleteStoixeiaTexnikou")
    public RedirectView deleteStoixeia(@RequestParam Integer id){
        pelatis_repository.deleteById(id);
        return new RedirectView("Texnikos2.html");
    }


//-----------------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------


public void findmatch() throws MessagingException {

    for (Pelatis p : pelatis_repository.findAll()) { //gia kathe pelati
        for (Texnikos t : texnikos_repository.findAll()) {//gia kathe texniko
            if (!p.getEpilogiTexnikou().equals(t.getEpilogiTexnikou_apotexniko()) ) {
                continue;
            }//gia kathe texniko tsiakare an auto theli o pelatis
            String[] topothesiaArray = t.getTopothesiaTexnikou().split(",");
            for (String s : topothesiaArray) {//gia kathe mia apo tis topothesies tou texnikou
                if ((p.getTopothesiaPelati().equals(s))) {

                    Match m = new Match();
                    System.out.println("match");


                    //Pelatis_Match
                    m.setidPelati(p.getId());
                    m.setNamePelatiMatch(p.getNamePelati());
                    m.setEmailPelatiMatch(p.getEmailPelati());
                    m.setTopothesiaPelatiMatch(p.getTopothesiaPelati());
                    m.setEpilogiTexnikouMatch(p.getEpilogiTexnikou());
                    //Texnikos_match
                    m.setNameTexnikouMatch(t.getNameTexnikou());
                    m.setEmailTexnikouMatch(t.getEmailTexnikou());
                    m.setTopothesiaTexnikouMatch(t.getTopothesiaTexnikou());
                    m.setEpilogiTexnikou_apoTexnikoMatch(t.getEpilogiTexnikou_apotexniko());

                    m.setPerigrafiMatch(p.getPerigrafi());


                    //#An iparxi idi to match idi sto match_repository min to ksanavalis
                    for (Match mi : match_repository.findAll()) {
                        if (mi.equals(m)) {
                            System.out.println("Iparxi ksana:" + p.getNamePelati() + t.getNameTexnikou());
                            return;
                        }
                    }
                    //an den iparxi ksana apothikeuse ton sto sinoliko repository
                    match_repository.save(m);

                    //*** Apothikeuo ton MATCH sto analogo  texniko repository
                    //----------------------------------------------------------------------------
                    if (m.getEpilogiTexnikouMatch() == 1) {//idravlikos
                        Idravlikos_match i =new Idravlikos_match();
                        //EDW NA APOTHIKEUTON ta stoixeia kratisis-> pelatis, texnikos

                        i.setidMatchRepository(m.getIdMatch());
                        i.setPerigrafiMatch(p.getPerigrafi());

                        //Pelatis_Match
                        i.setidPelati(p.getId());
                        i.setNamePelatiMatch(p.getNamePelati());
                        i.setEmailPelatiMatch(p.getEmailPelati());
                        i.setTopothesiaPelatiMatch(p.getTopothesiaPelati());
                        i.setEpilogiTexnikouMatch(p.getEpilogiTexnikou());
                        //Texnikos_match
                        i.setNameTexnikouMatch(t.getNameTexnikou());
                        i.setEmailTexnikouMatch(t.getEmailTexnikou());
                        i.setTopothesiaTexnikouMatch(t.getTopothesiaTexnikou());
                        i.setEpilogiTexnikou_apoTexnikoMatch(t.getEpilogiTexnikou_apotexniko());
                        idravlikos_repository.save(i);
                        System.out.println("KATAXWRISI 1 -> ");

                        EMAIL_OTI_IPARXI_NEA_KRATISI(i.getEmailTexnikouMatch());//steile email ston texniko
                        System.out.println(" idravlikos <- "   );
                    }//idravlikos

                    else if(m.getEpilogiTexnikouMatch() == 2) {//psiktikos
                        Psiktikos_match ps = new Psiktikos_match();
                        //EDW NA APOTHIKEUTON ta stoixeia kratisis-> pelatis, texnikos
                        ps.setidMatchRepository(m.getIdMatch());

                        ps.setPerigrafiMatch(p.getPerigrafi());
                        //Pelatis_Match
                        ps.setidPelati(p.getId());
                        ps.setNamePelatiMatch(p.getNamePelati());
                        ps.setEmailPelatiMatch(p.getEmailPelati());
                        ps.setTopothesiaPelatiMatch(p.getTopothesiaPelati());
                        ps.setEpilogiTexnikouMatch(p.getEpilogiTexnikou());
                        //Texnikos_match
                        ps.setNameTexnikouMatch(t.getNameTexnikou());
                        ps.setEmailTexnikouMatch(t.getEmailTexnikou());
                        ps.setTopothesiaTexnikouMatch(t.getTopothesiaTexnikou());
                        ps.setEpilogiTexnikou_apoTexnikoMatch(t.getEpilogiTexnikou_apotexniko());
                        System.out.println("KATAXWRISI 2 -> ");

                        psiktikos_repository.save(ps);
                        EMAIL_OTI_IPARXI_NEA_KRATISI(ps.getEmailTexnikouMatch());//steile email ston texniko
                        System.out.println("****"   );
                        System.out.println("***psiktikos <- ");
                    }//psiktikos

                    else if(m.getEpilogiTexnikouMatch() == 3) {//ilektrologos
                        Hlektrologos_match h =new Hlektrologos_match();

                        //EDW NA APOTHIKEUTON ta stoixeia kratisis-> pelatis, texnikos
                        h.setidMatchRepository(m.getIdMatch());
                        h.setPerigrafiMatch(p.getPerigrafi());
                        //Pelatis_Match
                        h.setidPelati(p.getId());
                        h.setNamePelatiMatch(p.getNamePelati());
                        h.setEmailPelatiMatch(p.getEmailPelati());
                        h.setTopothesiaPelatiMatch(p.getTopothesiaPelati());
                        h.setEpilogiTexnikouMatch(p.getEpilogiTexnikou());
                        //Texnikos_match
                        h.setNameTexnikouMatch(t.getNameTexnikou());
                        h.setEmailTexnikouMatch(t.getEmailTexnikou());
                        h.setTopothesiaTexnikouMatch(t.getTopothesiaTexnikou());
                        h.setEpilogiTexnikou_apoTexnikoMatch(t.getEpilogiTexnikou_apotexniko());
                        hlektrologos_repository.save(h);

                        System.out.println("KATAXWRISI 3-> ");

                       EMAIL_OTI_IPARXI_NEA_KRATISI(h.getEmailTexnikouMatch());//steile email ston texniko
                        System.out.println("****"   );
                        System.out.println("hlektrologos <-");
                    }//ilektrologos

                    else{ System.out.println("REPOSITORY 1: den mpike se kapoio ripository");}
                    //----------------------------------------------------------------------------


                }// an i topothesia tou pelati einai i idia me tin topothesia toy texnikou| vale se Match_Rep && SpesificRep
            }
        }
    }

}

//-----------------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------

    @GetMapping("/AllMatch")
    public Iterable<Match>getStoixeiaMatch(){                  return match_repository.findAll();
    }
    @GetMapping("/getIdravlikosMatch")
    public Iterable<Idravlikos_match>getIdravlikosMatch(){       return idravlikos_repository.findAll();
    }
    @GetMapping("/getPsiktikosMatch")
    public Iterable<Psiktikos_match>getPsiktikosMatch(){        return psiktikos_repository.findAll();
    }
    @GetMapping("/getIlektrologosMatch")
    public Iterable<Hlektrologos_match>getHlektrologosMatch(){   return hlektrologos_repository.findAll();
    }
//-----------------------------------------------------------------------------------------------------------


    @GetMapping("/emailtopelatis")
    public RedirectView mail(@RequestParam String email , Integer idMatchRepository ,Integer idMatchspecific, Integer idPelati ,Integer epilogiTexnikou  ) throws MessagingException {
        System.out.println("emaillllll"+email);

        boolean sent =  createandSendMail(email);
        if(sent) {
            System.out.println("\n => Your Java Program has just sent an email!");
        }else {
            System.out.println("\n => Something went wrong!");
        }
        pelatis_repository.deleteById(idPelati);
        match_repository.deleteById(idMatchRepository);
        System.out.println("Delete Match : id="+idMatchRepository);  if(epilogiTexnikou==1){
            idravlikos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);

        }
        else if(epilogiTexnikou==2){
            psiktikos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);


        }
        else if (epilogiTexnikou==3){
            hlektrologos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);


        }
        System.out.println("Delete from repository");

        return new RedirectView("Texnikos2.html");

    }

    @GetMapping("/delete_after_accept")
    public RedirectView delete_after_accept (@RequestParam Integer idMatchRepository ,Integer idMatchspecific, Integer idPelati ,Integer epilogiTexnikou  ){
        pelatis_repository.deleteById(idPelati);
        match_repository.deleteById(idMatchRepository);
        System.out.println("Delete Match : id="+idMatchRepository);

        if(epilogiTexnikou==1){
            idravlikos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);

        }
        else if(epilogiTexnikou==2){
            psiktikos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);


        }
        else if (epilogiTexnikou==3){
            hlektrologos_repository.deleteById(idMatchspecific);
            System.out.println("Delete SpesificMatch : id="+idMatchspecific);


        }
        System.out.println("Delete from repository");
        return new RedirectView("Texnikos2.html");
    }
//-----------------------------------------------------------------------------------------------------------
//emails

    static MimeMessage message;

    static Properties mailServerProperties;
    static Session mailSession;


    public static boolean createandSendMail(@RequestParam String email) throws MessagingException {
        System.out.println("**createandSendMail**" + email);

        String mail = "temptestingg12@gmail.com";
       // Step1 setup properties
        System.out.println("\n 1st ===> setup Mail Server Properties..");
        mailServerProperties = System.getProperties();
        mailServerProperties.put("mail.smtp.port", "587");
        mailServerProperties.put("mail.smtp.auth", "true");
        mailServerProperties.put("mail.smtp.starttls.enable", "true");
        System.out.println("Mail Server Properties have been setup successfully..");

        // Step2 get session
        System.out.println("\n\n 2nd ===> get Mail Session..");
        mailSession = Session.getDefaultInstance(mailServerProperties, null);

        // Step2 create the message
        message = new MimeMessage(mailSession);
        message.addRecipient(Message.RecipientType.TO, new InternetAddress(email));
        message.setSubject("Greetings from Technician..");
        String emailBody = "One technician saw your problem and he will come ! " + "<br><br> Kind Regards, ";
        message.setContent(emailBody, "text/html");
        System.out.println("Mail Session has been created successfully..");

        // Step3 get session and send email
        System.out.println("\n\n 3rd ===> Get Session and Send mail");
        Transport transport = mailSession.getTransport("smtp");
        // Enter your  gmail UserID and Password
        // if you have 2FA enabled then provide App Specific Password
        // make sure to Less secure apps is TURNED ONhttps://www.google.com/settings/security/lesssecureapps
        //Allow  app to send email from https://accounts.google.com/b/0/DisplayUnlockCaptchaand click on Continue.
        transport.connect("smtp.gmail.com", mail, "javatesting");
        transport.sendMessage(message, message.getAllRecipients());
        transport.close();
        return true;
    }


    public static boolean EMAIL_OTI_IPARXI_NEA_KRATISI( String email) throws AddressException, MessagingException {

        // Step1 setup properties
        System.out.println("\n 1st ===> setup Mail Server Properties..");
        mailServerProperties = System.getProperties();
        mailServerProperties.put("mail.smtp.port", "587");
        mailServerProperties.put("mail.smtp.auth", "true");
        mailServerProperties.put("mail.smtp.starttls.enable", "true");
        System.out.println("Mail Server Properties have been setup successfully..");

        // Step2 get session
        System.out.println("\n\n 2nd ===> get Mail Session..");
        mailSession = Session.getDefaultInstance(mailServerProperties, null);

        // Step2 create the message
        message = new MimeMessage(mailSession);
        message.addRecipient(Message.RecipientType.TO, new InternetAddress(email));
        message.setSubject("Greetings from Programmers..");
        String emailBody = "You have a new reservation, go check it " + "<br><br> Kind Regards, <br>Programmers";
        message.setContent(emailBody, "text/html");
        System.out.println("Mail Session has been created successfully..");

        // Step3 get session and send email
        System.out.println("\n\n 3rd ===> Get Session and Send mail");
        Transport transport = mailSession.getTransport("smtp");
        // Enter your  gmail UserID and Password
        // if you have 2FA enabled then provide App Specific Password
        // make sure to Less secure apps is TURNED ONhttps://www.google.com/settings/security/lesssecureapps
        //Allow  app to send email from https://accounts.google.com/b/0/DisplayUnlockCaptchaand click on Continue.
        transport.connect("smtp.gmail.com", "temptestingg12@gmail.com", "javatesting");
        transport.sendMessage(message, message.getAllRecipients());
        transport.close();
        return true;
    }

    public static boolean EMAIL_OTI_O_TEXNIKOS_THA_TON_EPISKEUTHI(String email) throws AddressException, MessagingException {

        // Step1 setup properties
        System.out.println("\n 1st ===> setup Mail Server Properties..");
        mailServerProperties = System.getProperties();
        mailServerProperties.put("mail.smtp.port", "587");
        mailServerProperties.put("mail.smtp.auth", "true");
        mailServerProperties.put("mail.smtp.starttls.enable", "true");
        System.out.println("Mail Server Properties have been setup successfully..");

        // Step2 get session
        System.out.println("\n\n 2nd ===> get Mail Session..");
        mailSession = Session.getDefaultInstance(mailServerProperties, null);

        // Step2 create the message
        message = new MimeMessage(mailSession);
        message.addRecipient(Message.RecipientType.TO, new InternetAddress(email));
        message.setSubject("Greetings from Programmers..");
        String emailBody = "One techinian is comming for you!!" + "<br><br> Kind Regards, <br>Programmers";
        message.setContent(emailBody, "text/html");
        System.out.println("Mail Session has been created successfully..");

        // Step3 get session and send email
        System.out.println("\n\n 3rd ===> Get Session and Send mail");
        Transport transport = mailSession.getTransport("smtp");
        // Enter your  gmail UserID and Password
        // if you have 2FA enabled then provide App Specific Password
        // make sure to Less secure apps is TURNED ONhttps://www.google.com/settings/security/lesssecureapps
        //Allow  app to send email from https://accounts.google.com/b/0/DisplayUnlockCaptchaand click on Continue.
        transport.connect("smtp.gmail.com", "temptestingg12@gmail.com", "javatesting");
        transport.sendMessage(message, message.getAllRecipients());
        transport.close();
        return true;
    }


}


