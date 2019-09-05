USE [EMS]
GO

/****** Object:  Table [dbo].[tblFaculty]    Script Date: 05-09-2019 08:57:45 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[tblFaculty](
	[FacultyId] [int] IDENTITY(1,1) NOT NULL,
	[FFName] [nvarchar](50) NOT NULL,
	[FLName] [nvarchar](50) NOT NULL,
	[FEmail] [nvarchar](50) NOT NULL,
	[FMobile] [bigint] NOT NULL,
	[FGraduationType] [nvarchar](50) NOT NULL,
	[FCourse] [nvarchar](50) NOT NULL,
	[FClass] [nvarchar](50) NOT NULL,
	[FDOJ] [date] NOT NULL,
	[FExperience] [int] NOT NULL,
	[FPassword] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_tblFaculty] PRIMARY KEY CLUSTERED 
(
	[FacultyId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO

