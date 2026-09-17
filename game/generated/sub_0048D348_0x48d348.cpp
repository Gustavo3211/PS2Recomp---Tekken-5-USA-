#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048D348
// Address: 0x48d348 - 0x48d698
void sub_0048D348_0x48d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D348_0x48d348");
#endif

    switch (ctx->pc) {
        case 0x48d3c8u: goto label_48d3c8;
        case 0x48d3d0u: goto label_48d3d0;
        case 0x48d3dcu: goto label_48d3dc;
        case 0x48d428u: goto label_48d428;
        case 0x48d454u: goto label_48d454;
        case 0x48d470u: goto label_48d470;
        case 0x48d4f8u: goto label_48d4f8;
        case 0x48d554u: goto label_48d554;
        case 0x48d55cu: goto label_48d55c;
        case 0x48d568u: goto label_48d568;
        case 0x48d588u: goto label_48d588;
        case 0x48d59cu: goto label_48d59c;
        case 0x48d5a4u: goto label_48d5a4;
        case 0x48d638u: goto label_48d638;
        case 0x48d648u: goto label_48d648;
        case 0x48d658u: goto label_48d658;
        case 0x48d668u: goto label_48d668;
        case 0x48d670u: goto label_48d670;
        case 0x48d67cu: goto label_48d67c;
        default: break;
    }

    ctx->pc = 0x48d348u;

    // 0x48d348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48d34c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48d350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48d350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48d354: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48d358: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48d358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48d35c: 0x24730082  addiu       $s3, $v1, 0x82
    ctx->pc = 0x48d35cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x48d360: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48d364: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x48d364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x48d368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d36c: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x48d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x48d370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48d374: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x48d374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48d378: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x48d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x48d37c: 0x2464005c  addiu       $a0, $v1, 0x5C
    ctx->pc = 0x48d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x48d380: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x48d380u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x72D6D8u));
    // 0x48d384: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x48d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x48d388: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x48d388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x48d38c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x48d38cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D6D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6D8u, _value); } while (0);
    // 0x48d390: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x48d390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x48d394: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48d394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6DCu));
    // 0x48d398: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x48d398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x48d39c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x48d39cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D700u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D700u, _value); } while (0);
    // 0x48d3a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6DCu));
    // 0x48d3a4: 0x846500b4  lh          $a1, 0xB4($v1)
    ctx->pc = 0x48d3a4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72D734u));
    // 0x48d3a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48d3ac: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x48d3acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D702u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D702u, _value); } while (0);
    // 0x48d3b0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x48D3B0u;
    {
        const bool branch_taken_0x48d3b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D3B0u;
        // 0x48d3b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d3b0) {
            ctx->pc = 0x48D3D0u;
            goto label_48d3d0;
        }
    }
    ctx->pc = 0x48D3B8u;
    // 0x48d3b8: 0x3c10007e  lui         $s0, 0x7E
    ctx->pc = 0x48d3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)126 << 16));
    // 0x48d3bc: 0x2610b240  addiu       $s0, $s0, -0x4DC0
    ctx->pc = 0x48d3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947392));
    // 0x48d3c0: 0xc12349c  jal         func_48D270
    ctx->pc = 0x48D3C0u;
    SET_GPR_U32(ctx, 31, 0x48D3C8u);
    ctx->pc = 0x48D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D3C0u;
    // 0x48d3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D270u, 0x48D3C0u, 0x48D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D3C8u;
label_48d3c8:
    // 0x48d3c8: 0xc12349c  jal         func_48D270
    ctx->pc = 0x48D3C8u;
    SET_GPR_U32(ctx, 31, 0x48D3D0u);
    ctx->pc = 0x48D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D3C8u;
    // 0x48d3cc: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D270u, 0x48D3C8u, 0x48D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D3D0u;
label_48d3d0:
    // 0x48d3d0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48d3d4: 0xc12349c  jal         func_48D270
    ctx->pc = 0x48D3D4u;
    SET_GPR_U32(ctx, 31, 0x48D3DCu);
    ctx->pc = 0x48D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D3D4u;
    // 0x48d3d8: 0x2484b640  addiu       $a0, $a0, -0x49C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D270u, 0x48D3D4u, 0x48D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D3DCu;
label_48d3dc:
    // 0x48d3dc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x48d3dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48d3e0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x48d3e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x48d3e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48d3e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d3ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D3ECu;
    {
        const bool branch_taken_0x48d3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D3ECu;
        // 0x48d3f0: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d3ec) {
            ctx->pc = 0x48D3FCu;
            goto label_48d3fc;
        }
    }
    ctx->pc = 0x48D3F4u;
    // 0x48d3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d3f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48d3fc:
    // 0x48d3fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x48d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x48d400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d404: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x48d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x48d408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48d40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48d410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48d414: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48d414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d418: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x48d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48d41c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x48d41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48d420: 0x3e00008  jr          $ra
    ctx->pc = 0x48D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D420u;
        // 0x48d424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D428u;
label_48d428:
    // 0x48d428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48d42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d430: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48d430u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48d434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48d438: 0x2603d680  addiu       $v1, $s0, -0x2980
    ctx->pc = 0x48d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48d43c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48d440: 0x84620096  lh          $v0, 0x96($v1)
    ctx->pc = 0x48d440u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D716u));
    // 0x48d444: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x48D444u;
    {
        const bool branch_taken_0x48d444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d444) {
            ctx->pc = 0x48D448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D444u;
            // 0x48d448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D578u;
            goto label_48d578;
        }
    }
    ctx->pc = 0x48D44Cu;
    // 0x48d44c: 0xc12a64c  jal         func_4A9930
    ctx->pc = 0x48D44Cu;
    SET_GPR_U32(ctx, 31, 0x48D454u);
    ctx->pc = 0x48D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D44Cu;
    // 0x48d450: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9930u, 0x48D44Cu, 0x48D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D454u;
label_48d454:
    // 0x48d454: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x48d454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d458: 0x240805b6  addiu       $t0, $zero, 0x5B6
    ctx->pc = 0x48d458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1462));
    // 0x48d45c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48d45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d460: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x48d460u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48d464: 0x1920001e  blez        $t1, . + 4 + (0x1E << 2)
    ctx->pc = 0x48D464u;
    {
        const bool branch_taken_0x48d464 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x48D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D464u;
        // 0x48d468: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d464) {
            ctx->pc = 0x48D4E0u;
            goto label_48d4e0;
        }
    }
    ctx->pc = 0x48D46Cu;
    // 0x48d46c: 0x0  nop
    ctx->pc = 0x48d46cu;
    // NOP
label_48d470:
    // 0x48d470: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x48d470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48d474: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48d474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48d478: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x48d478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48d47c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48d47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48d480: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x48d480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x48d484: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x48d484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x48d488: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x48d488u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d48c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d490: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x48d490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x48d494: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d498: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x48d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x48d49c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x48d49cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d4a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d4a4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d4a8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x48d4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48d4ac: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d4b0: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x48d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x48d4b4: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x48d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x48d4b8: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x48d4b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x48d4bc: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x48d4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48d4c0: 0x24a51200  addiu       $a1, $a1, 0x1200
    ctx->pc = 0x48d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    // 0x48d4c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48d4c8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d4cc: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x48d4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x48d4d0: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x48d4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x48d4d4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d4d8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x48D4D8u;
    {
        const bool branch_taken_0x48d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D4D8u;
        // 0x48d4dc: 0x34403  sra         $t0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d4d8) {
            ctx->pc = 0x48D470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d470;
        }
    }
    ctx->pc = 0x48D4E0u;
label_48d4e0:
    // 0x48d4e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x48d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x48d4e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48d4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d4e8: 0x24486df0  addiu       $t0, $v0, 0x6DF0
    ctx->pc = 0x48d4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28144));
    // 0x48d4ec: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x48d4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x48d4f0: 0x24051200  addiu       $a1, $zero, 0x1200
    ctx->pc = 0x48d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x48d4f4: 0x0  nop
    ctx->pc = 0x48d4f4u;
    // NOP
label_48d4f8:
    // 0x48d4f8: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x48d4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d4fc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d500: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x48d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x48d504: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x48d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x48d508: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x48d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x48d50c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48d510: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x48d510u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d514: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x48d514u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48d518: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x48d518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x48d51c: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x48d51cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x48d520: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d524: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x48d524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d528: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d52c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x48d52cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d530: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d534: 0xa6260000  sh          $a2, 0x0($s1)
    ctx->pc = 0x48d534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48d538: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x48d538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x48d53c: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x48d53cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x48d540: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x48D540u;
    {
        const bool branch_taken_0x48d540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D540u;
        // 0x48d544: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d540) {
            ctx->pc = 0x48D4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d4f8;
        }
    }
    ctx->pc = 0x48D548u;
    // 0x48d548: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48d548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48d54c: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x48D54Cu;
    SET_GPR_U32(ctx, 31, 0x48D554u);
    ctx->pc = 0x48D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D54Cu;
    // 0x48d550: 0xae110040  sw          $s1, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x48D54Cu, 0x48D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D554u;
label_48d554:
    // 0x48d554: 0xc124136  jal         func_4904D8
    ctx->pc = 0x48D554u;
    SET_GPR_U32(ctx, 31, 0x48D55Cu);
    ctx->pc = 0x48D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D554u;
    // 0x48d558: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48D554u, 0x48D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D55Cu;
label_48d55c:
    // 0x48d55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d560: 0xc124620  jal         func_491880
    ctx->pc = 0x48D560u;
    SET_GPR_U32(ctx, 31, 0x48D568u);
    ctx->pc = 0x48D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D560u;
    // 0x48d564: 0xa602001a  sh          $v0, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48D560u, 0x48D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D568u;
label_48d568:
    // 0x48d568: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d56c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d56cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d570: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x48d570u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48d578:
    // 0x48d578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d57c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48d57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d580: 0x3e00008  jr          $ra
    ctx->pc = 0x48D580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D580u;
        // 0x48d584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D588u;
label_48d588:
    // 0x48d588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48d588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48d58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48d594: 0xc12369c  jal         func_48DA70
    ctx->pc = 0x48D594u;
    SET_GPR_U32(ctx, 31, 0x48D59Cu);
    ctx->pc = 0x48D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D594u;
    // 0x48d598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DA70u, 0x48D594u, 0x48D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D59Cu;
label_48d59c:
    // 0x48d59c: 0xc1235d4  jal         func_48D750
    ctx->pc = 0x48D59Cu;
    SET_GPR_U32(ctx, 31, 0x48D5A4u);
    ctx->pc = 0x48D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D59Cu;
    // 0x48d5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D750u, 0x48D59Cu, 0x48D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D5A4u;
label_48d5a4:
    // 0x48d5a4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x48d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x48d5a8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x48d5a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x48d5ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48d5b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x48d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d5b4: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x48D5B4u;
    {
        const bool branch_taken_0x48d5b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x48D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5B4u;
        // 0x48d5b8: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5b4) {
            ctx->pc = 0x48D5E8u;
            goto label_48d5e8;
        }
    }
    ctx->pc = 0x48D5BCu;
    // 0x48d5bc: 0x2604002e  addiu       $a0, $s0, 0x2E
    ctx->pc = 0x48d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
    // 0x48d5c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x48d5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48d5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48d5c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x48d5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48d5cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d5d0: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x48d5d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x48d5d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x48d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x48d5d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48d5dc: 0x94636df8  lhu         $v1, 0x6DF8($v1)
    ctx->pc = 0x48d5dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28152)));
    // 0x48d5e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48D5E0u;
    {
        const bool branch_taken_0x48d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5E0u;
        // 0x48d5e4: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5e0) {
            ctx->pc = 0x48D5ECu;
            goto label_48d5ec;
        }
    }
    ctx->pc = 0x48D5E8u;
label_48d5e8:
    // 0x48d5e8: 0x2604002e  addiu       $a0, $s0, 0x2E
    ctx->pc = 0x48d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 46));
label_48d5ec:
    // 0x48d5ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x48d5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x48d5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d5f4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x48D5F4u;
    {
        const bool branch_taken_0x48d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D5F4u;
        // 0x48d5f8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d5f4) {
            ctx->pc = 0x48D640u;
            goto label_48d640;
        }
    }
    ctx->pc = 0x48D5FCu;
    // 0x48d5fc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D5FCu;
    {
        const bool branch_taken_0x48d5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d5fc) {
            ctx->pc = 0x48D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D5FCu;
            // 0x48d600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D618u;
            goto label_48d618;
        }
    }
    ctx->pc = 0x48D604u;
    // 0x48d604: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x48D604u;
    {
        const bool branch_taken_0x48d604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d604) {
            ctx->pc = 0x48D630u;
            goto label_48d630;
        }
    }
    ctx->pc = 0x48D60Cu;
    // 0x48d60c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x48D60Cu;
    {
        const bool branch_taken_0x48d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d60c) {
            ctx->pc = 0x48D668u;
            goto label_48d668;
        }
    }
    ctx->pc = 0x48D614u;
    // 0x48d614: 0x0  nop
    ctx->pc = 0x48d614u;
    // NOP
label_48d618:
    // 0x48d618: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48D618u;
    {
        const bool branch_taken_0x48d618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D618u;
        // 0x48d61c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d618) {
            ctx->pc = 0x48D650u;
            goto label_48d650;
        }
    }
    ctx->pc = 0x48D620u;
    // 0x48d620: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48D620u;
    {
        const bool branch_taken_0x48d620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48d620) {
            ctx->pc = 0x48D660u;
            goto label_48d660;
        }
    }
    ctx->pc = 0x48D628u;
    // 0x48d628: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48D628u;
    {
        const bool branch_taken_0x48d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d628) {
            ctx->pc = 0x48D668u;
            goto label_48d668;
        }
    }
    ctx->pc = 0x48D630u;
label_48d630:
    // 0x48d630: 0xc1235a6  jal         func_48D698
    ctx->pc = 0x48D630u;
    SET_GPR_U32(ctx, 31, 0x48D638u);
    ctx->pc = 0x48D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D630u;
    // 0x48d634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D698u, 0x48D630u, 0x48D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D638u;
label_48d638:
    // 0x48d638: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48D638u;
    {
        const bool branch_taken_0x48d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d638) {
            ctx->pc = 0x48D668u;
            goto label_48d668;
        }
    }
    ctx->pc = 0x48D640u;
label_48d640:
    // 0x48d640: 0xc1235ae  jal         func_48D6B8
    ctx->pc = 0x48D640u;
    SET_GPR_U32(ctx, 31, 0x48D648u);
    ctx->pc = 0x48D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D640u;
    // 0x48d644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D6B8u, 0x48D640u, 0x48D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D648u;
label_48d648:
    // 0x48d648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48D648u;
    {
        const bool branch_taken_0x48d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d648) {
            ctx->pc = 0x48D668u;
            goto label_48d668;
        }
    }
    ctx->pc = 0x48D650u;
label_48d650:
    // 0x48d650: 0xc1235ba  jal         func_48D6E8
    ctx->pc = 0x48D650u;
    SET_GPR_U32(ctx, 31, 0x48D658u);
    ctx->pc = 0x48D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D650u;
    // 0x48d654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D6E8u, 0x48D650u, 0x48D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D658u;
label_48d658:
    // 0x48d658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48D658u;
    {
        const bool branch_taken_0x48d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d658) {
            ctx->pc = 0x48D668u;
            goto label_48d668;
        }
    }
    ctx->pc = 0x48D660u;
label_48d660:
    // 0x48d660: 0xc1235ca  jal         func_48D728
    ctx->pc = 0x48D660u;
    SET_GPR_U32(ctx, 31, 0x48D668u);
    ctx->pc = 0x48D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D660u;
    // 0x48d664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D728u, 0x48D660u, 0x48D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D668u;
label_48d668:
    // 0x48d668: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x48D668u;
    SET_GPR_U32(ctx, 31, 0x48D670u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x48D668u, 0x48D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D670u;
label_48d670:
    // 0x48d670: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48d674: 0xc124620  jal         func_491880
    ctx->pc = 0x48D674u;
    SET_GPR_U32(ctx, 31, 0x48D67Cu);
    ctx->pc = 0x48D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D674u;
    // 0x48d678: 0xa440d680  sh          $zero, -0x2980($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294956672), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48D674u, 0x48D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D67Cu;
label_48d67c:
    // 0x48d67c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48d680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d684: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48d688: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48d688u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48d68c: 0xa420e820  sh          $zero, -0x17E0($at)
    ctx->pc = 0x48d68cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 0));
    // 0x48d690: 0x3e00008  jr          $ra
    ctx->pc = 0x48D690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D690u;
        // 0x48d694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D698u;
}
