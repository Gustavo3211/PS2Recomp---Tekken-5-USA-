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

// Function: sub_002A19C8
// Address: 0x2a19c8 - 0x2a1e70
void sub_002A19C8_0x2a19c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A19C8_0x2a19c8");
#endif

    switch (ctx->pc) {
        case 0x2a1a30u: goto label_2a1a30;
        case 0x2a1a90u: goto label_2a1a90;
        case 0x2a1aa4u: goto label_2a1aa4;
        case 0x2a1ae8u: goto label_2a1ae8;
        case 0x2a1af4u: goto label_2a1af4;
        case 0x2a1b50u: goto label_2a1b50;
        case 0x2a1be8u: goto label_2a1be8;
        case 0x2a1c28u: goto label_2a1c28;
        case 0x2a1c44u: goto label_2a1c44;
        case 0x2a1c7cu: goto label_2a1c7c;
        case 0x2a1c9cu: goto label_2a1c9c;
        case 0x2a1cb0u: goto label_2a1cb0;
        case 0x2a1cd8u: goto label_2a1cd8;
        case 0x2a1cf4u: goto label_2a1cf4;
        case 0x2a1d24u: goto label_2a1d24;
        case 0x2a1d44u: goto label_2a1d44;
        case 0x2a1d60u: goto label_2a1d60;
        case 0x2a1db0u: goto label_2a1db0;
        case 0x2a1e08u: goto label_2a1e08;
        case 0x2a1e1cu: goto label_2a1e1c;
        default: break;
    }

    ctx->pc = 0x2a19c8u;

    // 0x2a19c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a19cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2a19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2a19d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a19d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a19d8: 0x26a40158  addiu       $a0, $s5, 0x158
    ctx->pc = 0x2a19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 344));
    // 0x2a19dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a19dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a19e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a19e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a19e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2a19e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2a19e8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2a19e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2a19ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2a19ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2a19f0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2a19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2a19f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2a19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2a19f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2a19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2a19fc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a19fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a1a00: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1A00u;
    {
        const bool branch_taken_0x2a1a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a00) {
            ctx->pc = 0x2A1A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A00u;
            // 0x2a1a04: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A1Cu;
            goto label_2a1a1c;
        }
    }
    ctx->pc = 0x2A1A08u;
    // 0x2a1a08: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a1a0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1a10: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1A10u;
    {
        const bool branch_taken_0x2a1a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A10u;
        // 0x2a1a14: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a10) {
            ctx->pc = 0x2A1A24u;
            goto label_2a1a24;
        }
    }
    ctx->pc = 0x2A1A18u;
    // 0x2a1a18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2a1a1c:
    // 0x2a1a1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a1a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2a1a24:
    // 0x2a1a24: 0x8eb1016c  lw          $s1, 0x16C($s5)
    ctx->pc = 0x2a1a24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
    // 0x2a1a28: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a1a28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a2c: 0x0  nop
    ctx->pc = 0x2a1a2cu;
    // NOP
label_2a1a30:
    // 0x2a1a30: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2a1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a1a34: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a1a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a1a38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a1a3c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2a1a40: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1a44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a1a48: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a1a4c: 0x82230020  lb          $v1, 0x20($s1)
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a1a50: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2a1a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a1a54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1A54u;
    {
        const bool branch_taken_0x2a1a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a54) {
            ctx->pc = 0x2A1A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A54u;
            // 0x2a1a58: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A78u;
            goto label_2a1a78;
        }
    }
    ctx->pc = 0x2A1A5Cu;
    // 0x2a1a5c: 0x5c600016  bgtzl       $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A1A5Cu;
    {
        const bool branch_taken_0x2a1a5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2a1a5c) {
            ctx->pc = 0x2A1A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A5Cu;
            // 0x2a1a60: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1AB8u;
            goto label_2a1ab8;
        }
    }
    ctx->pc = 0x2A1A64u;
    // 0x2a1a64: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1A64u;
    {
        const bool branch_taken_0x2a1a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a64) {
            ctx->pc = 0x2A1A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A64u;
            // 0x2a1a68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A88u;
            goto label_2a1a88;
        }
    }
    ctx->pc = 0x2A1A6Cu;
    // 0x2a1a6c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2A1A6Cu;
    {
        const bool branch_taken_0x2a1a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A6Cu;
        // 0x2a1a70: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a6c) {
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1A74u;
    // 0x2a1a74: 0x0  nop
    ctx->pc = 0x2a1a74u;
    // NOP
label_2a1a78:
    // 0x2a1a78: 0x506200d9  beql        $v1, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2A1A78u;
    {
        const bool branch_taken_0x2a1a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1a78) {
            ctx->pc = 0x2A1A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A78u;
            // 0x2a1a7c: 0x8ea3016c  lw          $v1, 0x16C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1DE0u;
            goto label_2a1de0;
        }
    }
    ctx->pc = 0x2A1A80u;
    // 0x2a1a80: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x2A1A80u;
    {
        const bool branch_taken_0x2a1a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A80u;
        // 0x2a1a84: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a80) {
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1A88u;
label_2a1a88:
    // 0x2a1a88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a1a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a8c: 0x0  nop
    ctx->pc = 0x2a1a8cu;
    // NOP
label_2a1a90:
    // 0x2a1a90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1a94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a9c: 0xc0a87ca  jal         func_2A1F28
    ctx->pc = 0x2A1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1AA4u);
    ctx->pc = 0x2A1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1A9Cu;
    // 0x2a1aa0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F28u, 0x2A1A9Cu, 0x2A1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA4u;
label_2a1aa4:
    // 0x2a1aa4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2a1aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1aa8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A1AA8u;
    {
        const bool branch_taken_0x2a1aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AA8u;
        // 0x2a1aac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1aa8) {
            ctx->pc = 0x2A1A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1a90;
        }
    }
    ctx->pc = 0x2A1AB0u;
    // 0x2a1ab0: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2A1AB0u;
    {
        const bool branch_taken_0x2a1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AB0u;
        // 0x2a1ab4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ab0) {
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1AB8u;
label_2a1ab8:
    // 0x2a1ab8: 0x18800041  blez        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2A1AB8u;
    {
        const bool branch_taken_0x2a1ab8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AB8u;
        // 0x2a1abc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ab8) {
            ctx->pc = 0x2A1BC0u;
            goto label_2a1bc0;
        }
    }
    ctx->pc = 0x2A1AC0u;
    // 0x2a1ac0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2a1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2a1ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1ac8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2A1AC8u;
    {
        const bool branch_taken_0x2a1ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AC8u;
        // 0x2a1acc: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ac8) {
            ctx->pc = 0x2A1BC0u;
            goto label_2a1bc0;
        }
    }
    ctx->pc = 0x2A1AD0u;
    // 0x2a1ad0: 0x26630008  addiu       $v1, $s3, 0x8
    ctx->pc = 0x2a1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a1ad4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2a1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2a1ad8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1adc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2a1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2a1ae0: 0x26340008  addiu       $s4, $s1, 0x8
    ctx->pc = 0x2a1ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a1ae4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2a1ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2a1ae8:
    // 0x2a1ae8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2a1ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a1aec: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A1AECu;
    SET_GPR_U32(ctx, 31, 0x2A1AF4u);
    ctx->pc = 0x2A1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AECu;
    // 0x2a1af0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A1AECu, 0x2A1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AF4u;
label_2a1af4:
    // 0x2a1af4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1af8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2a1af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1afc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1b00: 0x2463c9a8  addiu       $v1, $v1, -0x3658
    ctx->pc = 0x2a1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953384));
    // 0x2a1b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1b0c: 0x2a030017  slti        $v1, $s0, 0x17
    ctx->pc = 0x2a1b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2a1b10: 0x2a050019  slti        $a1, $s0, 0x19
    ctx->pc = 0x2a1b10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x2a1b14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1B14u;
    {
        const bool branch_taken_0x2a1b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B14u;
        // 0x2a1b18: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b14) {
            ctx->pc = 0x2A1B38u;
            goto label_2a1b38;
        }
    }
    ctx->pc = 0x2A1B1Cu;
    // 0x2a1b1c: 0x54a0000d  bnel        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1B1Cu;
    {
        const bool branch_taken_0x2a1b1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b1c) {
            ctx->pc = 0x2A1B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1B1Cu;
            // 0x2a1b20: 0x8e6400fc  lw          $a0, 0xFC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1B54u;
            goto label_2a1b54;
        }
    }
    ctx->pc = 0x2A1B24u;
    // 0x2a1b24: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2a1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a1b28: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1B28u;
    {
        const bool branch_taken_0x2a1b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B28u;
        // 0x2a1b2c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b28) {
            ctx->pc = 0x2A1B3Cu;
            goto label_2a1b3c;
        }
    }
    ctx->pc = 0x2A1B30u;
    // 0x2a1b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1B30u;
    {
        const bool branch_taken_0x2a1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B30u;
        // 0x2a1b34: 0x8e6400f8  lw          $a0, 0xF8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b30) {
            ctx->pc = 0x2A1B54u;
            goto label_2a1b54;
        }
    }
    ctx->pc = 0x2A1B38u;
label_2a1b38:
    // 0x2a1b38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2a1b3c:
    // 0x2a1b3c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a1b40: 0x2463c920  addiu       $v1, $v1, -0x36E0
    ctx->pc = 0x2a1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953248));
    // 0x2a1b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1b48: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1B48u;
    SET_GPR_U32(ctx, 31, 0x2A1B50u);
    ctx->pc = 0x2A1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B48u;
    // 0x2a1b4c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1B48u, 0x2A1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B50u;
label_2a1b50:
    // 0x2a1b50: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_2a1b54:
    // 0x2a1b54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a1b58: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2a1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a1b5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1b60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a1b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a1b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1b70: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2a1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2a1b74: 0x2a450008  slti        $a1, $s2, 0x8
    ctx->pc = 0x2a1b74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1b78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1b7c: 0x2143021  addu        $a2, $s0, $s4
    ctx->pc = 0x2a1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2a1b80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1b84: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x2a1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x2a1b88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a1b8c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1b90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a1b94: 0x10a000a5  beqz        $a1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A1B94u;
    {
        const bool branch_taken_0x2a1b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B94u;
        // 0x2a1b98: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1b94) {
            ctx->pc = 0x2A1E2Cu;
            goto label_2a1e2c;
        }
    }
    ctx->pc = 0x2A1B9Cu;
    // 0x2a1b9c: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2a1b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a1ba0: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2a1ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1ba4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1BA4u;
    {
        const bool branch_taken_0x2a1ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BA4u;
        // 0x2a1ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ba4) {
            ctx->pc = 0x2A1BC4u;
            goto label_2a1bc4;
        }
    }
    ctx->pc = 0x2A1BACu;
    // 0x2a1bac: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x2a1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a1bb0: 0x5462ffcd  bnel        $v1, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2A1BB0u;
    {
        const bool branch_taken_0x2a1bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1bb0) {
            ctx->pc = 0x2A1BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1BB0u;
            // 0x2a1bb4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1ae8;
        }
    }
    ctx->pc = 0x2A1BB8u;
    // 0x2a1bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1BB8u;
    {
        const bool branch_taken_0x2a1bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1bb8) {
            ctx->pc = 0x2A1BC4u;
            goto label_2a1bc4;
        }
    }
    ctx->pc = 0x2A1BC0u;
label_2a1bc0:
    // 0x2a1bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1bc4:
    // 0x2a1bc4: 0x10a00099  beqz        $a1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2A1BC4u;
    {
        const bool branch_taken_0x2a1bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BC4u;
        // 0x2a1bc8: 0x244102a  slt         $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bc4) {
            ctx->pc = 0x2A1E2Cu;
            goto label_2a1e2c;
        }
    }
    ctx->pc = 0x2A1BCCu;
    // 0x2a1bcc: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2A1BCCu;
    {
        const bool branch_taken_0x2a1bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BCCu;
        // 0x2a1bd0: 0x26620008  addiu       $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bcc) {
            ctx->pc = 0x2A1DA0u;
            goto label_2a1da0;
        }
    }
    ctx->pc = 0x2A1BD4u;
    // 0x2a1bd4: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x2a1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x2a1bd8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2a1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2a1bdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a1bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a1be0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2a1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2a1be4: 0x0  nop
    ctx->pc = 0x2a1be4u;
    // NOP
label_2a1be8:
    // 0x2a1be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1bec: 0x50620049  beql        $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A1BECu;
    {
        const bool branch_taken_0x2a1bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1bec) {
            ctx->pc = 0x2A1BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1BECu;
            // 0x2a1bf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D14u;
            goto label_2a1d14;
        }
    }
    ctx->pc = 0x2A1BF4u;
    // 0x2a1bf4: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A1BF4u;
    {
        const bool branch_taken_0x2a1bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1bf4) {
            ctx->pc = 0x2A1BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1BF4u;
            // 0x2a1bf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D14u;
            goto label_2a1d14;
        }
    }
    ctx->pc = 0x2A1BFCu;
    // 0x2a1bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1c00: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2A1C00u;
    {
        const bool branch_taken_0x2a1c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C00u;
        // 0x2a1c04: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c00) {
            ctx->pc = 0x2A1CB8u;
            goto label_2a1cb8;
        }
    }
    ctx->pc = 0x2A1C08u;
    // 0x2a1c08: 0x56430042  bnel        $s2, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A1C08u;
    {
        const bool branch_taken_0x2a1c08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1c08) {
            ctx->pc = 0x2A1C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1C08u;
            // 0x2a1c0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1D14u;
            goto label_2a1d14;
        }
    }
    ctx->pc = 0x2A1C10u;
    // 0x2a1c10: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a1c14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c18: 0x26340008  addiu       $s4, $s1, 0x8
    ctx->pc = 0x2a1c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a1c1c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x2a1c1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1C20u;
    {
        const bool branch_taken_0x2a1c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C20u;
        // 0x2a1c24: 0x2457c9a8  addiu       $s7, $v0, -0x3658 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c20) {
            ctx->pc = 0x2A1C2Cu;
            goto label_2a1c2c;
        }
    }
    ctx->pc = 0x2A1C28u;
label_2a1c28:
    // 0x2a1c28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a1c2c:
    // 0x2a1c2c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2a1c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1c30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1C30u;
    {
        const bool branch_taken_0x2a1c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C30u;
        // 0x2a1c34: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c30) {
            ctx->pc = 0x2A1C64u;
            goto label_2a1c64;
        }
    }
    ctx->pc = 0x2A1C38u;
    // 0x2a1c38: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a1c3c: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1C44u);
    ctx->pc = 0x2A1C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C3Cu;
    // 0x2a1c40: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A1C3Cu, 0x2A1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C44u;
label_2a1c44:
    // 0x2a1c44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a1c48: 0x3843001f  xori        $v1, $v0, 0x1F
    ctx->pc = 0x2a1c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2a1c4c: 0x3c3100a  movz        $v0, $fp, $v1
    ctx->pc = 0x2a1c4cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x2a1c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1c54: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2a1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2a1c58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1c5c: 0x1483fff2  bne         $a0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A1C5Cu;
    {
        const bool branch_taken_0x2a1c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C5Cu;
        // 0x2a1c60: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c5c) {
            ctx->pc = 0x2A1C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1c28;
        }
    }
    ctx->pc = 0x2A1C64u;
label_2a1c64:
    // 0x2a1c64: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1C64u;
    {
        const bool branch_taken_0x2a1c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C64u;
        // 0x2a1c68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c64) {
            ctx->pc = 0x2A1C88u;
            goto label_2a1c88;
        }
    }
    ctx->pc = 0x2A1C6Cu;
    // 0x2a1c6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c74: 0xc0a87ca  jal         func_2A1F28
    ctx->pc = 0x2A1C74u;
    SET_GPR_U32(ctx, 31, 0x2A1C7Cu);
    ctx->pc = 0x2A1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C74u;
    // 0x2a1c78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F28u, 0x2A1C74u, 0x2A1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C7Cu;
label_2a1c7c:
    // 0x2a1c7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1C7Cu;
    {
        const bool branch_taken_0x2a1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C7Cu;
        // 0x2a1c80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c7c) {
            ctx->pc = 0x2A1CA0u;
            goto label_2a1ca0;
        }
    }
    ctx->pc = 0x2A1C84u;
    // 0x2a1c84: 0x0  nop
    ctx->pc = 0x2a1c84u;
    // NOP
label_2a1c88:
    // 0x2a1c88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a1c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c90: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a1c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c94: 0xc0a87e4  jal         func_2A1F90
    ctx->pc = 0x2A1C94u;
    SET_GPR_U32(ctx, 31, 0x2A1C9Cu);
    ctx->pc = 0x2A1C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C94u;
    // 0x2a1c98: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F90u, 0x2A1C94u, 0x2A1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C9Cu;
label_2a1c9c:
    // 0x2a1c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a1ca0:
    // 0x2a1ca0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ca4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ca8: 0xc0a879c  jal         func_2A1E70
    ctx->pc = 0x2A1CA8u;
    SET_GPR_U32(ctx, 31, 0x2A1CB0u);
    ctx->pc = 0x2A1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CA8u;
    // 0x2a1cac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1E70u, 0x2A1CA8u, 0x2A1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CB0u;
label_2a1cb0:
    // 0x2a1cb0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2A1CB0u;
    {
        const bool branch_taken_0x2a1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CB0u;
        // 0x2a1cb4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cb0) {
            ctx->pc = 0x2A1D64u;
            goto label_2a1d64;
        }
    }
    ctx->pc = 0x2A1CB8u;
label_2a1cb8:
    // 0x2a1cb8: 0x16430025  bne         $s2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A1CB8u;
    {
        const bool branch_taken_0x2a1cb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CB8u;
        // 0x2a1cbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1cb8) {
            ctx->pc = 0x2A1D50u;
            goto label_2a1d50;
        }
    }
    ctx->pc = 0x2A1CC0u;
    // 0x2a1cc0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a1cc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1cc8: 0x2457c9a8  addiu       $s7, $v0, -0x3658
    ctx->pc = 0x2a1cc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953384));
    // 0x2a1ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1CCCu;
    {
        const bool branch_taken_0x2a1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CCCu;
        // 0x2a1cd0: 0x26340008  addiu       $s4, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ccc) {
            ctx->pc = 0x2A1CDCu;
            goto label_2a1cdc;
        }
    }
    ctx->pc = 0x2A1CD4u;
    // 0x2a1cd4: 0x0  nop
    ctx->pc = 0x2a1cd4u;
    // NOP
label_2a1cd8:
    // 0x2a1cd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a1cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a1cdc:
    // 0x2a1cdc: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2a1cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1ce0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1CE0u;
    {
        const bool branch_taken_0x2a1ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CE0u;
        // 0x2a1ce4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ce0) {
            ctx->pc = 0x2A1D0Cu;
            goto label_2a1d0c;
        }
    }
    ctx->pc = 0x2A1CE8u;
    // 0x2a1ce8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a1cec: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2A1CECu;
    SET_GPR_U32(ctx, 31, 0x2A1CF4u);
    ctx->pc = 0x2A1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CECu;
    // 0x2a1cf0: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2A1CECu, 0x2A1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CF4u;
label_2a1cf4:
    // 0x2a1cf4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a1cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1cfc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2a1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2a1d00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1d04: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A1D04u;
    {
        const bool branch_taken_0x2a1d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D04u;
        // 0x2a1d08: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d04) {
            ctx->pc = 0x2A1CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1cd8;
        }
    }
    ctx->pc = 0x2A1D0Cu;
label_2a1d0c:
    // 0x2a1d0c: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1D0Cu;
    {
        const bool branch_taken_0x2a1d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D0Cu;
        // 0x2a1d10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d0c) {
            ctx->pc = 0x2A1D30u;
            goto label_2a1d30;
        }
    }
    ctx->pc = 0x2A1D14u;
label_2a1d14:
    // 0x2a1d14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d18: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d1c: 0xc0a87ca  jal         func_2A1F28
    ctx->pc = 0x2A1D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D24u);
    ctx->pc = 0x2A1D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D1Cu;
    // 0x2a1d20: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F28u, 0x2A1D1Cu, 0x2A1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D24u;
label_2a1d24:
    // 0x2a1d24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1D24u;
    {
        const bool branch_taken_0x2a1d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D24u;
        // 0x2a1d28: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d24) {
            ctx->pc = 0x2A1D64u;
            goto label_2a1d64;
        }
    }
    ctx->pc = 0x2A1D2Cu;
    // 0x2a1d2c: 0x0  nop
    ctx->pc = 0x2a1d2cu;
    // NOP
label_2a1d30:
    // 0x2a1d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a1d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d38: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a1d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d3c: 0xc0a87e4  jal         func_2A1F90
    ctx->pc = 0x2A1D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D44u);
    ctx->pc = 0x2A1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D3Cu;
    // 0x2a1d40: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F90u, 0x2A1D3Cu, 0x2A1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D44u;
label_2a1d44:
    // 0x2a1d44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1D44u;
    {
        const bool branch_taken_0x2a1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D44u;
        // 0x2a1d48: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d44) {
            ctx->pc = 0x2A1D64u;
            goto label_2a1d64;
        }
    }
    ctx->pc = 0x2A1D4Cu;
    // 0x2a1d4c: 0x0  nop
    ctx->pc = 0x2a1d4cu;
    // NOP
label_2a1d50:
    // 0x2a1d50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a1d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d58: 0xc0a87ca  jal         func_2A1F28
    ctx->pc = 0x2A1D58u;
    SET_GPR_U32(ctx, 31, 0x2A1D60u);
    ctx->pc = 0x2A1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D58u;
    // 0x2a1d5c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F28u, 0x2A1D58u, 0x2A1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D60u;
label_2a1d60:
    // 0x2a1d60: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2a1d64:
    // 0x2a1d64: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a1d68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1d6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1d70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1d74: 0x2a450008  slti        $a1, $s2, 0x8
    ctx->pc = 0x2a1d74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1d7c: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2a1d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2a1d80: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2a1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1d84: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2a1d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2a1d88: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A1D88u;
    {
        const bool branch_taken_0x2a1d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D88u;
        // 0x2a1d8c: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d88) {
            ctx->pc = 0x2A1E2Cu;
            goto label_2a1e2c;
        }
    }
    ctx->pc = 0x2A1D90u;
    // 0x2a1d90: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2a1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a1d94: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a1d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1d98: 0x5440ff93  bnel        $v0, $zero, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2A1D98u;
    {
        const bool branch_taken_0x2a1d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d98) {
            ctx->pc = 0x2A1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1D98u;
            // 0x2a1d9c: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1be8;
        }
    }
    ctx->pc = 0x2A1DA0u;
label_2a1da0:
    // 0x2a1da0: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A1DA0u;
    {
        const bool branch_taken_0x2a1da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DA0u;
        // 0x2a1da4: 0x1638c0  sll         $a3, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1da0) {
            ctx->pc = 0x2A1E2Cu;
            goto label_2a1e2c;
        }
    }
    ctx->pc = 0x2A1DA8u;
    // 0x2a1da8: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x2a1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a1dac: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a1dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2a1db0:
    // 0x2a1db0: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2a1db4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a1dbc: 0x2a450008  slti        $a1, $s2, 0x8
    ctx->pc = 0x2a1dbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1dc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a1dc4: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x2a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2a1dc8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a1dcc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a1dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a1dd0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A1DD0u;
    {
        const bool branch_taken_0x2a1dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DD0u;
        // 0x2a1dd4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dd0) {
            ctx->pc = 0x2A1DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1db0;
        }
    }
    ctx->pc = 0x2A1DD8u;
    // 0x2a1dd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1DD8u;
    {
        const bool branch_taken_0x2a1dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DD8u;
        // 0x2a1ddc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dd8) {
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1DE0u;
label_2a1de0:
    // 0x2a1de0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2a1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a1de4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a1de8: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1DE8u;
    {
        const bool branch_taken_0x2a1de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1de8) {
            ctx->pc = 0x2A1DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1DE8u;
            // 0x2a1dec: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1DF0u;
    // 0x2a1df0: 0x8e320040  lw          $s2, 0x40($s1)
    ctx->pc = 0x2a1df0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a1df4: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x2a1df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1df8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1DF8u;
    {
        const bool branch_taken_0x2a1df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1df8) {
            ctx->pc = 0x2A1DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1DF8u;
            // 0x2a1dfc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E30u;
            goto label_2a1e30;
        }
    }
    ctx->pc = 0x2A1E00u;
    // 0x2a1e00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a1e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e04: 0x0  nop
    ctx->pc = 0x2a1e04u;
    // NOP
label_2a1e08:
    // 0x2a1e08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a1e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a1e0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a1e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e14: 0xc0a87dc  jal         func_2A1F70
    ctx->pc = 0x2A1E14u;
    SET_GPR_U32(ctx, 31, 0x2A1E1Cu);
    ctx->pc = 0x2A1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E14u;
    // 0x2a1e18: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F70u, 0x2A1E14u, 0x2A1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E1Cu;
label_2a1e1c:
    // 0x2a1e1c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2a1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2a1e20: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a1e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a1e24: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A1E24u;
    {
        const bool branch_taken_0x2a1e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E24u;
        // 0x2a1e28: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e24) {
            ctx->pc = 0x2A1E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1e08;
        }
    }
    ctx->pc = 0x2A1E2Cu;
label_2a1e2c:
    // 0x2a1e2c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a1e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2a1e30:
    // 0x2a1e30: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x2a1e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1e34: 0x1440fefe  bnez        $v0, . + 4 + (-0x102 << 2)
    ctx->pc = 0x2A1E34u;
    {
        const bool branch_taken_0x2a1e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E34u;
        // 0x2a1e38: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e34) {
            ctx->pc = 0x2A1A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1a30;
        }
    }
    ctx->pc = 0x2A1E3Cu;
    // 0x2a1e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a1e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a1e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1e48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2a1e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a1e4c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1e50: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2a1e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a1e54: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2a1e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1e58: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2a1e58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a1e5c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2a1e5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1e60: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2a1e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a1e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E64u;
        // 0x2a1e68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1E6Cu;
    // 0x2a1e6c: 0x0  nop
    ctx->pc = 0x2a1e6cu;
    // NOP
    ctx->pc = 0x2a1e70u;
}
