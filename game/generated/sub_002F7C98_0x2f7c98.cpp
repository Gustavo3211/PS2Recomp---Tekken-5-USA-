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

// Function: sub_002F7C98
// Address: 0x2f7c98 - 0x2f7f10
void sub_002F7C98_0x2f7c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C98_0x2f7c98");
#endif

    switch (ctx->pc) {
        case 0x2f7cf0u: goto label_2f7cf0;
        case 0x2f7d00u: goto label_2f7d00;
        case 0x2f7d10u: goto label_2f7d10;
        case 0x2f7d1cu: goto label_2f7d1c;
        case 0x2f7d9cu: goto label_2f7d9c;
        case 0x2f7db4u: goto label_2f7db4;
        case 0x2f7dccu: goto label_2f7dcc;
        case 0x2f7de0u: goto label_2f7de0;
        case 0x2f7df4u: goto label_2f7df4;
        case 0x2f7e08u: goto label_2f7e08;
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e44u: goto label_2f7e44;
        case 0x2f7e58u: goto label_2f7e58;
        case 0x2f7e6cu: goto label_2f7e6c;
        case 0x2f7e80u: goto label_2f7e80;
        case 0x2f7e94u: goto label_2f7e94;
        case 0x2f7ea8u: goto label_2f7ea8;
        case 0x2f7ebcu: goto label_2f7ebc;
        case 0x2f7ec0u: goto label_2f7ec0;
        case 0x2f7edcu: goto label_2f7edc;
        default: break;
    }

    ctx->pc = 0x2f7c98u;

    // 0x2f7c98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f7c9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7ca0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ca4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f7ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f7ca8: 0x26510140  addiu       $s1, $s2, 0x140
    ctx->pc = 0x2f7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2f7cac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f7cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f7cb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f7cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f7cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f7cb8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f7cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cbc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2f7cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2f7cc0: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2f7cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2f7cc4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f7cc8: 0x26430148  addiu       $v1, $s2, 0x148
    ctx->pc = 0x2f7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
    // 0x2f7ccc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f7cd0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2f7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x2f7cd4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2f7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f7cd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f7cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f7cdc: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2f7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2f7ce0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f7ce4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f7ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f7ce8: 0xc0be05e  jal         func_2F8178
    ctx->pc = 0x2F7CE8u;
    SET_GPR_U32(ctx, 31, 0x2F7CF0u);
    ctx->pc = 0x2F7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CE8u;
    // 0x2f7cec: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8178u, 0x2F7CE8u, 0x2F7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CF0u;
label_2f7cf0:
    // 0x2f7cf0: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x2f7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x2f7cf4: 0xc7809514  lwc1        $f0, -0x6AEC($gp)
    ctx->pc = 0x2f7cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7cf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F7CF8u;
    {
        const bool branch_taken_0x2f7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CF8u;
        // 0x2f7cfc: 0xe640013c  swc1        $f0, 0x13C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cf8) {
            ctx->pc = 0x2F7D58u;
            goto label_2f7d58;
        }
    }
    ctx->pc = 0x2F7D00u;
label_2f7d00:
    // 0x2f7d00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f7d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d08: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F7D08u;
    SET_GPR_U32(ctx, 31, 0x2F7D10u);
    ctx->pc = 0x2F7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D08u;
    // 0x2f7d0c: 0x26a51938  addiu       $a1, $s5, 0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F7D08u, 0x2F7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D10u;
label_2f7d10:
    // 0x2f7d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d14: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7D14u;
    SET_GPR_U32(ctx, 31, 0x2F7D1Cu);
    ctx->pc = 0x2F7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D14u;
    // 0x2f7d18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7D14u, 0x2F7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D1Cu;
label_2f7d1c:
    // 0x2f7d1c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x2f7d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2f7d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f7d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f7d28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7D28u;
    {
        const bool branch_taken_0x2f7d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D28u;
        // 0x2f7d2c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d28) {
            ctx->pc = 0x2F7D44u;
            goto label_2f7d44;
        }
    }
    ctx->pc = 0x2F7D30u;
    // 0x2f7d30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f7d3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7D3Cu;
    {
        const bool branch_taken_0x2f7d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D3Cu;
        // 0x2f7d40: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d3c) {
            ctx->pc = 0x2F7D54u;
            goto label_2f7d54;
        }
    }
    ctx->pc = 0x2F7D44u;
label_2f7d44:
    // 0x2f7d44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f7d48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d4c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2f7d50: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2f7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f7d54:
    // 0x2f7d54: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x2f7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 6));
label_2f7d58:
    // 0x2f7d58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f7d5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7D5Cu;
    {
        const bool branch_taken_0x2f7d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d5c) {
            ctx->pc = 0x2F7D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7D5Cu;
            // 0x2f7d60: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7D78u;
            goto label_2f7d78;
        }
    }
    ctx->pc = 0x2F7D64u;
    // 0x2f7d64: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7d68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f7d6c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7D6Cu;
    {
        const bool branch_taken_0x2f7d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D6Cu;
        // 0x2f7d70: 0x2a82000e  slti        $v0, $s4, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d6c) {
            ctx->pc = 0x2F7D80u;
            goto label_2f7d80;
        }
    }
    ctx->pc = 0x2F7D74u;
    // 0x2f7d74: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f7d78:
    // 0x2f7d78: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2f7d7c: 0x2a82000e  slti        $v0, $s4, 0xE
    ctx->pc = 0x2f7d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
label_2f7d80:
    // 0x2f7d80: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2F7D80u;
    {
        const bool branch_taken_0x2f7d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d80) {
            ctx->pc = 0x2F7D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7D80u;
            // 0x2f7d84: 0x26900001  addiu       $s0, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7d00;
        }
    }
    ctx->pc = 0x2F7D88u;
    // 0x2f7d88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7d8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d90: 0x24a51948  addiu       $a1, $a1, 0x1948
    ctx->pc = 0x2f7d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6472));
    // 0x2f7d94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7D94u;
    SET_GPR_U32(ctx, 31, 0x2F7D9Cu);
    ctx->pc = 0x2F7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D94u;
    // 0x2f7d98: 0x2655000c  addiu       $s5, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7D94u, 0x2F7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D9Cu;
label_2f7d9c:
    // 0x2f7d9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7da0: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2f7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x2f7da4: 0x24a51958  addiu       $a1, $a1, 0x1958
    ctx->pc = 0x2f7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6488));
    // 0x2f7da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7DACu;
    SET_GPR_U32(ctx, 31, 0x2F7DB4u);
    ctx->pc = 0x2F7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DACu;
    // 0x2f7db0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7DACu, 0x2F7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DB4u;
label_2f7db4:
    // 0x2f7db4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7db8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x2f7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x2f7dbc: 0x24a51970  addiu       $a1, $a1, 0x1970
    ctx->pc = 0x2f7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
    // 0x2f7dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dc4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7DC4u;
    SET_GPR_U32(ctx, 31, 0x2F7DCCu);
    ctx->pc = 0x2F7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DC4u;
    // 0x2f7dc8: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7DC4u, 0x2F7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DCCu;
label_2f7dcc:
    // 0x2f7dcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7dd0: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x2f7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x2f7dd4: 0x24a51988  addiu       $a1, $a1, 0x1988
    ctx->pc = 0x2f7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6536));
    // 0x2f7dd8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7DD8u;
    SET_GPR_U32(ctx, 31, 0x2F7DE0u);
    ctx->pc = 0x2F7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DD8u;
    // 0x2f7ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7DD8u, 0x2F7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DE0u;
label_2f7de0:
    // 0x2f7de0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7de4: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2f7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2f7de8: 0x24a519a0  addiu       $a1, $a1, 0x19A0
    ctx->pc = 0x2f7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6560));
    // 0x2f7dec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7DECu;
    SET_GPR_U32(ctx, 31, 0x2F7DF4u);
    ctx->pc = 0x2F7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DECu;
    // 0x2f7df0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7DECu, 0x2F7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DF4u;
label_2f7df4:
    // 0x2f7df4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7df8: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x2f7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x2f7dfc: 0x24a519b0  addiu       $a1, $a1, 0x19B0
    ctx->pc = 0x2f7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6576));
    // 0x2f7e00: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E00u;
    SET_GPR_U32(ctx, 31, 0x2F7E08u);
    ctx->pc = 0x2F7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E00u;
    // 0x2f7e04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E00u, 0x2F7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E08u;
label_2f7e08:
    // 0x2f7e08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e0c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2f7e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x2f7e10: 0x24a519c0  addiu       $a1, $a1, 0x19C0
    ctx->pc = 0x2f7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6592));
    // 0x2f7e14: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E14u;
    SET_GPR_U32(ctx, 31, 0x2F7E1Cu);
    ctx->pc = 0x2F7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E14u;
    // 0x2f7e18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E14u, 0x2F7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E1Cu;
label_2f7e1c:
    // 0x2f7e1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e20: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x2f7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x2f7e24: 0x24a519d8  addiu       $a1, $a1, 0x19D8
    ctx->pc = 0x2f7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6616));
    // 0x2f7e28: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E28u;
    SET_GPR_U32(ctx, 31, 0x2F7E30u);
    ctx->pc = 0x2F7E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E28u;
    // 0x2f7e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E28u, 0x2F7E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E30u;
label_2f7e30:
    // 0x2f7e30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e34: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x2f7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x2f7e38: 0x24a519e8  addiu       $a1, $a1, 0x19E8
    ctx->pc = 0x2f7e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
    // 0x2f7e3c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E3Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E44u);
    ctx->pc = 0x2F7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E3Cu;
    // 0x2f7e40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E3Cu, 0x2F7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E44u;
label_2f7e44:
    // 0x2f7e44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e48: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x2f7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x2f7e4c: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x2f7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x2f7e50: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E50u;
    SET_GPR_U32(ctx, 31, 0x2F7E58u);
    ctx->pc = 0x2F7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E50u;
    // 0x2f7e54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E50u, 0x2F7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E58u;
label_2f7e58:
    // 0x2f7e58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e5c: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x2f7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    // 0x2f7e60: 0x24a51a08  addiu       $a1, $a1, 0x1A08
    ctx->pc = 0x2f7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6664));
    // 0x2f7e64: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E64u;
    SET_GPR_U32(ctx, 31, 0x2F7E6Cu);
    ctx->pc = 0x2F7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E64u;
    // 0x2f7e68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E64u, 0x2F7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E6Cu;
label_2f7e6c:
    // 0x2f7e6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e70: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x2f7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x2f7e74: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x2f7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
    // 0x2f7e78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E78u;
    SET_GPR_U32(ctx, 31, 0x2F7E80u);
    ctx->pc = 0x2F7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E78u;
    // 0x2f7e7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E78u, 0x2F7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E80u;
label_2f7e80:
    // 0x2f7e80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e84: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x2f7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x2f7e88: 0x24a51a38  addiu       $a1, $a1, 0x1A38
    ctx->pc = 0x2f7e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
    // 0x2f7e8c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E94u);
    ctx->pc = 0x2F7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E8Cu;
    // 0x2f7e90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7E8Cu, 0x2F7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E94u;
label_2f7e94:
    // 0x2f7e94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7e98: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2f7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x2f7e9c: 0x24a51a50  addiu       $a1, $a1, 0x1A50
    ctx->pc = 0x2f7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    // 0x2f7ea0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7EA0u;
    SET_GPR_U32(ctx, 31, 0x2F7EA8u);
    ctx->pc = 0x2F7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7EA0u;
    // 0x2f7ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7EA0u, 0x2F7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7EA8u;
label_2f7ea8:
    // 0x2f7ea8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7eac: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x2f7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x2f7eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f7eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7eb4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7EB4u;
    SET_GPR_U32(ctx, 31, 0x2F7EBCu);
    ctx->pc = 0x2F7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7EB4u;
    // 0x2f7eb8: 0x24a51a68  addiu       $a1, $a1, 0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7EB4u, 0x2F7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7EBCu;
label_2f7ebc:
    // 0x2f7ebc: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x2f7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_2f7ec0:
    // 0x2f7ec0: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2f7ec4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f7ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f7ec8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2f7ecc: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2f7eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2f7ed0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2f7ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2f7ed4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2F7ED4u;
    SET_GPR_U32(ctx, 31, 0x2F7EDCu);
    ctx->pc = 0x2F7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7ED4u;
    // 0x2f7ed8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2F7ED4u, 0x2F7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7EDCu;
label_2f7edc:
    // 0x2f7edc: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2f7edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f7ee0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F7EE0u;
    {
        const bool branch_taken_0x2f7ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7EE0u;
        // 0x2f7ee4: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ee0) {
            ctx->pc = 0x2F7EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7ec0;
        }
    }
    ctx->pc = 0x2F7EE8u;
    // 0x2f7ee8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f7ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7eec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f7eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f7ef0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7ef4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f7ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f7ef8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f7ef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7efc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2f7efcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7f00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f7f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F04u;
        // 0x2f7f08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7F0Cu;
    // 0x2f7f0c: 0x0  nop
    ctx->pc = 0x2f7f0cu;
    // NOP
    ctx->pc = 0x2f7f10u;
}
