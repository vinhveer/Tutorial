using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;

namespace StudentManagement.Models
{
    public partial class Student
    {
        public int StudentId { get; set; }
        public string FullName { get; set; } = null!;
        public DateTime DateOfBirth { get; set; }
        public bool Gender { get; set; }
        public string Email { get; set; } = null!;
        public string? PhoneNumber { get; set; }
        public int ClassId { get; set; }

        [NotMapped]
        public virtual Class Class { get; set; } = null!;
    }
}
