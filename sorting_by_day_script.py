from os import *
import shutil
from datetime import datetime


terminaciones_borrar = ('.exe', '.o')
terminaciones_conservar = ('.cpp', '.c')


def createFolder(base, folder_name):
    f_exsist = False
    for f in listdir():
        if f.startswith(folder_name):
            folder_name = f
            f_exsist = True
            break
    if not f_exsist:
        mkdir(folder_name)
    conc = ['./', folder_name]
    return ''.join(conc)


def resizeToTwoDigits(n):
    if (n < 10 and -10 < n):
        return ''.join(['0', str(n)])
    elif (9 < n and n < 100):
        return str(n)
    else:
        print("error buddy, how more than 100?, u insane")


def getSufijo(n):
    return ''.join(['-(', resizeToTwoDigits(n), ')'])


def updateTxtCont(cont):
    curr_list = listdir()
    for f in curr_list:
        if f.endswith('.txt'):
            rename(f, ''.join(['Total = ', str(cont), '.txt']))
            return


def fechaToStr(dia, month, year):
    folder_name = '-'.join([str(dia), str(month), str(year)])
    return folder_name
# funciones principales


def actualizarContadores():
    working_dir = getcwd()
    current_cont = 0
    total_count = 0
    for root, dirs, files in walk(".", topdown=True):
        if root == '.' or root.startswith('.\\.vscode'):
            if root.startswith('.\\.vscode'):
                shutil.rmtree(root)
            continue
        # primero borramos exes y o
        for f in files:
            if f.endswith(terminaciones_borrar):
                remove(path.join(root, f))
                files.remove(f)

        current_cont = len(files)
        total_count += current_cont
        sufijo = getSufijo(current_cont)
        new_name_root = ''.join([root[0:12], sufijo])
        new_name_root = path.join(working_dir, new_name_root)
        rename(path.join(working_dir, root), new_name_root)

    updateTxtCont(total_count)


def organizarRespectivaFecha(working_dir):
    files_in_path = listdir()
    for file in files_in_path:
        if file.endswith(terminaciones_borrar):
            remove(file)
        elif file.endswith(terminaciones_conservar):
            m_time = path.getmtime(file)
            m_time = datetime.fromtimestamp(m_time)
            folder_name = fechaToStr(m_time.day, m_time.month, m_time.year)
            folder_name = createFolder(working_dir, folder_name)
            shutil.move(file, folder_name)


# ejecutar en codeforces as pwd
relative = './Div A'
working_dir = path.abspath(relative)
chdir(working_dir)
organizarRespectivaFecha(working_dir)
actualizarContadores()
print("Hecho! :)")
