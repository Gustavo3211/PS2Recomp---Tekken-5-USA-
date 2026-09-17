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

// Function: sub_001F1C70
// Address: 0x1f1c70 - 0x1f1d70
void sub_001F1C70_0x1f1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C70_0x1f1c70");
#endif

    switch (ctx->pc) {
        case 0x1f1c94u: goto label_1f1c94;
        case 0x1f1ca4u: goto label_1f1ca4;
        case 0x1f1cacu: goto label_1f1cac;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cbcu: goto label_1f1cbc;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1cd0u: goto label_1f1cd0;
        case 0x1f1cd8u: goto label_1f1cd8;
        case 0x1f1cf0u: goto label_1f1cf0;
        case 0x1f1d38u: goto label_1f1d38;
        default: break;
    }

    ctx->pc = 0x1f1c70u;

    // 0x1f1c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1c78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f1c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1c88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f1c8c: 0xc0927a6  jal         func_249E98
    ctx->pc = 0x1F1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1F1C94u);
    ctx->pc = 0x1F1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C8Cu;
    // 0x1f1c90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249E98u, 0x1F1C8Cu, 0x1F1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C94u;
label_1f1c94:
    // 0x1f1c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f1c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f1c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c9c: 0xc0904fc  jal         func_2413F0
    ctx->pc = 0x1F1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1CA4u);
    ctx->pc = 0x1F1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C9Cu;
    // 0x1f1ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2413F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2413F0u, 0x1F1C9Cu, 0x1F1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CA4u;
label_1f1ca4:
    // 0x1f1ca4: 0xc0881b0  jal         func_2206C0
    ctx->pc = 0x1F1CA4u;
    SET_GPR_U32(ctx, 31, 0x1F1CACu);
    ctx->pc = 0x1F1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CA4u;
    // 0x1f1ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2206C0u, 0x1F1CA4u, 0x1F1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CACu;
label_1f1cac:
    // 0x1f1cac: 0xc090c5a  jal         func_243168
    ctx->pc = 0x1F1CACu;
    SET_GPR_U32(ctx, 31, 0x1F1CB4u);
    ctx->pc = 0x1F1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CACu;
    // 0x1f1cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243168u, 0x1F1CACu, 0x1F1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CB4u;
label_1f1cb4:
    // 0x1f1cb4: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F1CB4u;
    SET_GPR_U32(ctx, 31, 0x1F1CBCu);
    ctx->pc = 0x1F1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CB4u;
    // 0x1f1cb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F1CB4u, 0x1F1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CBCu;
label_1f1cbc:
    // 0x1f1cbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cc0: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F1CC0u;
    SET_GPR_U32(ctx, 31, 0x1F1CC8u);
    ctx->pc = 0x1F1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CC0u;
    // 0x1f1cc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F1CC0u, 0x1F1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC8u;
label_1f1cc8:
    // 0x1f1cc8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F1CC8u;
    SET_GPR_U32(ctx, 31, 0x1F1CD0u);
    ctx->pc = 0x1F1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CC8u;
    // 0x1f1ccc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F1CC8u, 0x1F1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CD0u;
label_1f1cd0:
    // 0x1f1cd0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F1CD0u;
    SET_GPR_U32(ctx, 31, 0x1F1CD8u);
    ctx->pc = 0x1F1CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CD0u;
    // 0x1f1cd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F1CD0u, 0x1F1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CD8u;
label_1f1cd8:
    // 0x1f1cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cdc: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1CDCu;
    {
        const bool branch_taken_0x1f1cdc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CDCu;
        // 0x1f1ce0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cdc) {
            ctx->pc = 0x1F1D28u;
            goto label_1f1d28;
        }
    }
    ctx->pc = 0x1F1CE4u;
    // 0x1f1ce4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1ce8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1cec: 0x0  nop
    ctx->pc = 0x1f1cecu;
    // NOP
label_1f1cf0:
    // 0x1f1cf0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f1cf4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f1cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1cf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1CF8u;
    {
        const bool branch_taken_0x1f1cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CF8u;
        // 0x1f1cfc: 0xa6000090  sh          $zero, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf8) {
            ctx->pc = 0x1F1D08u;
            goto label_1f1d08;
        }
    }
    ctx->pc = 0x1F1D00u;
    // 0x1f1d00: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1D00u;
    {
        const bool branch_taken_0x1f1d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D00u;
        // 0x1f1d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d00) {
            ctx->pc = 0x1F1D0Cu;
            goto label_1f1d0c;
        }
    }
    ctx->pc = 0x1F1D08u;
label_1f1d08:
    // 0x1f1d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d0c:
    // 0x1f1d0c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1D0Cu;
    {
        const bool branch_taken_0x1f1d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d0c) {
            ctx->pc = 0x1F1D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D0Cu;
            // 0x1f1d10: 0xa20601bc  sb          $a2, 0x1BC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D18u;
            goto label_1f1d18;
        }
    }
    ctx->pc = 0x1F1D14u;
    // 0x1f1d14: 0xa20701bc  sb          $a3, 0x1BC($s0)
    ctx->pc = 0x1f1d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 7));
label_1f1d18:
    // 0x1f1d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1d1c: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1f1d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f1d20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F1D20u;
    {
        const bool branch_taken_0x1f1d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D20u;
        // 0x1f1d24: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d20) {
            ctx->pc = 0x1F1CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1cf0;
        }
    }
    ctx->pc = 0x1F1D28u;
label_1f1d28:
    // 0x1f1d28: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1D28u;
    {
        const bool branch_taken_0x1f1d28 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1F1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D28u;
        // 0x1f1d2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d28) {
            ctx->pc = 0x1F1D54u;
            goto label_1f1d54;
        }
    }
    ctx->pc = 0x1F1D30u;
    // 0x1f1d30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f1d34: 0x0  nop
    ctx->pc = 0x1f1d34u;
    // NOP
label_1f1d38:
    // 0x1f1d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d3c: 0xa6200090  sh          $zero, 0x90($s1)
    ctx->pc = 0x1f1d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1d40: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f1d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f1d44: 0xa22401bc  sb          $a0, 0x1BC($s1)
    ctx->pc = 0x1f1d44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 444), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1d48: 0x0  nop
    ctx->pc = 0x1f1d48u;
    // NOP
    // 0x1f1d4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1D4Cu;
    {
        const bool branch_taken_0x1f1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D4Cu;
        // 0x1f1d50: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d4c) {
            ctx->pc = 0x1F1D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1d38;
        }
    }
    ctx->pc = 0x1F1D54u;
label_1f1d54:
    // 0x1f1d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f1d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D64u;
        // 0x1f1d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1D6Cu;
    // 0x1f1d6c: 0x0  nop
    ctx->pc = 0x1f1d6cu;
    // NOP
    ctx->pc = 0x1f1d70u;
}
