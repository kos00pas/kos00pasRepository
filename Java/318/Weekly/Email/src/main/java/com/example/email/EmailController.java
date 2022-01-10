package com.example.email;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.RestController;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.view.RedirectView;

import javax.mail.MessagingException;

@RestController
public class EmailController {
    //@Autowired
    // private EmailRepository repository;

    @GetMapping("/sendEmail")
    public RedirectView getEmailAddress(@RequestParam String sendAddress) throws MessagingException {
        SendEmail newSendEmail = new SendEmail();
        //  repository.save(newSendEmail);
        newSendEmail.createandSendMail(sendAddress);
        return new RedirectView("");   }
}
