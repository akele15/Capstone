# Generated by Django 3.2.7 on 2021-09-30 21:29

from django.conf import settings
from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        migrations.swappable_dependency(settings.AUTH_USER_MODEL),
        ('api', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='FileTransferLog',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('FileName', models.CharField(max_length=255)),
                ('Time', models.DateTimeField()),
                ('Hash', models.CharField(max_length=64)),
                ('direction', models.CharField(choices=[('Upload', 'Upload'), ('Download', 'Download')], max_length=255)),
                ('User', models.ForeignKey(on_delete=django.db.models.deletion.PROTECT, to=settings.AUTH_USER_MODEL)),
            ],
        ),
        migrations.CreateModel(
            name='InviteCode',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('Code', models.CharField(max_length=15)),
            ],
        ),
        migrations.CreateModel(
            name='UserActionLog',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('Command', models.CharField(max_length=255)),
                ('Output', models.TextField()),
                ('CommandType', models.CharField(choices=[('FileTransfer', 'FileTransfer'), ('ShellCommand', 'ShellCommand')], max_length=255)),
                ('Queued', models.BooleanField()),
            ],
        ),
        migrations.RenameField(
            model_name='agent',
            old_name='CheckinDate',
            new_name='LastCheckinDate',
        ),
        migrations.DeleteModel(
            name='command',
        ),
        migrations.AddField(
            model_name='useractionlog',
            name='Agent',
            field=models.ForeignKey(on_delete=django.db.models.deletion.PROTECT, to='api.agent'),
        ),
        migrations.AddField(
            model_name='useractionlog',
            name='TransferLog',
            field=models.ForeignKey(on_delete=django.db.models.deletion.PROTECT, to='api.filetransferlog'),
        ),
        migrations.AddField(
            model_name='useractionlog',
            name='User',
            field=models.ForeignKey(on_delete=django.db.models.deletion.PROTECT, to=settings.AUTH_USER_MODEL),
        ),
    ]