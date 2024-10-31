# printf

### Yapı
Projenin yürütülmesi sırasındaki ana kazanımlar şunlardır: değişken sayıda parametrenin ele alınması ve `int` döndüren `ft_printf()` işlevi.

#### `va_list`
Girilen değişken sayıdaki parametrelerle başa çıkmak için `va_list`, `va_start`, `va_arg` ve `va_end` makroları kullanılmıştır. ft_printf()` fonksiyonu, girilen parametreler arasında `%` işaretini bulduğunda `ft_check(va_list args, const char *str, unsigned int *len)` fonksiyonunu çağırır, ardından farklı değişken türlerini yazdıran fonksiyonlardan birini çağırmak için dizedeki karakteri kontrol eder. Bu fonksiyonu kullanmak için `ft_printf.h` kütüphanesi dahil edilmelidir.

#### Bir tamsayı döndürme
ft_printf()` tarafından döndürülen tamsayıyı işlemek için, biçim yazdırma işlevlerinde bir gösterici verilir. Bu şekilde, işlev, parametre ile gönderilen dizeye devam etmeden önce yazdırılan karakter sayısını işler..

### Dönüşümler

| Belirteçler | Açıklama |
|------------|--------------------------------------------------------|
| **%c** | Tek bir karakter yazdırın.                              |
| **%s** | Bir karakter dizisi yazdır |
| **%p** | Void * işaretçi argümanı onaltılık olarak yazdırılır. |
| **%d** | Ondalık (10 tabanında) bir sayı yazdırın.                      |
| **%i** | 10 tabanında bir tamsayı yazdırır.                           |
| **%u** | İşaretsiz ondalık (taban 10) sayı yazdırır.            |
| **%
