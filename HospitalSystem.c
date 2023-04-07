#include <stdio.h>
#include <string.h>

// Structure for patient records
struct patientRecord {
    char name[50];
    int age;
    char gender[10];
    char address[100];
    char phone[20];
    char email[50];
};

// Function to enter patient records
void enterRecord(struct patientRecord *record) {
    printf("Enter patient details:\n");
    printf("Name: ");
    fgets(record->name, sizeof(record->name), stdin);
    printf("Age: ");
    scanf("%d", &record->age);
    printf("Gender: ");
    scanf("%s", record->gender);
    printf("Address: ");
    scanf("%s", record->address);
    printf("Phone: ");
    scanf("%s", record->phone);
    printf("Email: ");
    scanf("%s", record->email);
}

// Function to make payment
void makePayment() {
    printf("Payment successful!\n");
}

// Function to book an appointment
void bookAppointment() {
    printf("Appointment booked!\n");
}

// Function to book a consultation
void bookConsultation() {
    printf("Consultation booked!\n");
}

// Main function
int main() {
    struct patientRecord record;
    int choice;

    // Display menu
    do {
        printf("\nChoose an option:\n");
        printf("1. Enter patient record\n");
        printf("2. Make payment\n");
        printf("3. Book appointment\n");
        printf("4. Book consultation\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        fflush(stdin);

        // Perform action based on user choice
        switch (choice) {
            case 1:
                enterRecord(&record);
                break;
            case 2:
                makePayment();
                break;
            case 3:
                bookAppointment();
                break;
            case 4:
                bookConsultation();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

