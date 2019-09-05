USE [EMS]
GO

/****** Object:  Table [dbo].[tblGraduation]    Script Date: 05-09-2019 08:57:57 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[tblGraduation](
	[GraduationId] [int] IDENTITY(1,1) NOT NULL,
	[GraduationType] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_tblGraduation] PRIMARY KEY CLUSTERED 
(
	[GraduationId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO

