using System;
using System.Collections.Generic;

namespace EmployeeManagement.Models.Data;

public partial class Employee
{
    public int EmployeeId { get; set; }

    public string FullName { get; set; } = null!;

    public string Email { get; set; } = null!;

    public string? PhoneNumber { get; set; }

    public int? DepartmentId { get; set; }

    public int? PositionId { get; set; }

    public DateOnly? DateOfBirth { get; set; }

    public DateOnly? HireDate { get; set; }

    public decimal? Salary { get; set; }

    public virtual Department? Department { get; set; }

    public virtual Position? Position { get; set; }
}
