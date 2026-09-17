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

// Function: sub_00347380
// Address: 0x347380 - 0x347610
void sub_00347380_0x347380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347380_0x347380");
#endif

    switch (ctx->pc) {
        case 0x3473d8u: goto label_3473d8;
        case 0x347510u: goto label_347510;
        case 0x347570u: goto label_347570;
        default: break;
    }

    ctx->pc = 0x347380u;

    // 0x347380: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x347380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x347384: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x347384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x347388: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x347388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x34738c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x347390: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x347390u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x347394: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x347394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x347398: 0x2442d228  addiu       $v0, $v0, -0x2DD8
    ctx->pc = 0x347398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955560));
    // 0x34739c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3473a0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3473a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3473a4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3473a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3473a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3473a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3473ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3473acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3473b0: 0xe4ac000c  swc1        $f12, 0xC($a1)
    ctx->pc = 0x3473b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3473b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3473B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3473B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473B4u;
        // 0x3473b8: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3473B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3473BCu;
    // 0x3473bc: 0x0  nop
    ctx->pc = 0x3473bcu;
    // NOP
    // 0x3473c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3473c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473c4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3473c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3473c8: 0x240a001b  addiu       $t2, $zero, 0x1B
    ctx->pc = 0x3473c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3473cc: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x3473ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3473d0: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x3473d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3473d4: 0x0  nop
    ctx->pc = 0x3473d4u;
    // NOP
label_3473d8:
    // 0x3473d8: 0x10c00082  beqz        $a2, . + 4 + (0x82 << 2)
    ctx->pc = 0x3473D8u;
    {
        const bool branch_taken_0x3473d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473D8u;
        // 0x3473dc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473d8) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x3473E0u;
    // 0x3473e0: 0x14ca0017  bne         $a2, $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3473E0u;
    {
        const bool branch_taken_0x3473e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x3473E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473E0u;
        // 0x3473e4: 0x24c2ff7f  addiu       $v0, $a2, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473e0) {
            ctx->pc = 0x347440u;
            goto label_347440;
        }
    }
    ctx->pc = 0x3473E8u;
    // 0x3473e8: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x3473e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3473ec: 0x14c9000e  bne         $a2, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x3473ECu;
    {
        const bool branch_taken_0x3473ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x3473F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473ECu;
        // 0x3473f0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473ec) {
            ctx->pc = 0x347428u;
            goto label_347428;
        }
    }
    ctx->pc = 0x3473F4u;
    // 0x3473f4: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x3473f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3473f8: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3473f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3473fc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3473FCu;
    {
        const bool branch_taken_0x3473fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x347400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473FCu;
        // 0x347400: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473fc) {
            ctx->pc = 0x347410u;
            goto label_347410;
        }
    }
    ctx->pc = 0x347404u;
    // 0x347404: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x347404u;
    {
        const bool branch_taken_0x347404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347404u;
        // 0x347408: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347404) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34740Cu;
    // 0x34740c: 0x0  nop
    ctx->pc = 0x34740cu;
    // NOP
label_347410:
    // 0x347410: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x347410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x347414: 0x50c20073  beql        $a2, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x347414u;
    {
        const bool branch_taken_0x347414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x347414) {
            ctx->pc = 0x347418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347414u;
            // 0x347418: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34741Cu;
    // 0x34741c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x34741Cu;
    {
        const bool branch_taken_0x34741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34741Cu;
        // 0x347420: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34741c) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347424u;
    // 0x347424: 0x0  nop
    ctx->pc = 0x347424u;
    // NOP
label_347428:
    // 0x347428: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x347428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x34742c: 0x50c2006d  beql        $a2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x34742Cu;
    {
        const bool branch_taken_0x34742c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x34742c) {
            ctx->pc = 0x347430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34742Cu;
            // 0x347430: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x347434u;
    // 0x347434: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x347434u;
    {
        const bool branch_taken_0x347434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347434u;
        // 0x347438: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347434) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x34743Cu;
    // 0x34743c: 0x0  nop
    ctx->pc = 0x34743cu;
    // NOP
label_347440:
    // 0x347440: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x347440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x347444: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x347444u;
    {
        const bool branch_taken_0x347444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347444) {
            ctx->pc = 0x347448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347444u;
            // 0x347448: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34744Cu;
    // 0x34744c: 0x24c2ff71  addiu       $v0, $a2, -0x8F
    ctx->pc = 0x34744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967153));
    // 0x347450: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x347450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x347454: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x347454u;
    {
        const bool branch_taken_0x347454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347454) {
            ctx->pc = 0x347458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347454u;
            // 0x347458: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34745Cu;
    // 0x34745c: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x34745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x347460: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x347460u;
    {
        const bool branch_taken_0x347460 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x347464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347460u;
        // 0x347464: 0x24c2ff5f  addiu       $v0, $a2, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347460) {
            ctx->pc = 0x3474B8u;
            goto label_3474b8;
        }
    }
    ctx->pc = 0x347468u;
    // 0x347468: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x347468u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34746c: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x34746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x347470: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x347470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x347474: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x347474u;
    {
        const bool branch_taken_0x347474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347474u;
        // 0x347478: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347474) {
            ctx->pc = 0x347570u;
            goto label_347570;
        }
    }
    ctx->pc = 0x34747Cu;
    // 0x34747c: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x34747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x347480: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x347480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x347484: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x347484u;
    {
        const bool branch_taken_0x347484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347484) {
            ctx->pc = 0x347488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347484u;
            // 0x347488: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34748Cu;
    // 0x34748c: 0x24c2ff20  addiu       $v0, $a2, -0xE0
    ctx->pc = 0x34748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
    // 0x347490: 0x2c42001d  sltiu       $v0, $v0, 0x1D
    ctx->pc = 0x347490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x347494: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x347494u;
    {
        const bool branch_taken_0x347494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347494) {
            ctx->pc = 0x347498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347494u;
            // 0x347498: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34749Cu;
    // 0x34749c: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x34749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x3474a0: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3474a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3474a4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3474A4u;
    {
        const bool branch_taken_0x3474a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474A4u;
        // 0x3474a8: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474a4) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x3474ACu;
    // 0x3474ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3474ACu;
    {
        const bool branch_taken_0x3474ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474ACu;
        // 0x3474b0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474ac) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x3474B4u;
    // 0x3474b4: 0x0  nop
    ctx->pc = 0x3474b4u;
    // NOP
label_3474b8:
    // 0x3474b8: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3474b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3474bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3474BCu;
    {
        const bool branch_taken_0x3474bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474BCu;
        // 0x3474c0: 0x24c2ff10  addiu       $v0, $a2, -0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474bc) {
            ctx->pc = 0x347578u;
            goto label_347578;
        }
    }
    ctx->pc = 0x3474C4u;
    // 0x3474c4: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x3474c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3474c8: 0x24c2ff10  addiu       $v0, $a2, -0xF0
    ctx->pc = 0x3474c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967056));
    // 0x3474cc: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x3474ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3474d0: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3474D0u;
    {
        const bool branch_taken_0x3474d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3474D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474D0u;
        // 0x3474d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474d0) {
            ctx->pc = 0x347584u;
            goto label_347584;
        }
    }
    ctx->pc = 0x3474D8u;
    // 0x3474d8: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x3474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x3474dc: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3474dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3474e0: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x3474E0u;
    {
        const bool branch_taken_0x3474e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3474e0) {
            ctx->pc = 0x3474E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3474E0u;
            // 0x3474e4: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x3474E8u;
    // 0x3474e8: 0x24c2ff20  addiu       $v0, $a2, -0xE0
    ctx->pc = 0x3474e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
    // 0x3474ec: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3474ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3474f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3474F0u;
    {
        const bool branch_taken_0x3474f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474F0u;
        // 0x3474f4: 0x28c200a0  slti        $v0, $a2, 0xA0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)160) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474f0) {
            ctx->pc = 0x347568u;
            goto label_347568;
        }
    }
    ctx->pc = 0x3474F8u;
    // 0x3474f8: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x3474f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3474fc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3474FCu;
    {
        const bool branch_taken_0x3474fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474FCu;
        // 0x347500: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474fc) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x347504u;
    // 0x347504: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347508: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34750c: 0x0  nop
    ctx->pc = 0x34750cu;
    // NOP
label_347510:
    // 0x347510: 0x28c20081  slti        $v0, $a2, 0x81
    ctx->pc = 0x347510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x347514: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x347514u;
    {
        const bool branch_taken_0x347514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347514) {
            ctx->pc = 0x347518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347514u;
            // 0x347518: 0x90e60000  lbu         $a2, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347548u;
            goto label_347548;
        }
    }
    ctx->pc = 0x34751Cu;
    // 0x34751c: 0x28c2008e  slti        $v0, $a2, 0x8E
    ctx->pc = 0x34751cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)142) ? 1 : 0);
    // 0x347520: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x347520u;
    {
        const bool branch_taken_0x347520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347520) {
            ctx->pc = 0x347524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347520u;
            // 0x347524: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347544u;
            goto label_347544;
        }
    }
    ctx->pc = 0x347528u;
    // 0x347528: 0x24c2ff03  addiu       $v0, $a2, -0xFD
    ctx->pc = 0x347528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967043));
    // 0x34752c: 0x24c3ff71  addiu       $v1, $a2, -0x8F
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967153));
    // 0x347530: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x347534: 0x2c630011  sltiu       $v1, $v1, 0x11
    ctx->pc = 0x347534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x347538: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x347538u;
    {
        const bool branch_taken_0x347538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347538u;
        // 0x34753c: 0xa2400b  movn        $t0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347538) {
            ctx->pc = 0x347544u;
            goto label_347544;
        }
    }
    ctx->pc = 0x347540u;
    // 0x347540: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x347540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_347544:
    // 0x347544: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x347544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_347548:
    // 0x347548: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x347548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x34754c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x34754Cu;
    {
        const bool branch_taken_0x34754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34754Cu;
        // 0x347550: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34754c) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x347554u;
    // 0x347554: 0x1104ffee  beq         $t0, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x347554u;
    {
        const bool branch_taken_0x347554 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x347558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347554u;
        // 0x347558: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347554) {
            ctx->pc = 0x347510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347510;
        }
    }
    ctx->pc = 0x34755Cu;
    // 0x34755c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x34755Cu;
    {
        const bool branch_taken_0x34755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34755Cu;
        // 0x347560: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34755c) {
            ctx->pc = 0x3475ECu;
            goto label_3475ec;
        }
    }
    ctx->pc = 0x347564u;
    // 0x347564: 0x0  nop
    ctx->pc = 0x347564u;
    // NOP
label_347568:
    // 0x347568: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x347568u;
    {
        const bool branch_taken_0x347568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347568u;
        // 0x34756c: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347568) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347570u;
label_347570:
    // 0x347570: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x347570u;
    {
        const bool branch_taken_0x347570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347570u;
        // 0x347574: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347570) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x347578u;
label_347578:
    // 0x347578: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x347578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x34757c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34757Cu;
    {
        const bool branch_taken_0x34757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34757Cu;
        // 0x347580: 0x24c2ff20  addiu       $v0, $a2, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34757c) {
            ctx->pc = 0x347590u;
            goto label_347590;
        }
    }
    ctx->pc = 0x347584u;
label_347584:
    // 0x347584: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x347584u;
    {
        const bool branch_taken_0x347584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347584u;
        // 0x347588: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347584) {
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x34758Cu;
    // 0x34758c: 0x0  nop
    ctx->pc = 0x34758cu;
    // NOP
label_347590:
    // 0x347590: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x347590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x347594: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x347594u;
    {
        const bool branch_taken_0x347594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347594u;
        // 0x347598: 0x2502fff9  addiu       $v0, $t0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347594) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x34759Cu;
    // 0x34759c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x34759cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3475a0: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x3475a4: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3475a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3475a8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3475A8u;
    {
        const bool branch_taken_0x3475a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3475ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475A8u;
        // 0x3475ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475a8) {
            ctx->pc = 0x347570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347570;
        }
    }
    ctx->pc = 0x3475B0u;
    // 0x3475b0: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x3475b4: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x3475b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x3475b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3475B8u;
    {
        const bool branch_taken_0x3475b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3475b8) {
            ctx->pc = 0x3475BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3475B8u;
            // 0x3475bc: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E4u;
            goto label_3475e4;
        }
    }
    ctx->pc = 0x3475C0u;
    // 0x3475c0: 0x24c4ff03  addiu       $a0, $a2, -0xFD
    ctx->pc = 0x3475c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967043));
    // 0x3475c4: 0x24c3ff5f  addiu       $v1, $a2, -0xA1
    ctx->pc = 0x3475c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x3475c8: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x3475c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3475cc: 0x2c63005c  sltiu       $v1, $v1, 0x5C
    ctx->pc = 0x3475ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x3475d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3475d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3475d4: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x3475d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x3475d8: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x3475d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x3475dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3475dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3475e0: 0x44400b  movn        $t0, $v0, $a0
    ctx->pc = 0x3475e0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_3475e4:
    // 0x3475e4: 0x2502fff9  addiu       $v0, $t0, -0x7
    ctx->pc = 0x3475e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
label_3475e8:
    // 0x3475e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3475e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3475ec:
    // 0x3475ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3475ECu;
    {
        const bool branch_taken_0x3475ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3475ec) {
            ctx->pc = 0x3475F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3475ECu;
            // 0x3475f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347600u;
            goto label_347600;
        }
    }
    ctx->pc = 0x3475F4u;
    // 0x3475f4: 0x54c0ff78  bnel        $a2, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x3475F4u;
    {
        const bool branch_taken_0x3475f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3475f4) {
            ctx->pc = 0x3475F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3475F4u;
            // 0x3475f8: 0x90e60000  lbu         $a2, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3473D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3473d8;
        }
    }
    ctx->pc = 0x3475FCu;
    // 0x3475fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3475fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_347600:
    // 0x347600: 0x39030007  xori        $v1, $t0, 0x7
    ctx->pc = 0x347600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)7);
    // 0x347604: 0x3e00008  jr          $ra
    ctx->pc = 0x347604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347604u;
        // 0x347608: 0x103100b  movn        $v0, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34760Cu;
    // 0x34760c: 0x0  nop
    ctx->pc = 0x34760cu;
    // NOP
    ctx->pc = 0x347610u;
}
