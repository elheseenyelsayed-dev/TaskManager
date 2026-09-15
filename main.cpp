void EditTask()
{
    cout << "Task edited successfully." << endl;
}

int main()
{
    cout << "=== Task Manager ===" << endl;

    ShowTasks();
    AddTask();
    DeleteTask();

    return 0;
}