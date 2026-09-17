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

// Function: sub_002B5C60
// Address: 0x2b5c60 - 0x2b5e88
void sub_002B5C60_0x2b5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C60_0x2b5c60");
#endif

    switch (ctx->pc) {
        case 0x2b5c88u: goto label_2b5c88;
        case 0x2b5c98u: goto label_2b5c98;
        case 0x2b5cb8u: goto label_2b5cb8;
        case 0x2b5cc4u: goto label_2b5cc4;
        case 0x2b5ce0u: goto label_2b5ce0;
        case 0x2b5cecu: goto label_2b5cec;
        case 0x2b5d0cu: goto label_2b5d0c;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d48u: goto label_2b5d48;
        case 0x2b5dc4u: goto label_2b5dc4;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5df4u: goto label_2b5df4;
        case 0x2b5e04u: goto label_2b5e04;
        case 0x2b5e1cu: goto label_2b5e1c;
        case 0x2b5e30u: goto label_2b5e30;
        case 0x2b5e4cu: goto label_2b5e4c;
        default: break;
    }

    ctx->pc = 0x2b5c60u;

    // 0x2b5c60: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2b5c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x2b5c64: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2b5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2b5c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b5c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c6c: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2b5c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2b5c70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c74: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2b5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2b5c78: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x2b5c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x2b5c7c: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x2b5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x2b5c80: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2B5C80u;
    SET_GPR_U32(ctx, 31, 0x2B5C88u);
    ctx->pc = 0x2B5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C80u;
    // 0x2b5c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2B5C80u, 0x2B5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C88u;
label_2b5c88:
    // 0x2b5c88: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x2b5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2b5c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b5c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c90: 0xc0a9e06  jal         func_2A7818
    ctx->pc = 0x2B5C90u;
    SET_GPR_U32(ctx, 31, 0x2B5C98u);
    ctx->pc = 0x2B5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C90u;
    // 0x2b5c94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7818u, 0x2B5C90u, 0x2B5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C98u;
label_2b5c98:
    // 0x2b5c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c9c: 0x5a000016  blezl       $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B5C9Cu;
    {
        const bool branch_taken_0x2b5c9c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b5c9c) {
            ctx->pc = 0x2B5CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C9Cu;
            // 0x2b5ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CF8u;
            goto label_2b5cf8;
        }
    }
    ctx->pc = 0x2B5CA4u;
    // 0x2b5ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b5cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cb0: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5CB0u;
    SET_GPR_U32(ctx, 31, 0x2B5CB8u);
    ctx->pc = 0x2B5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CB0u;
    // 0x2b5cb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5CB0u, 0x2B5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CB8u;
label_2b5cb8:
    // 0x2b5cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cbc: 0xc0ad7a2  jal         func_2B5E88
    ctx->pc = 0x2B5CBCu;
    SET_GPR_U32(ctx, 31, 0x2B5CC4u);
    ctx->pc = 0x2B5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CBCu;
    // 0x2b5cc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E88u, 0x2B5CBCu, 0x2B5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CC4u;
label_2b5cc4:
    // 0x2b5cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cc8: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B5CC8u;
    {
        const bool branch_taken_0x2b5cc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CC8u;
        // 0x2b5ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cc8) {
            ctx->pc = 0x2B5D7Cu;
            goto label_2b5d7c;
        }
    }
    ctx->pc = 0x2B5CD0u;
    // 0x2b5cd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cd4: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2b5cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b5cd8: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5CD8u;
    SET_GPR_U32(ctx, 31, 0x2B5CE0u);
    ctx->pc = 0x2B5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CD8u;
    // 0x2b5cdc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5CD8u, 0x2B5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CE0u;
label_2b5ce0:
    // 0x2b5ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ce4: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2B5CE4u;
    SET_GPR_U32(ctx, 31, 0x2B5CECu);
    ctx->pc = 0x2B5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5CE4u;
    // 0x2b5ce8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2E0u, 0x2B5CE4u, 0x2B5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5CECu;
label_2b5cec:
    // 0x2b5cec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B5CECu;
    {
        const bool branch_taken_0x2b5cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CECu;
        // 0x2b5cf0: 0xdfb00400  ld          $s0, 0x400($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cec) {
            ctx->pc = 0x2B5D80u;
            goto label_2b5d80;
        }
    }
    ctx->pc = 0x2B5CF4u;
    // 0x2b5cf4: 0x0  nop
    ctx->pc = 0x2b5cf4u;
    // NOP
label_2b5cf8:
    // 0x2b5cf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b5cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cfc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b5cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d04: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5D04u;
    SET_GPR_U32(ctx, 31, 0x2B5D0Cu);
    ctx->pc = 0x2B5D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D04u;
    // 0x2b5d08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5D04u, 0x2B5D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D0Cu;
label_2b5d0c:
    // 0x2b5d0c: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2b5d10: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5D10u;
    {
        const bool branch_taken_0x2b5d10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D10u;
        // 0x2b5d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d10) {
            ctx->pc = 0x2B5D7Cu;
            goto label_2b5d7c;
        }
    }
    ctx->pc = 0x2B5D18u;
    // 0x2b5d18: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2b5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2b5d1c: 0x0  nop
    ctx->pc = 0x2b5d1cu;
    // NOP
label_2b5d20:
    // 0x2b5d20: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x2b5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2b5d24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b5d28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5d30: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2b5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b5d34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5d38: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2b5d38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5d3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b5d40: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B5D40u;
    SET_GPR_U32(ctx, 31, 0x2B5D48u);
    ctx->pc = 0x2B5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D40u;
    // 0x2b5d44: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B5D40u, 0x2B5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D48u;
label_2b5d48:
    // 0x2b5d48: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5D48u;
    {
        const bool branch_taken_0x2b5d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d48) {
            ctx->pc = 0x2B5D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5D48u;
            // 0x2b5d4c: 0x8e42007c  lw          $v0, 0x7C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D6Cu;
            goto label_2b5d6c;
        }
    }
    ctx->pc = 0x2B5D50u;
    // 0x2b5d50: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x2b5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2b5d54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b5d58: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2b5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2b5d5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b5d60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5D60u;
    {
        const bool branch_taken_0x2b5d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D60u;
        // 0x2b5d64: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d60) {
            ctx->pc = 0x2B5D7Cu;
            goto label_2b5d7c;
        }
    }
    ctx->pc = 0x2B5D68u;
    // 0x2b5d68: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_2b5d6c:
    // 0x2b5d6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b5d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5d70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B5D70u;
    {
        const bool branch_taken_0x2b5d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D70u;
        // 0x2b5d74: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d70) {
            ctx->pc = 0x2B5D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5d20;
        }
    }
    ctx->pc = 0x2B5D78u;
    // 0x2b5d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d7c:
    // 0x2b5d7c: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2b5d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_2b5d80:
    // 0x2b5d80: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2b5d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2b5d84: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2b5d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2b5d88: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x2b5d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2b5d8c: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x2b5d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2b5d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D90u;
        // 0x2b5d94: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D98u;
    // 0x2b5d98: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x2b5d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x2b5d9c: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x2b5d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
    // 0x2b5da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b5da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5da4: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x2b5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
    // 0x2b5da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dac: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x2b5dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x2b5db0: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x2b5db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
    // 0x2b5db4: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x2b5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
    // 0x2b5db8: 0xffbf0428  sd          $ra, 0x428($sp)
    ctx->pc = 0x2b5db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 31));
    // 0x2b5dbc: 0xc0a9d00  jal         func_2A7400
    ctx->pc = 0x2B5DBCu;
    SET_GPR_U32(ctx, 31, 0x2B5DC4u);
    ctx->pc = 0x2B5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DBCu;
    // 0x2b5dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7400u, 0x2B5DBCu, 0x2B5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DC4u;
label_2b5dc4:
    // 0x2b5dc4: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x2b5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2b5dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dcc: 0xc0a9e06  jal         func_2A7818
    ctx->pc = 0x2B5DCCu;
    SET_GPR_U32(ctx, 31, 0x2B5DD4u);
    ctx->pc = 0x2B5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DCCu;
    // 0x2b5dd0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7818u, 0x2B5DCCu, 0x2B5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DD4u;
label_2b5dd4:
    // 0x2b5dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dd8: 0x5a000023  blezl       $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B5DD8u;
    {
        const bool branch_taken_0x2b5dd8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b5dd8) {
            ctx->pc = 0x2B5DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5DD8u;
            // 0x2b5ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E68u;
            goto label_2b5e68;
        }
    }
    ctx->pc = 0x2B5DE0u;
    // 0x2b5de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5de8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b5de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dec: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5DECu;
    SET_GPR_U32(ctx, 31, 0x2B5DF4u);
    ctx->pc = 0x2B5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DECu;
    // 0x2b5df0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5DECu, 0x2B5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DF4u;
label_2b5df4:
    // 0x2b5df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dfc: 0xc0ad7a2  jal         func_2B5E88
    ctx->pc = 0x2B5DFCu;
    SET_GPR_U32(ctx, 31, 0x2B5E04u);
    ctx->pc = 0x2B5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DFCu;
    // 0x2b5e00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E88u, 0x2B5DFCu, 0x2B5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E04u;
label_2b5e04:
    // 0x2b5e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b5e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b5e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e14: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5E14u;
    SET_GPR_U32(ctx, 31, 0x2B5E1Cu);
    ctx->pc = 0x2B5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E14u;
    // 0x2b5e18: 0x26060001  addiu       $a2, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5E14u, 0x2B5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E1Cu;
label_2b5e1c:
    // 0x2b5e1c: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x2b5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2b5e20: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5E20u;
    {
        const bool branch_taken_0x2b5e20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E20u;
        // 0x2b5e24: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e20) {
            ctx->pc = 0x2B5E64u;
            goto label_2b5e64;
        }
    }
    ctx->pc = 0x2B5E28u;
    // 0x2b5e28: 0x26720008  addiu       $s2, $s3, 0x8
    ctx->pc = 0x2b5e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2b5e2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2b5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b5e30:
    // 0x2b5e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b5e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5e34: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2b5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2b5e38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b5e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e3c: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x2b5e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b5e40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5e44: 0xc0a9d5a  jal         func_2A7568
    ctx->pc = 0x2B5E44u;
    SET_GPR_U32(ctx, 31, 0x2B5E4Cu);
    ctx->pc = 0x2B5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E44u;
    // 0x2b5e48: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7568u, 0x2B5E44u, 0x2B5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E4Cu;
label_2b5e4c:
    // 0x2b5e4c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5E4Cu;
    {
        const bool branch_taken_0x2b5e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e4c) {
            ctx->pc = 0x2B5E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E4Cu;
            // 0x2b5e50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E68u;
            goto label_2b5e68;
        }
    }
    ctx->pc = 0x2B5E54u;
    // 0x2b5e54: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x2b5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2b5e58: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b5e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5e5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B5E5Cu;
    {
        const bool branch_taken_0x2b5e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E5Cu;
        // 0x2b5e60: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e5c) {
            ctx->pc = 0x2B5E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5e30;
        }
    }
    ctx->pc = 0x2B5E64u;
label_2b5e64:
    // 0x2b5e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5e68:
    // 0x2b5e68: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x2b5e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2b5e6c: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x2b5e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x2b5e70: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x2b5e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2b5e74: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x2b5e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2b5e78: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x2b5e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2b5e7c: 0xdfbf0428  ld          $ra, 0x428($sp)
    ctx->pc = 0x2b5e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2b5e80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E80u;
        // 0x2b5e84: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5E88u;
}
