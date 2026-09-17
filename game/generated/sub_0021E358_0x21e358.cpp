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

// Function: sub_0021E358
// Address: 0x21e358 - 0x21e4f0
void sub_0021E358_0x21e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E358_0x21e358");
#endif

    switch (ctx->pc) {
        case 0x21e380u: goto label_21e380;
        case 0x21e3b4u: goto label_21e3b4;
        case 0x21e3c4u: goto label_21e3c4;
        case 0x21e444u: goto label_21e444;
        case 0x21e4b0u: goto label_21e4b0;
        default: break;
    }

    ctx->pc = 0x21e358u;

    // 0x21e358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e35c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e360: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e36c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e370: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21e374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21e378: 0xc086f88  jal         func_21BE20
    ctx->pc = 0x21E378u;
    SET_GPR_U32(ctx, 31, 0x21E380u);
    ctx->pc = 0x21E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E378u;
    // 0x21e37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE20u, 0x21E378u, 0x21E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E380u;
label_21e380:
    // 0x21e380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E380u;
    {
        const bool branch_taken_0x21e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E380u;
        // 0x21e384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e380) {
            ctx->pc = 0x21E390u;
            goto label_21e390;
        }
    }
    ctx->pc = 0x21E388u;
    // 0x21e388: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21E388u;
    {
        const bool branch_taken_0x21e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E388u;
        // 0x21e38c: 0x3c13003b  lui         $s3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e388) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E390u;
label_21e390:
    // 0x21e390: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x21e390u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x21e394: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x21e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x21e398: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x21e398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x21e39c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x21e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x21e3a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21e3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21e3a4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x21E3A4u;
    {
        const bool branch_taken_0x21e3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3A4u;
        // 0x21e3a8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3a4) {
            ctx->pc = 0x21E410u;
            goto label_21e410;
        }
    }
    ctx->pc = 0x21E3ACu;
    // 0x21e3ac: 0xc0821d0  jal         func_208740
    ctx->pc = 0x21E3ACu;
    SET_GPR_U32(ctx, 31, 0x21E3B4u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x21E3ACu, 0x21E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3B4u;
label_21e3b4:
    // 0x21e3b4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21E3B4u;
    {
        const bool branch_taken_0x21e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3B4u;
        // 0x21e3b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3b4) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E3BCu;
    // 0x21e3bc: 0xc0bc3ca  jal         func_2F0F28
    ctx->pc = 0x21E3BCu;
    SET_GPR_U32(ctx, 31, 0x21E3C4u);
    ctx->pc = 0x2F0F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F28u, 0x21E3BCu, 0x21E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E3C4u;
label_21e3c4:
    // 0x21e3c4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x21e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21e3c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e3cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E3CCu;
    {
        const bool branch_taken_0x21e3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e3cc) {
            ctx->pc = 0x21E3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3CCu;
            // 0x21e3d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E3ECu;
            goto label_21e3ec;
        }
    }
    ctx->pc = 0x21E3D4u;
    // 0x21e3d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x21e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21e3d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21e3e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E3E0u;
    {
        const bool branch_taken_0x21e3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e3e0) {
            ctx->pc = 0x21E3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E3E0u;
            // 0x21e3e4: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E3F8u;
            goto label_21e3f8;
        }
    }
    ctx->pc = 0x21E3E8u;
    // 0x21e3e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_21e3ec:
    // 0x21e3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21e3f4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x21e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x18u));
label_21e3f8:
    // 0x21e3f8: 0x90620051  lbu         $v0, 0x51($v1)
    ctx->pc = 0x21e3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x21e3fc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x21E3FCu;
    {
        const bool branch_taken_0x21e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3FCu;
        // 0x21e400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3fc) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E404u;
    // 0x21e404: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21E404u;
    {
        const bool branch_taken_0x21e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E404u;
        // 0x21e408: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e404) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E40Cu;
    // 0x21e40c: 0x0  nop
    ctx->pc = 0x21e40cu;
    // NOP
label_21e410:
    // 0x21e410: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x21e410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21e414: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E414u;
    {
        const bool branch_taken_0x21e414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E414u;
        // 0x21e418: 0x9203002b  lbu         $v1, 0x2B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e414) {
            ctx->pc = 0x21E430u;
            goto label_21e430;
        }
    }
    ctx->pc = 0x21E41Cu;
    // 0x21e41c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E41Cu;
    {
        const bool branch_taken_0x21e41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x21E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E41Cu;
        // 0x21e420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e41c) {
            ctx->pc = 0x21E434u;
            goto label_21e434;
        }
    }
    ctx->pc = 0x21E424u;
    // 0x21e424: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x21E424u;
    {
        const bool branch_taken_0x21e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E424u;
        // 0x21e428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e424) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E42Cu;
    // 0x21e42c: 0x0  nop
    ctx->pc = 0x21e42cu;
    // NOP
label_21e430:
    // 0x21e430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21e434:
    // 0x21e434: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E434u;
    {
        const bool branch_taken_0x21e434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e434) {
            ctx->pc = 0x21E438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E434u;
            // 0x21e438: 0x92020030  lbu         $v0, 0x30($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E450u;
            goto label_21e450;
        }
    }
    ctx->pc = 0x21E43Cu;
    // 0x21e43c: 0xc085114  jal         func_214450
    ctx->pc = 0x21E43Cu;
    SET_GPR_U32(ctx, 31, 0x21E444u);
    ctx->pc = 0x214450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214450u, 0x21E43Cu, 0x21E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E444u;
label_21e444:
    // 0x21e444: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E444u;
    {
        const bool branch_taken_0x21e444 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E444u;
        // 0x21e448: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e444) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E44Cu;
    // 0x21e44c: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x21e44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_21e450:
    // 0x21e450: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21E450u;
    {
        const bool branch_taken_0x21e450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E450u;
        // 0x21e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e450) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E458u;
    // 0x21e458: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x21e458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21e45c: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21E45Cu;
    {
        const bool branch_taken_0x21e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x21E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E45Cu;
        // 0x21e460: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e45c) {
            ctx->pc = 0x21E4C0u;
            goto label_21e4c0;
        }
    }
    ctx->pc = 0x21E464u;
    // 0x21e464: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21e468: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21e468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21e46c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e470: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x21e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x21e474: 0x906401bc  lbu         $a0, 0x1BC($v1)
    ctx->pc = 0x21e474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x21e478: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21E478u;
    {
        const bool branch_taken_0x21e478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E478u;
        // 0x21e47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e478) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E480u;
    // 0x21e480: 0x26438858  addiu       $v1, $s2, -0x77A8
    ctx->pc = 0x21e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936664));
    // 0x21e484: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21e488: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x21e488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21e48c: 0x5044000c  beql        $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E48Cu;
    {
        const bool branch_taken_0x21e48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x21e48c) {
            ctx->pc = 0x21E490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E48Cu;
            // 0x21e490: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E4C0u;
            goto label_21e4c0;
        }
    }
    ctx->pc = 0x21E494u;
    // 0x21e494: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21e498: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E498u;
    {
        const bool branch_taken_0x21e498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E498u;
        // 0x21e49c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e498) {
            ctx->pc = 0x21E4BCu;
            goto label_21e4bc;
        }
    }
    ctx->pc = 0x21E4A0u;
    // 0x21e4a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E4A0u;
    {
        const bool branch_taken_0x21e4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A0u;
        // 0x21e4a4: 0x26638858  addiu       $v1, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4a0) {
            ctx->pc = 0x21E4C0u;
            goto label_21e4c0;
        }
    }
    ctx->pc = 0x21E4A8u;
    // 0x21e4a8: 0xc0821d0  jal         func_208740
    ctx->pc = 0x21E4A8u;
    SET_GPR_U32(ctx, 31, 0x21E4B0u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x21E4A8u, 0x21E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4B0u;
label_21e4b0:
    // 0x21e4b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e4b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e4b8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x21e4b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_21e4bc:
    // 0x21e4bc: 0x26638858  addiu       $v1, $s3, -0x77A8
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_21e4c0:
    // 0x21e4c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21e4c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e4c4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21e4c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e4d0: 0x38840012  xori        $a0, $a0, 0x12
    ctx->pc = 0x21e4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)18);
    // 0x21e4d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e4dc: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x21e4dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21e4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4E4u;
        // 0x21e4e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E4ECu;
    // 0x21e4ec: 0x0  nop
    ctx->pc = 0x21e4ecu;
    // NOP
    ctx->pc = 0x21e4f0u;
}
