#클래스 모듈(인스턴스는 금요일날)

class SRHighSchool:
    def __init__(self, name, location, n_student, n_teacher):
        self.name = name
        self.location = location
        self.n_student = n_student
        self.n_teacher = n_teacher
    
    def get_name(self):
        return self.name
    
    def get_location(self):
        return self.location
    
    def get_n_student(self):
        return self.n_student
    
    def get_n_teacher(self):
        return self.n_teacher
    
    def set_name(self, new_name):
        self.name = new_name
    
    def set_location(self, new_location):
        self.location = new_location
    
    def set_n_student(self, new_n_student):
        self.n_student = new_n_student
    
    def set_n_teacher(self, new_n_teacher):
        self.n_teacher = new_n_teacher
    
    def __str__(self):
        return f"{self.name}, located in {self.location}, has {self.n_student} student and {self.n_teacher} teacher."