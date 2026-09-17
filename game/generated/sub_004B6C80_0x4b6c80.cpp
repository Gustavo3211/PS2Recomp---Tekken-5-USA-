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

// Function: sub_004B6C80
// Address: 0x4b6c80 - 0x4b6ef0
void sub_004B6C80_0x4b6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6C80_0x4b6c80");
#endif

    switch (ctx->pc) {
        case 0x4b6cccu: goto label_4b6ccc;
        case 0x4b6cd4u: goto label_4b6cd4;
        case 0x4b6d5cu: goto label_4b6d5c;
        case 0x4b6dacu: goto label_4b6dac;
        case 0x4b6db4u: goto label_4b6db4;
        case 0x4b6dbcu: goto label_4b6dbc;
        case 0x4b6dc4u: goto label_4b6dc4;
        case 0x4b6dfcu: goto label_4b6dfc;
        case 0x4b6e64u: goto label_4b6e64;
        case 0x4b6e98u: goto label_4b6e98;
        case 0x4b6ebcu: goto label_4b6ebc;
        case 0x4b6ec4u: goto label_4b6ec4;
        default: break;
    }

    ctx->pc = 0x4b6c80u;

    // 0x4b6c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b6c84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b6c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b6c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6c8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b6c90: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4b6c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4b6c94: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b6c98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b6c98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6c9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b6c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b6ca0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b6ca4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b6ca8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b6cac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b6cb0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4b6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4b6cb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4b6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4b6cb8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b6cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b6cbc: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B6CBCu;
    {
        const bool branch_taken_0x4b6cbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6CBCu;
        // 0x4b6cc0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6cbc) {
            ctx->pc = 0x4B6D38u;
            goto label_4b6d38;
        }
    }
    ctx->pc = 0x4B6CC4u;
    // 0x4b6cc4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B6CC4u;
    SET_GPR_U32(ctx, 31, 0x4B6CCCu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B6CC4u, 0x4B6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6CCCu;
label_4b6ccc:
    // 0x4b6ccc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B6CCCu;
    SET_GPR_U32(ctx, 31, 0x4B6CD4u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B6CCCu, 0x4B6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6CD4u;
label_4b6cd4:
    // 0x4b6cd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6cd8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6cdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b6cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b6ce0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x4b6ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4b6ce4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b6ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b6ce8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b6ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b6cec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b6cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b6cf0: 0x24e56dc0  addiu       $a1, $a3, 0x6DC0
    ctx->pc = 0x4b6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28096));
    // 0x4b6cf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4b6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4b6cf8: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4b6cf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6cfc: 0xa603015e  sh          $v1, 0x15E($s0)
    ctx->pc = 0x4b6cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6d00: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b6d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6d04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b6d08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b6d0c: 0x9443fec0  lhu         $v1, -0x140($v0)
    ctx->pc = 0x4b6d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966976)));
    // 0x4b6d10: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4b6d10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6d14: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b6d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4b6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4b6d1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b6d20: 0x9443fecc  lhu         $v1, -0x134($v0)
    ctx->pc = 0x4b6d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966988)));
    // 0x4b6d24: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4b6d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6d28: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b6d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b6d2c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b6d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b6d30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B6D30u;
    {
        const bool branch_taken_0x4b6d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D30u;
        // 0x4b6d34: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d30) {
            ctx->pc = 0x4B6D40u;
            goto label_4b6d40;
        }
    }
    ctx->pc = 0x4B6D38u;
label_4b6d38:
    // 0x4b6d38: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b6d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b6d3c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x4b6d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4b6d40:
    // 0x4b6d40: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4b6d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6d44: 0x24e26dc0  addiu       $v0, $a3, 0x6DC0
    ctx->pc = 0x4b6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 28096));
    // 0x4b6d48: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x4b6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x4b6d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6d50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4b6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4b6d54: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4B6D54u;
    SET_GPR_U32(ctx, 31, 0x4B6D5Cu);
    ctx->pc = 0x4B6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6D54u;
    // 0x4b6d58: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4B6D54u, 0x4B6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6D5Cu;
label_4b6d5c:
    // 0x4b6d5c: 0x5040005a  beql        $v0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x4B6D5Cu;
    {
        const bool branch_taken_0x4b6d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6d5c) {
            ctx->pc = 0x4B6D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6D5Cu;
            // 0x4b6d60: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6EC8u;
            goto label_4b6ec8;
        }
    }
    ctx->pc = 0x4B6D64u;
    // 0x4b6d64: 0x960201b6  lhu         $v0, 0x1B6($s0)
    ctx->pc = 0x4b6d64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4b6d68: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b6d6c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B6D6Cu;
    {
        const bool branch_taken_0x4b6d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D6Cu;
        // 0x4b6d70: 0x3408ffff  ori         $t0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d6c) {
            ctx->pc = 0x4B6DBCu;
            goto label_4b6dbc;
        }
    }
    ctx->pc = 0x4B6D74u;
    // 0x4b6d74: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4b6d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4b6d78: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6d7c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x4b6d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b6d80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b6d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b6d84: 0x86260006  lh          $a2, 0x6($s1)
    ctx->pc = 0x4b6d84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x4b6d88: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b6d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b6d8c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4b6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b6d90: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x4b6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b6d94: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b6d94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b6d98: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4b6d98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b6d9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4b6d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6da0: 0x48b024  and         $s6, $v0, $t0
    ctx->pc = 0x4b6da0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4b6da4: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B6DA4u;
    SET_GPR_U32(ctx, 31, 0x4B6DACu);
    ctx->pc = 0x4B6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DA4u;
    // 0x4b6da8: 0x68a824  and         $s5, $v1, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B6DA4u, 0x4B6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DACu;
label_4b6dac:
    // 0x4b6dac: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B6DACu;
    SET_GPR_U32(ctx, 31, 0x4B6DB4u);
    ctx->pc = 0x4B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DACu;
    // 0x4b6db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B6DACu, 0x4B6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DB4u;
label_4b6db4:
    // 0x4b6db4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B6DB4u;
    SET_GPR_U32(ctx, 31, 0x4B6DBCu);
    ctx->pc = 0x4B6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DB4u;
    // 0x4b6db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B6DB4u, 0x4B6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DBCu;
label_4b6dbc:
    // 0x4b6dbc: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B6DBCu;
    SET_GPR_U32(ctx, 31, 0x4B6DC4u);
    ctx->pc = 0x4B6DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DBCu;
    // 0x4b6dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B6DBCu, 0x4B6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DC4u;
label_4b6dc4:
    // 0x4b6dc4: 0x960201be  lhu         $v0, 0x1BE($s0)
    ctx->pc = 0x4b6dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4b6dc8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4b6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4b6dcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B6DCCu;
    {
        const bool branch_taken_0x4b6dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6dcc) {
            ctx->pc = 0x4B6DF4u;
            goto label_4b6df4;
        }
    }
    ctx->pc = 0x4B6DD4u;
    // 0x4b6dd4: 0x2604015e  addiu       $a0, $s0, 0x15E
    ctx->pc = 0x4b6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4b6dd8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b6dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6ddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b6de0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b6de0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6de4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x4b6de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b6de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b6dec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6DECu;
    {
        const bool branch_taken_0x4b6dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6DECu;
        // 0x4b6df0: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6dec) {
            ctx->pc = 0x4B6E08u;
            goto label_4b6e08;
        }
    }
    ctx->pc = 0x4B6DF4u;
label_4b6df4:
    // 0x4b6df4: 0xc12db14  jal         func_4B6C50
    ctx->pc = 0x4B6DF4u;
    SET_GPR_U32(ctx, 31, 0x4B6DFCu);
    ctx->pc = 0x4B6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DF4u;
    // 0x4b6df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6C50u, 0x4B6DF4u, 0x4B6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DFCu;
label_4b6dfc:
    // 0x4b6dfc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4B6DFCu;
    {
        const bool branch_taken_0x4b6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6DFCu;
        // 0x4b6e00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6dfc) {
            ctx->pc = 0x4B6EC8u;
            goto label_4b6ec8;
        }
    }
    ctx->pc = 0x4B6E04u;
    // 0x4b6e04: 0x0  nop
    ctx->pc = 0x4b6e04u;
    // NOP
label_4b6e08:
    // 0x4b6e08: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x4b6e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x4b6e0c: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4b6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4b6e10: 0x24040c00  addiu       $a0, $zero, 0xC00
    ctx->pc = 0x4b6e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x4b6e14: 0x24b32330  addiu       $s3, $a1, 0x2330
    ctx->pc = 0x4b6e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 9008));
    // 0x4b6e18: 0x24b4233a  addiu       $s4, $a1, 0x233A
    ctx->pc = 0x4b6e18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 9018));
    // 0x4b6e1c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4b6e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6e20: 0x24b2233c  addiu       $s2, $a1, 0x233C
    ctx->pc = 0x4b6e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 9020));
    // 0x4b6e24: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x4b6e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4b6e28: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4b6e28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6e2c: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x4b6e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x4b6e30: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4b6e30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6e34: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x4b6e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4b6e38: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4b6e38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6e3c: 0x96030118  lhu         $v1, 0x118($s0)
    ctx->pc = 0x4b6e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4b6e40: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x4b6e40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6e44: 0x9602011c  lhu         $v0, 0x11C($s0)
    ctx->pc = 0x4b6e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4b6e48: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4b6e48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6e4c: 0x96030120  lhu         $v1, 0x120($s0)
    ctx->pc = 0x4b6e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x4b6e50: 0xa4a3233e  sh          $v1, 0x233E($a1)
    ctx->pc = 0x4b6e50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6e54: 0x86050130  lh          $a1, 0x130($s0)
    ctx->pc = 0x4b6e54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4b6e58: 0x86060132  lh          $a2, 0x132($s0)
    ctx->pc = 0x4b6e58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4b6e5c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x4B6E64u);
    ctx->pc = 0x4B6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6E5Cu;
    // 0x4b6e60: 0x86070134  lh          $a3, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B6E5Cu, 0x4B6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6E64u;
label_4b6e64:
    // 0x4b6e64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b6e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6e6c: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B6E6Cu;
    {
        const bool branch_taken_0x4b6e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E6Cu;
        // 0x4b6e70: 0x36c5ffff  ori         $a1, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6e6c) {
            ctx->pc = 0x4B6EB4u;
            goto label_4b6eb4;
        }
    }
    ctx->pc = 0x4B6E74u;
    // 0x4b6e74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6e78: 0x36a4ffff  ori         $a0, $s5, 0xFFFF
    ctx->pc = 0x4b6e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x4b6e7c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4b6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4b6e80: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b6e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b6e84: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b6e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b6e88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b6e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6e8c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4b6e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6e90: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B6E90u;
    SET_GPR_U32(ctx, 31, 0x4B6E98u);
    ctx->pc = 0x4B6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6E90u;
    // 0x4b6e94: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B6E90u, 0x4B6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6E98u;
label_4b6e98:
    // 0x4b6e98: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6E98u;
    {
        const bool branch_taken_0x4b6e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x4B6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E98u;
        // 0x4b6e9c: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6e98) {
            ctx->pc = 0x4B6EB4u;
            goto label_4b6eb4;
        }
    }
    ctx->pc = 0x4B6EA0u;
    // 0x4b6ea0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4b6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b6ea4: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x4b6ea4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b6ea8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4b6ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6eac: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4b6eacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6eb0: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x4b6eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
label_4b6eb4:
    // 0x4b6eb4: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4B6EB4u;
    SET_GPR_U32(ctx, 31, 0x4B6EBCu);
    ctx->pc = 0x4B6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6EB4u;
    // 0x4b6eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4B6EB4u, 0x4B6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6EBCu;
label_4b6ebc:
    // 0x4b6ebc: 0xc12db14  jal         func_4B6C50
    ctx->pc = 0x4B6EBCu;
    SET_GPR_U32(ctx, 31, 0x4B6EC4u);
    ctx->pc = 0x4B6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6EBCu;
    // 0x4b6ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6C50u, 0x4B6EBCu, 0x4B6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6EC4u;
label_4b6ec4:
    // 0x4b6ec4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b6ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6ec8:
    // 0x4b6ec8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b6ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b6ecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b6eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b6ed0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b6ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b6ed4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b6ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b6ed8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b6ed8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6edc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b6edcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b6ee0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b6ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6EE4u;
        // 0x4b6ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6EECu;
    // 0x4b6eec: 0x0  nop
    ctx->pc = 0x4b6eecu;
    // NOP
    ctx->pc = 0x4b6ef0u;
}
