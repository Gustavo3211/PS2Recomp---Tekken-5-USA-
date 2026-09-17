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

// Function: sub_002B7420
// Address: 0x2b7420 - 0x2b75e8
void sub_002B7420_0x2b7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7420_0x2b7420");
#endif

    switch (ctx->pc) {
        case 0x2b7460u: goto label_2b7460;
        case 0x2b74f8u: goto label_2b74f8;
        case 0x2b7598u: goto label_2b7598;
        default: break;
    }

    ctx->pc = 0x2b7420u;

    // 0x2b7420: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b7420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7424: 0x8cc7002c  lw          $a3, 0x2C($a2)
    ctx->pc = 0x2b7424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2b7428: 0x8cc50030  lw          $a1, 0x30($a2)
    ctx->pc = 0x2b7428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2b742c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b7430: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7434u;
    {
        const bool branch_taken_0x2b7434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7434) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B743Cu;
    // 0x2b743c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2b743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7440: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7444: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7444u;
    {
        const bool branch_taken_0x2b7444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7444) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B744Cu;
    // 0x2b744c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B744Cu;
    {
        const bool branch_taken_0x2b744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B744Cu;
        // 0x2b7450: 0x8cc80028  lw          $t0, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b744c) {
            ctx->pc = 0x2B7468u;
            goto label_2b7468;
        }
    }
    ctx->pc = 0x2B7454u;
    // 0x2b7454: 0x0  nop
    ctx->pc = 0x2b7454u;
    // NOP
label_2b7458:
    // 0x2b7458: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7458u;
        // 0x2b745c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7460u;
label_2b7460:
    // 0x2b7460: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x2b7460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x2b7464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7468:
    // 0x2b7468: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2b7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2b746c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7470: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b7470u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7474: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7474u;
    {
        const bool branch_taken_0x2b7474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7474u;
        // 0x2b7478: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7474) {
            ctx->pc = 0x2B7490u;
            goto label_2b7490;
        }
    }
    ctx->pc = 0x2B747Cu;
    // 0x2b747c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2b747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b7480: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7484: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B7484u;
    {
        const bool branch_taken_0x2b7484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7484) {
            ctx->pc = 0x2B7488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7484u;
            // 0x2b7488: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7460;
        }
    }
    ctx->pc = 0x2B748Cu;
    // 0x2b748c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b7490:
    // 0x2b7490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7494: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7494u;
        // 0x2b7498: 0xacc30030  sw          $v1, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B749Cu;
    // 0x2b749c: 0x0  nop
    ctx->pc = 0x2b749cu;
    // NOP
    // 0x2b74a0: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2b74a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b74a4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2b74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b74a8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2b74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2b74ac: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x2b74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2b74b0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2b74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2b74b4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b74b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b74b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B74B8u;
    {
        const bool branch_taken_0x2b74b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b74b8) {
            ctx->pc = 0x2B74BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B74B8u;
            // 0x2b74bc: 0x8c860030  lw          $a2, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B74CCu;
            goto label_2b74cc;
        }
    }
    ctx->pc = 0x2B74C0u;
    // 0x2b74c0: 0x24c2fff9  addiu       $v0, $a2, -0x7
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    // 0x2b74c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2b74c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2b74c8: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2b74c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2b74cc:
    // 0x2b74cc: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x2b74ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b74d0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2b74d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2b74d4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B74D4u;
    {
        const bool branch_taken_0x2b74d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b74d4) {
            ctx->pc = 0x2B74D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B74D4u;
            // 0x2b74d8: 0xac870030  sw          $a3, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7554u;
            goto label_2b7554;
        }
    }
    ctx->pc = 0x2B74DCu;
    // 0x2b74dc: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x2b74dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b74e0: 0x240d0064  addiu       $t5, $zero, 0x64
    ctx->pc = 0x2b74e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b74e4: 0x240c0072  addiu       $t4, $zero, 0x72
    ctx->pc = 0x2b74e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2b74e8: 0x240b0061  addiu       $t3, $zero, 0x61
    ctx->pc = 0x2b74e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2b74ec: 0x240a0077  addiu       $t2, $zero, 0x77
    ctx->pc = 0x2b74ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2b74f0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2b74f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74f4: 0x0  nop
    ctx->pc = 0x2b74f4u;
    // NOP
label_2b74f8:
    // 0x2b74f8: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x2b74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2b74fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2b74fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7500: 0x144d000b  bne         $v0, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B7530u;
            goto label_2b7530;
        }
    }
    ctx->pc = 0x2B7508u;
    // 0x2b7508: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2b750c: 0x144c0008  bne         $v0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B750Cu;
    {
        const bool branch_taken_0x2b750c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x2b750c) {
            ctx->pc = 0x2B7530u;
            goto label_2b7530;
        }
    }
    ctx->pc = 0x2B7514u;
    // 0x2b7514: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x2b7514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b7518: 0x144b0005  bne         $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7518u;
    {
        const bool branch_taken_0x2b7518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2b7518) {
            ctx->pc = 0x2B7530u;
            goto label_2b7530;
        }
    }
    ctx->pc = 0x2B7520u;
    // 0x2b7520: 0x80620003  lb          $v0, 0x3($v1)
    ctx->pc = 0x2b7520u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2b7524: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2b7528: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x2b7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x2b752c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2b752cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2b7530:
    // 0x2b7530: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7530u;
    {
        const bool branch_taken_0x2b7530 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7530u;
        // 0x2b7534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7530) {
            ctx->pc = 0x2B7558u;
            goto label_2b7558;
        }
    }
    ctx->pc = 0x2B7538u;
    // 0x2b7538: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b753c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7540: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b7540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7544: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x2b7544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2b7548: 0x1060ffeb  beqz        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B7548u;
    {
        const bool branch_taken_0x2b7548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7548u;
        // 0x2b754c: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7548) {
            ctx->pc = 0x2B74F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b74f8;
        }
    }
    ctx->pc = 0x2B7550u;
    // 0x2b7550: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x2b7550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
label_2b7554:
    // 0x2b7554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7558:
    // 0x2b7558: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7560u;
    // 0x2b7560: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b7564: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2b7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b7568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b756c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b7570: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2b7570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2b7574: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b7574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b7578: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7578u;
    {
        const bool branch_taken_0x2b7578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7578) {
            ctx->pc = 0x2B75DCu;
            goto label_2b75dc;
        }
    }
    ctx->pc = 0x2B7580u;
    // 0x2b7580: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b7584: 0x240c0064  addiu       $t4, $zero, 0x64
    ctx->pc = 0x2b7584u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b7588: 0x240b0072  addiu       $t3, $zero, 0x72
    ctx->pc = 0x2b7588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2b758c: 0x240a0061  addiu       $t2, $zero, 0x61
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2b7590: 0x24090077  addiu       $t1, $zero, 0x77
    ctx->pc = 0x2b7590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2b7594: 0x0  nop
    ctx->pc = 0x2b7594u;
    // NOP
label_2b7598:
    // 0x2b7598: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b759c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2b759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2b75a0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2b75a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b75a4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2b75a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b75a8: 0x144c000a  bne         $v0, $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x2B75A8u;
    {
        const bool branch_taken_0x2b75a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x2B75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75A8u;
        // 0x2b75ac: 0xc3382b  sltu        $a3, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75a8) {
            ctx->pc = 0x2B75D4u;
            goto label_2b75d4;
        }
    }
    ctx->pc = 0x2B75B0u;
    // 0x2b75b0: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x2b75b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b75b4: 0x144b0007  bne         $v0, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B75B4u;
    {
        const bool branch_taken_0x2b75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2b75b4) {
            ctx->pc = 0x2B75D4u;
            goto label_2b75d4;
        }
    }
    ctx->pc = 0x2B75BCu;
    // 0x2b75bc: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x2b75bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b75c0: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B75C0u;
    {
        const bool branch_taken_0x2b75c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2b75c0) {
            ctx->pc = 0x2B75D4u;
            goto label_2b75d4;
        }
    }
    ctx->pc = 0x2B75C8u;
    // 0x2b75c8: 0x80a20003  lb          $v0, 0x3($a1)
    ctx->pc = 0x2b75c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b75cc: 0x10490003  beq         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B75CCu;
    {
        const bool branch_taken_0x2b75cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2b75cc) {
            ctx->pc = 0x2B75DCu;
            goto label_2b75dc;
        }
    }
    ctx->pc = 0x2B75D4u;
label_2b75d4:
    // 0x2b75d4: 0x14e0fff0  bnez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B75D4u;
    {
        const bool branch_taken_0x2b75d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75D4u;
        // 0x2b75d8: 0xac860030  sw          $a2, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75d4) {
            ctx->pc = 0x2B7598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7598;
        }
    }
    ctx->pc = 0x2B75DCu;
label_2b75dc:
    // 0x2b75dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B75DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75DCu;
        // 0x2b75e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B75DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B75E4u;
    // 0x2b75e4: 0x0  nop
    ctx->pc = 0x2b75e4u;
    // NOP
    ctx->pc = 0x2b75e8u;
}
