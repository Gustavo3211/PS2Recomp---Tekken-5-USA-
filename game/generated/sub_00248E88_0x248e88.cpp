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

// Function: sub_00248E88
// Address: 0x248e88 - 0x248fb0
void sub_00248E88_0x248e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248E88_0x248e88");
#endif

    switch (ctx->pc) {
        case 0x248f10u: goto label_248f10;
        case 0x248f20u: goto label_248f20;
        case 0x248f30u: goto label_248f30;
        case 0x248f40u: goto label_248f40;
        case 0x248f4cu: goto label_248f4c;
        case 0x248f58u: goto label_248f58;
        case 0x248f68u: goto label_248f68;
        case 0x248f7cu: goto label_248f7c;
        case 0x248f8cu: goto label_248f8c;
        default: break;
    }

    ctx->pc = 0x248e88u;

    // 0x248e88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248e8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x248e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248e90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x248e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e94: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x248e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x248e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x248e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248e9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x248e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x248ea0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x248ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ea4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x248ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x248ea8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x248ea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248eb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x248eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248eb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ebc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x248EBCu;
    {
        const bool branch_taken_0x248ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EBCu;
        // 0x248ec0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ebc) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248EC4u;
    // 0x248ec4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x248ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x248ec8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x248ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x248ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248ed0: 0x8c631360  lw          $v1, 0x1360($v1)
    ctx->pc = 0x248ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
    // 0x248ed4: 0x600008  jr          $v1
    ctx->pc = 0x248ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248EE0u: goto label_248ee0;
            case 0x248EE8u: goto label_248ee8;
            case 0x248EF0u: goto label_248ef0;
            case 0x248EF8u: goto label_248ef8;
            case 0x248F00u: goto label_248f00;
            case 0x248F18u: goto label_248f18;
            case 0x248F28u: goto label_248f28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248EDCu;
    // 0x248edc: 0x0  nop
    ctx->pc = 0x248edcu;
    // NOP
label_248ee0:
    // 0x248ee0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x248EE0u;
    {
        const bool branch_taken_0x248ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EE0u;
        // 0x248ee4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ee0) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248EE8u;
label_248ee8:
    // 0x248ee8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x248EE8u;
    {
        const bool branch_taken_0x248ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EE8u;
        // 0x248eec: 0x24120023  addiu       $s2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ee8) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248EF0u;
label_248ef0:
    // 0x248ef0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x248EF0u;
    {
        const bool branch_taken_0x248ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EF0u;
        // 0x248ef4: 0x24120036  addiu       $s2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ef0) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248EF8u;
label_248ef8:
    // 0x248ef8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x248EF8u;
    {
        const bool branch_taken_0x248ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EF8u;
        // 0x248efc: 0x24120022  addiu       $s2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ef8) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248F00u;
label_248f00:
    // 0x248f00: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x248F00u;
    {
        const bool branch_taken_0x248f00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x248F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F00u;
        // 0x248f04: 0x24120035  addiu       $s2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f00) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248F08u;
    // 0x248f08: 0xc09223a  jal         func_2488E8
    ctx->pc = 0x248F08u;
    SET_GPR_U32(ctx, 31, 0x248F10u);
    ctx->pc = 0x2488E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2488E8u, 0x248F08u, 0x248F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F10u;
label_248f10:
    // 0x248f10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x248F10u;
    {
        const bool branch_taken_0x248f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F10u;
        // 0x248f14: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f10) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248F18u;
label_248f18:
    // 0x248f18: 0xc092234  jal         func_2488D0
    ctx->pc = 0x248F18u;
    SET_GPR_U32(ctx, 31, 0x248F20u);
    ctx->pc = 0x2488D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2488D0u, 0x248F18u, 0x248F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F20u;
label_248f20:
    // 0x248f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x248F20u;
    {
        const bool branch_taken_0x248f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248F20u;
        // 0x248f24: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f20) {
            ctx->pc = 0x248F38u;
            goto label_248f38;
        }
    }
    ctx->pc = 0x248F28u;
label_248f28:
    // 0x248f28: 0xc092234  jal         func_2488D0
    ctx->pc = 0x248F28u;
    SET_GPR_U32(ctx, 31, 0x248F30u);
    ctx->pc = 0x2488D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2488D0u, 0x248F28u, 0x248F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F30u;
label_248f30:
    // 0x248f30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x248f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248f34: 0x24720037  addiu       $s2, $v1, 0x37
    ctx->pc = 0x248f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 55));
label_248f38:
    // 0x248f38: 0xc040548  jal         func_101520
    ctx->pc = 0x248F38u;
    SET_GPR_U32(ctx, 31, 0x248F40u);
    ctx->pc = 0x101520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101520u, 0x248F38u, 0x248F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F40u;
label_248f40:
    // 0x248f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x248f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f44: 0xc097d14  jal         func_25F450
    ctx->pc = 0x248F44u;
    SET_GPR_U32(ctx, 31, 0x248F4Cu);
    ctx->pc = 0x248F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F44u;
    // 0x248f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x248F44u, 0x248F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F4Cu;
label_248f4c:
    // 0x248f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x248f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f50: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x248F50u;
    SET_GPR_U32(ctx, 31, 0x248F58u);
    ctx->pc = 0x248F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F50u;
    // 0x248f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x248F50u, 0x248F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F58u;
label_248f58:
    // 0x248f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x248f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f60: 0xc097d16  jal         func_25F458
    ctx->pc = 0x248F60u;
    SET_GPR_U32(ctx, 31, 0x248F68u);
    ctx->pc = 0x248F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F60u;
    // 0x248f64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x248F60u, 0x248F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F68u;
label_248f68:
    // 0x248f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x248f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f74: 0xc09236e  jal         func_248DB8
    ctx->pc = 0x248F74u;
    SET_GPR_U32(ctx, 31, 0x248F7Cu);
    ctx->pc = 0x248F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F74u;
    // 0x248f78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DB8u, 0x248F74u, 0x248F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F7Cu;
label_248f7c:
    // 0x248f7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x248f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x248f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248f84: 0xc09238a  jal         func_248E28
    ctx->pc = 0x248F84u;
    SET_GPR_U32(ctx, 31, 0x248F8Cu);
    ctx->pc = 0x248F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248F84u;
    // 0x248f88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E28u, 0x248F84u, 0x248F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248F8Cu;
label_248f8c:
    // 0x248f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248f90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248f94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248f98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x248f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248f9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248fa0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x248fa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x248fa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x248fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x248FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FA8u;
        // 0x248fac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248FB0u;
}
