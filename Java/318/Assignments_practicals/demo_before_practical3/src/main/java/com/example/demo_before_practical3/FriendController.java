package com.example.demo_before_practical3;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class FriendController {

    @Autowired
    private FriendRepository repository;

    @GetMapping("/listfriend")
      public Iterable<Friend>  listFriend(){
        return repository.findAll();
    }

    @GetMapping("/addFriend")
            public String addFriend(@RequestParam String name , String surname , Integer age){
                Friend newFriend = new Friend();
                newFriend.setName(name);
                newFriend.setAge(age);
                newFriend.setSurname(surname);
                repository.save(newFriend);
                return "ksekathara ekama neo filo ._.";
    }





}
