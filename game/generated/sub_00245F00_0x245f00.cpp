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

// Function: sub_00245F00
// Address: 0x245f00 - 0x246068
void sub_00245F00_0x245f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245F00_0x245f00");
#endif

    switch (ctx->pc) {
        case 0x245f24u: goto label_245f24;
        case 0x245f4cu: goto label_245f4c;
        case 0x246010u: goto label_246010;
        case 0x246020u: goto label_246020;
        case 0x246030u: goto label_246030;
        default: break;
    }

    ctx->pc = 0x245f00u;

    // 0x245f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245f08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245f10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x245f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245f18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x245f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x245f1c: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x245F1Cu;
    SET_GPR_U32(ctx, 31, 0x245F24u);
    ctx->pc = 0x245F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F1Cu;
    // 0x245f20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x245F1Cu, 0x245F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F24u;
label_245f24:
    // 0x245f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245f2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245f30: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x245f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245f34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245f38: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x245f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x245f3c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x245F3Cu;
    {
        const bool branch_taken_0x245f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f3c) {
            ctx->pc = 0x246008u;
            goto label_246008;
        }
    }
    ctx->pc = 0x245F44u;
    // 0x245f44: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x245F44u;
    SET_GPR_U32(ctx, 31, 0x245F4Cu);
    ctx->pc = 0x245F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F44u;
    // 0x245f48: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x245F44u, 0x245F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F4Cu;
label_245f4c:
    // 0x245f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245f50: 0x50a00049  beql        $a1, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x245F50u;
    {
        const bool branch_taken_0x245f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f50) {
            ctx->pc = 0x245F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F50u;
            // 0x245f54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246078u;
            return;
        }
    }
    ctx->pc = 0x245F58u;
    // 0x245f58: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x245f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x245f5c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x245F5Cu;
    {
        const bool branch_taken_0x245f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F5Cu;
        // 0x245f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f5c) {
            ctx->pc = 0x246074u;
            return;
        }
    }
    ctx->pc = 0x245F64u;
    // 0x245f64: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x245f68: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x245f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x245f6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245f70: 0x8c630920  lw          $v1, 0x920($v1)
    ctx->pc = 0x245f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2336)));
    // 0x245f74: 0x600008  jr          $v1
    ctx->pc = 0x245F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245F80u: goto label_245f80;
            case 0x245FA0u: goto label_245fa0;
            case 0x245FD0u: goto label_245fd0;
            case 0x245FD8u: goto label_245fd8;
            case 0x245FE0u: goto label_245fe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245F74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245F7Cu;
    // 0x245f7c: 0x0  nop
    ctx->pc = 0x245f7cu;
    // NOP
label_245f80:
    // 0x245f80: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x245f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x245f84: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x245F84u;
    {
        const bool branch_taken_0x245f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f84) {
            ctx->pc = 0x245F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F84u;
            // 0x245f88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246074u;
            return;
        }
    }
    ctx->pc = 0x245F8Cu;
    // 0x245f8c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x245f90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245f98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x245F98u;
    {
        const bool branch_taken_0x245f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F98u;
        // 0x245f9c: 0x511021  addu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f98) {
            ctx->pc = 0x245FF4u;
            goto label_245ff4;
        }
    }
    ctx->pc = 0x245FA0u;
label_245fa0:
    // 0x245fa0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x245fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x245fa4: 0x50600033  beql        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x245FA4u;
    {
        const bool branch_taken_0x245fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fa4) {
            ctx->pc = 0x245FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FA4u;
            // 0x245fa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246074u;
            return;
        }
    }
    ctx->pc = 0x245FACu;
    // 0x245fac: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x245facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x245fb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245fb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x245fbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x245fc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245fc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x245FC4u;
    {
        const bool branch_taken_0x245fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FC4u;
        // 0x245fc8: 0x245000a0  addiu       $s0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fc4) {
            ctx->pc = 0x246000u;
            goto label_246000;
        }
    }
    ctx->pc = 0x245FCCu;
    // 0x245fcc: 0x0  nop
    ctx->pc = 0x245fccu;
    // NOP
label_245fd0:
    // 0x245fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x245FD0u;
    {
        const bool branch_taken_0x245fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FD0u;
        // 0x245fd4: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fd0) {
            ctx->pc = 0x245FE4u;
            goto label_245fe4;
        }
    }
    ctx->pc = 0x245FD8u;
label_245fd8:
    // 0x245fd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245FD8u;
    {
        const bool branch_taken_0x245fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FD8u;
        // 0x245fdc: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fd8) {
            ctx->pc = 0x245FE4u;
            goto label_245fe4;
        }
    }
    ctx->pc = 0x245FE0u;
label_245fe0:
    // 0x245fe0: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x245fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_245fe4:
    // 0x245fe4: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x245FE4u;
    {
        const bool branch_taken_0x245fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fe4) {
            ctx->pc = 0x245FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245FE4u;
            // 0x245fe8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246074u;
            return;
        }
    }
    ctx->pc = 0x245FECu;
    // 0x245fec: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x245fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x245ff0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x245ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_245ff4:
    // 0x245ff4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x245ff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x245ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245ffc: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x245ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_246000:
    // 0x246000: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x246000u;
    {
        const bool branch_taken_0x246000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246000u;
        // 0x246004: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246000) {
            ctx->pc = 0x246074u;
            return;
        }
    }
    ctx->pc = 0x246008u;
label_246008:
    // 0x246008: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x246008u;
    SET_GPR_U32(ctx, 31, 0x246010u);
    ctx->pc = 0x24600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246008u;
    // 0x24600c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x246008u, 0x246010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246010u;
label_246010:
    // 0x246010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246014: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x246014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246018: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x246018u;
    SET_GPR_U32(ctx, 31, 0x246020u);
    ctx->pc = 0x24601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246018u;
    // 0x24601c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x246018u, 0x246020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246020u;
label_246020:
    // 0x246020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246028: 0xc091704  jal         func_245C10
    ctx->pc = 0x246028u;
    SET_GPR_U32(ctx, 31, 0x246030u);
    ctx->pc = 0x24602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246028u;
    // 0x24602c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246028u, 0x246030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246030u;
label_246030:
    // 0x246030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246034: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x246034u;
    {
        const bool branch_taken_0x246034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x246034) {
            ctx->pc = 0x246038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246034u;
            // 0x246038: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246078u;
            return;
        }
    }
    ctx->pc = 0x24603Cu;
    // 0x24603c: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x24603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x246040: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246040u;
    {
        const bool branch_taken_0x246040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246040u;
        // 0x246044: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246040) {
            ctx->pc = 0x24606Cu;
            return;
        }
    }
    ctx->pc = 0x246048u;
    // 0x246048: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x246048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x24604c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x246050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246054: 0x8c630940  lw          $v1, 0x940($v1)
    ctx->pc = 0x246054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2368)));
    // 0x246058: 0x600008  jr          $v1
    ctx->pc = 0x246058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246060u: goto label_246060;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246060u;
label_246060:
    // 0x246060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x246060u;
    {
        const bool branch_taken_0x246060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246060u;
        // 0x246064: 0x24a30060  addiu       $v1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246060) {
            ctx->pc = 0x24606Cu;
            return;
        }
    }
    ctx->pc = 0x246068u;
}
