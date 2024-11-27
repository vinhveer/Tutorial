﻿using System;
using System.Collections.Generic;

namespace StudentManagement.Models
{
    public partial class Class
    {
        public Class()
        {
            Students = new HashSet<Student>();
        }

        public int ClassId { get; set; }
        public string ClassName { get; set; } = null!;
        public int AcademicYear { get; set; }

        public virtual ICollection<Student> Students { get; set; }
    }
}
