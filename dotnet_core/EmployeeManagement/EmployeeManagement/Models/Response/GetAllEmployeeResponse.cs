namespace EmployeeManagement.Models.Response
{
    public class GetAllEmployeeResponse
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

        public string? DepartmentName { get; set; }

        public string? PositionName { get; set; }
    }
}
