# Generated by Django 3.2.8 on 2021-10-14 17:55

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('api', '0005_filetransferlog_file'),
    ]

    operations = [
        migrations.AddField(
            model_name='filetransferlog',
            name='Path',
            field=models.TextField(null=True),
        ),
    ]
