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

// Function: sub_002CE290
// Address: 0x2ce290 - 0x2ce3d0
void sub_002CE290_0x2ce290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE290_0x2ce290");
#endif

    switch (ctx->pc) {
        case 0x2ce2a8u: goto label_2ce2a8;
        case 0x2ce2b0u: goto label_2ce2b0;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2f8u: goto label_2ce2f8;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce370u: goto label_2ce370;
        case 0x2ce3b0u: goto label_2ce3b0;
        default: break;
    }

    ctx->pc = 0x2ce290u;

    // 0x2ce290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce2a0: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x2CE2A0u;
    SET_GPR_U32(ctx, 31, 0x2CE2A8u);
    ctx->pc = 0x2CE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2A0u;
    // 0x2ce2a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x2CE2A0u, 0x2CE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2A8u;
label_2ce2a8:
    // 0x2ce2a8: 0xc08e6d4  jal         func_239B50
    ctx->pc = 0x2CE2A8u;
    SET_GPR_U32(ctx, 31, 0x2CE2B0u);
    ctx->pc = 0x2CE2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2A8u;
    // 0x2ce2ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B50u, 0x2CE2A8u, 0x2CE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2B0u;
label_2ce2b0:
    // 0x2ce2b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce2b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2b4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2ce2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2ce2b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE2B8u;
    {
        const bool branch_taken_0x2ce2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce2b8) {
            ctx->pc = 0x2CE2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE2B8u;
            // 0x2ce2bc: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE2E8u;
            goto label_2ce2e8;
        }
    }
    ctx->pc = 0x2CE2C0u;
    // 0x2ce2c0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CE2C0u;
    SET_GPR_U32(ctx, 31, 0x2CE2C8u);
    ctx->pc = 0x2CE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2C0u;
    // 0x2ce2c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CE2C0u, 0x2CE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2C8u;
label_2ce2c8:
    // 0x2ce2c8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ce2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2ce2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce2d0: 0x4410039  bgez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2CE2D0u;
    {
        const bool branch_taken_0x2ce2d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2D0u;
        // 0x2ce2d4: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2d0) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE2D8u;
    // 0x2ce2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce2dc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2CE2DCu;
    {
        const bool branch_taken_0x2ce2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE2DCu;
        // 0x2ce2e0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2dc) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE2E4u;
    // 0x2ce2e4: 0x0  nop
    ctx->pc = 0x2ce2e4u;
    // NOP
label_2ce2e8:
    // 0x2ce2e8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE2E8u;
    {
        const bool branch_taken_0x2ce2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce2e8) {
            ctx->pc = 0x2CE2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE2E8u;
            // 0x2ce2ec: 0x32220060  andi        $v0, $s1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE318u;
            goto label_2ce318;
        }
    }
    ctx->pc = 0x2CE2F0u;
    // 0x2ce2f0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CE2F0u;
    SET_GPR_U32(ctx, 31, 0x2CE2F8u);
    ctx->pc = 0x2CE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2F0u;
    // 0x2ce2f4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CE2F0u, 0x2CE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2F8u;
label_2ce2f8:
    // 0x2ce2f8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2ce2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2ce2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce300: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x2ce300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ce304: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CE304u;
    {
        const bool branch_taken_0x2ce304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE304u;
        // 0x2ce308: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce304) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE30Cu;
    // 0x2ce30c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CE30Cu;
    {
        const bool branch_taken_0x2ce30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE30Cu;
        // 0x2ce310: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce30c) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE314u;
    // 0x2ce314: 0x0  nop
    ctx->pc = 0x2ce314u;
    // NOP
label_2ce318:
    // 0x2ce318: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CE318u;
    {
        const bool branch_taken_0x2ce318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce318) {
            ctx->pc = 0x2CE31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE318u;
            // 0x2ce31c: 0x32220090  andi        $v0, $s1, 0x90 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)144);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE3A0u;
            goto label_2ce3a0;
        }
    }
    ctx->pc = 0x2CE320u;
    // 0x2ce320: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CE320u;
    SET_GPR_U32(ctx, 31, 0x2CE328u);
    ctx->pc = 0x2CE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE320u;
    // 0x2ce324: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CE320u, 0x2CE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE328u;
label_2ce328:
    // 0x2ce328: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x2ce328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2ce32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce330: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE330u;
    {
        const bool branch_taken_0x2ce330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE330u;
        // 0x2ce334: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce330) {
            ctx->pc = 0x2CE360u;
            goto label_2ce360;
        }
    }
    ctx->pc = 0x2CE338u;
    // 0x2ce338: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE338u;
    {
        const bool branch_taken_0x2ce338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce338) {
            ctx->pc = 0x2CE33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE338u;
            // 0x2ce33c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE350u;
            goto label_2ce350;
        }
    }
    ctx->pc = 0x2CE340u;
    // 0x2ce340: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CE340u;
    {
        const bool branch_taken_0x2ce340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE340u;
        // 0x2ce344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce340) {
            ctx->pc = 0x2CE3B4u;
            goto label_2ce3b4;
        }
    }
    ctx->pc = 0x2CE348u;
    // 0x2ce348: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CE348u;
    {
        const bool branch_taken_0x2ce348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE348u;
        // 0x2ce34c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce348) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CE350u;
    {
        const bool branch_taken_0x2ce350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce350) {
            ctx->pc = 0x2CE354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE350u;
            // 0x2ce354: 0xae110048  sw          $s1, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE358u;
    // 0x2ce358: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CE358u;
    {
        const bool branch_taken_0x2ce358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE358u;
        // 0x2ce35c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce358) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE360u;
label_2ce360:
    // 0x2ce360: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ce360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ce364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce368: 0xc0b3c06  jal         func_2CF018
    ctx->pc = 0x2CE368u;
    SET_GPR_U32(ctx, 31, 0x2CE370u);
    ctx->pc = 0x2CE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE368u;
    // 0x2ce36c: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF018u, 0x2CE368u, 0x2CE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE370u;
label_2ce370:
    // 0x2ce370: 0x2784a854  addiu       $a0, $gp, -0x57AC
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944852));
    // 0x2ce374: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ce374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce378: 0x8c85fffc  lw          $a1, -0x4($a0)
    ctx->pc = 0x2ce378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x2ce37c: 0x8f82cb20  lw          $v0, -0x34E0($gp)
    ctx->pc = 0x2ce37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953760)));
    // 0x2ce380: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x2ce380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x2ce384: 0x30a50060  andi        $a1, $a1, 0x60
    ctx->pc = 0x2ce384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)96);
    // 0x2ce388: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x2ce388u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x2ce38c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE38Cu;
    {
        const bool branch_taken_0x2ce38c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE38Cu;
        // 0x2ce390: 0xaf82cb20  sw          $v0, -0x34E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce38c) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE394u;
    // 0x2ce394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE394u;
    {
        const bool branch_taken_0x2ce394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE394u;
        // 0x2ce398: 0xaf80cb20  sw          $zero, -0x34E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce394) {
            ctx->pc = 0x2CE3B8u;
            goto label_2ce3b8;
        }
    }
    ctx->pc = 0x2CE39Cu;
    // 0x2ce39c: 0x0  nop
    ctx->pc = 0x2ce39cu;
    // NOP
label_2ce3a0:
    // 0x2ce3a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE3A0u;
    {
        const bool branch_taken_0x2ce3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3a0) {
            ctx->pc = 0x2CE3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE3A0u;
            // 0x2ce3a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE3A8u;
    // 0x2ce3a8: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CE3A8u;
    SET_GPR_U32(ctx, 31, 0x2CE3B0u);
    ctx->pc = 0x2CE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE3A8u;
    // 0x2ce3ac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CE3A8u, 0x2CE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3B0u;
label_2ce3b0:
    // 0x2ce3b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce3b4:
    // 0x2ce3b4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ce3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2ce3b8:
    // 0x2ce3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce3bc:
    // 0x2ce3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3C4u;
        // 0x2ce3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE3CCu;
    // 0x2ce3cc: 0x0  nop
    ctx->pc = 0x2ce3ccu;
    // NOP
    ctx->pc = 0x2ce3d0u;
}
