using EmployeeManagement.Models.Data;
using EmployeeManagement.Models.Response;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace EmployeeManagement.Controllers
{
    public class EmployeesController : Controller
    {
        private readonly EmployeeManagementContext _context;

        public EmployeesController(EmployeeManagementContext employeeManagementContext)
        {
            _context = employeeManagementContext;
        }

        public IActionResult Index()
        {
            var getAllEmployeeResponses = _context.Employees
                .Select(employee => new GetAllEmployeeResponse
                {
                    EmployeeId = employee.EmployeeId,
                    FullName = employee.FullName,
                    Email = employee.Email,
                    PhoneNumber = employee.PhoneNumber,
                    DepartmentId = employee.DepartmentId,
                    PositionId = employee.PositionId,
                    DateOfBirth = employee.DateOfBirth,
                    HireDate = employee.HireDate,
                    Salary = employee.Salary,
                    DepartmentName = employee.Department != null ? employee.Department.DepartmentName : null,
                    PositionName = employee.Position != null ? employee.Position.PositionName : null
                })
                .ToList();

            return View(getAllEmployeeResponses);
        }
        
        
    }
}
