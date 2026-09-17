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

// Function: sub_00213EA0
// Address: 0x213ea0 - 0x213f68
void sub_00213EA0_0x213ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213EA0_0x213ea0");
#endif

    switch (ctx->pc) {
        case 0x213ee0u: goto label_213ee0;
        case 0x213ef0u: goto label_213ef0;
        case 0x213f34u: goto label_213f34;
        case 0x213f44u: goto label_213f44;
        default: break;
    }

    ctx->pc = 0x213ea0u;

    // 0x213ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213ea4: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x213ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x213ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213eac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213eb4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x213EB4u;
    {
        const bool branch_taken_0x213eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EB4u;
        // 0x213eb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eb4) {
            ctx->pc = 0x213F68u;
            return;
        }
    }
    ctx->pc = 0x213EBCu;
    // 0x213ebc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x213ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213ec0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x213ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213ec8: 0x8c634e70  lw          $v1, 0x4E70($v1)
    ctx->pc = 0x213ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20080)));
    // 0x213ecc: 0x600008  jr          $v1
    ctx->pc = 0x213ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213ED8u: goto label_213ed8;
            case 0x213EE8u: goto label_213ee8;
            case 0x213EF8u: goto label_213ef8;
            case 0x213F58u: goto label_213f58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213ECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x213ED4u;
    // 0x213ed4: 0x0  nop
    ctx->pc = 0x213ed4u;
    // NOP
label_213ed8:
    // 0x213ed8: 0xc0865d0  jal         func_219740
    ctx->pc = 0x213ED8u;
    SET_GPR_U32(ctx, 31, 0x213EE0u);
    ctx->pc = 0x219740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219740u, 0x213ED8u, 0x213EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EE0u;
label_213ee0:
    // 0x213ee0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x213EE0u;
    {
        const bool branch_taken_0x213ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EE0u;
        // 0x213ee4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ee0) {
            ctx->pc = 0x213F6Cu;
            return;
        }
    }
    ctx->pc = 0x213EE8u;
label_213ee8:
    // 0x213ee8: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x213EE8u;
    SET_GPR_U32(ctx, 31, 0x213EF0u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x213EE8u, 0x213EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EF0u;
label_213ef0:
    // 0x213ef0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x213EF0u;
    {
        const bool branch_taken_0x213ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ef0) {
            ctx->pc = 0x213EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213EF0u;
            // 0x213ef4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F00u;
            goto label_213f00;
        }
    }
    ctx->pc = 0x213EF8u;
label_213ef8:
    // 0x213ef8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x213EF8u;
    {
        const bool branch_taken_0x213ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF8u;
        // 0x213efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef8) {
            ctx->pc = 0x213F6Cu;
            return;
        }
    }
    ctx->pc = 0x213F00u;
label_213f00:
    // 0x213f00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213f04: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x213f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935488)));
    // 0x213f08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f0c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x213F0Cu;
    {
        const bool branch_taken_0x213f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x213F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F0Cu;
        // 0x213f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f0c) {
            ctx->pc = 0x213F20u;
            goto label_213f20;
        }
    }
    ctx->pc = 0x213F14u;
    // 0x213f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213f18: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x213F18u;
    {
        const bool branch_taken_0x213f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x213f18) {
            ctx->pc = 0x213F24u;
            goto label_213f24;
        }
    }
    ctx->pc = 0x213F20u;
label_213f20:
    // 0x213f20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213f24:
    // 0x213f24: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x213F24u;
    {
        const bool branch_taken_0x213f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x213f24) {
            ctx->pc = 0x213F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F24u;
            // 0x213f28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F50u;
            goto label_213f50;
        }
    }
    ctx->pc = 0x213F2Cu;
    // 0x213f2c: 0xc0821d0  jal         func_208740
    ctx->pc = 0x213F2Cu;
    SET_GPR_U32(ctx, 31, 0x213F34u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x213F2Cu, 0x213F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F34u;
label_213f34:
    // 0x213f34: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x213F34u;
    {
        const bool branch_taken_0x213f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213f34) {
            ctx->pc = 0x213F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F34u;
            // 0x213f38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F50u;
            goto label_213f50;
        }
    }
    ctx->pc = 0x213F3Cu;
    // 0x213f3c: 0xc086f88  jal         func_21BE20
    ctx->pc = 0x213F3Cu;
    SET_GPR_U32(ctx, 31, 0x213F44u);
    ctx->pc = 0x213F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F3Cu;
    // 0x213f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE20u, 0x213F3Cu, 0x213F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F44u;
label_213f44:
    // 0x213f44: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x213F44u;
    {
        const bool branch_taken_0x213f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f44) {
            ctx->pc = 0x213F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F44u;
            // 0x213f48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F6Cu;
            return;
        }
    }
    ctx->pc = 0x213F4Cu;
    // 0x213f4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x213f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213f50:
    // 0x213f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x213F50u;
    {
        const bool branch_taken_0x213f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F50u;
        // 0x213f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f50) {
            ctx->pc = 0x213F6Cu;
            return;
        }
    }
    ctx->pc = 0x213F58u;
label_213f58:
    // 0x213f58: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x213f5c: 0x8c6288b4  lw          $v0, -0x774C($v1)
    ctx->pc = 0x213f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88B4u));
    // 0x213f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x213F60u;
    {
        const bool branch_taken_0x213f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F60u;
        // 0x213f64: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f60) {
            ctx->pc = 0x213F6Cu;
            return;
        }
    }
    ctx->pc = 0x213F68u;
}
