package com.example.demo;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

@RestController
public class DemoController {

    @Autowired
    private StudentRepository studentRepository;

    @PostMapping("/add")
    public String addStudent(@RequestParam String onoma,@RequestParam String epitheto){
        Student student = new Student();
        student.setName(onoma);
        student.setSurname(epitheto);
        studentRepository.save(student);
        return "Added new student to repo!";
    }

    @GetMapping("/list")
    public Iterable<Student> getStudents(){
        return studentRepository.findAll();
    }

    @GetMapping("/find/{id}")
    public Student findStudentById(@PathVariable Integer id) {
        return studentRepository.findStudentById(id);
    }



}
