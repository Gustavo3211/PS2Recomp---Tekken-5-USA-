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

// Function: sub_0032FA50
// Address: 0x32fa50 - 0x32fb50
void sub_0032FA50_0x32fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FA50_0x32fa50");
#endif

    switch (ctx->pc) {
        case 0x32fa90u: goto label_32fa90;
        case 0x32fb1cu: goto label_32fb1c;
        case 0x32fb2cu: goto label_32fb2c;
        case 0x32fb30u: goto label_32fb30;
        case 0x32fb38u: goto label_32fb38;
        default: break;
    }

    ctx->pc = 0x32fa50u;

    // 0x32fa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fa54: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x32fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x32fa58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32fa5c: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x32fa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x32fa60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32fa64: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32fa64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa68: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x32FA68u;
    {
        const bool branch_taken_0x32fa68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA68u;
        // 0x32fa6c: 0x260a82c0  addiu       $t2, $s0, -0x7D40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa68) {
            ctx->pc = 0x32FAFCu;
            goto label_32fafc;
        }
    }
    ctx->pc = 0x32FA70u;
    // 0x32fa70: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x32fa70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x32fa74: 0x24180100  addiu       $t8, $zero, 0x100
    ctx->pc = 0x32fa74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x32fa78: 0x3c0f3000  lui         $t7, 0x3000
    ctx->pc = 0x32fa78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12288 << 16));
    // 0x32fa7c: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x32fa7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x32fa80: 0x3c0ef000  lui         $t6, 0xF000
    ctx->pc = 0x32fa80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)61440 << 16));
    // 0x32fa84: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x32fa84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x32fa88: 0x3c0d4a00  lui         $t5, 0x4A00
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)18944 << 16));
    // 0x32fa8c: 0x0  nop
    ctx->pc = 0x32fa8cu;
    // NOP
label_32fa90:
    // 0x32fa90: 0x2cc20101  sltiu       $v0, $a2, 0x101
    ctx->pc = 0x32fa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x32fa94: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x32fa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa98: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x32fa98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x32fa9c: 0xab2024  and         $a0, $a1, $t3
    ctx->pc = 0x32fa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x32faa0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32faa4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x32faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32faa8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32faac: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x32faacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x32fab0: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x32fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x32fab4: 0x6f1825  or          $v1, $v1, $t7
    ctx->pc = 0x32fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 15));
    // 0x32fab8: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x32fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x32fabc: 0x148b0004  bne         $a0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FABCu;
    {
        const bool branch_taken_0x32fabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x32FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FABCu;
        // 0x32fac0: 0x2403c  dsll32      $t0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fabc) {
            ctx->pc = 0x32FAD0u;
            goto label_32fad0;
        }
    }
    ctx->pc = 0x32FAC4u;
    // 0x32fac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32FAC4u;
    {
        const bool branch_taken_0x32fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAC4u;
        // 0x32fac8: 0xae1025  or          $v0, $a1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fac4) {
            ctx->pc = 0x32FAD4u;
            goto label_32fad4;
        }
    }
    ctx->pc = 0x32FACCu;
    // 0x32facc: 0x0  nop
    ctx->pc = 0x32faccu;
    // NOP
label_32fad0:
    // 0x32fad0: 0xac1024  and         $v0, $a1, $t4
    ctx->pc = 0x32fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
label_32fad4:
    // 0x32fad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32fad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32fadc: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x32fadcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x32fae0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x32fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x32fae4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x32fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32fae8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x32fae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32faec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32faf0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x32faf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x32faf4: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x32FAF4u;
    {
        const bool branch_taken_0x32faf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAF4u;
        // 0x32faf8: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32faf4) {
            ctx->pc = 0x32FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fa90;
        }
    }
    ctx->pc = 0x32FAFCu;
label_32fafc:
    // 0x32fafc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x32fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x32fb00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32fb00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb04: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x32fb04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x32fb08: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x32fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32fb0c: 0x261082c0  addiu       $s0, $s0, -0x7D40
    ctx->pc = 0x32fb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935232));
    // 0x32fb10: 0x260500ff  addiu       $a1, $s0, 0xFF
    ctx->pc = 0x32fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    // 0x32fb14: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x32FB14u;
    SET_GPR_U32(ctx, 31, 0x32FB1Cu);
    ctx->pc = 0x32FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB14u;
    // 0x32fb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x32FB14u, 0x32FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB1Cu;
label_32fb1c:
    // 0x32fb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32fb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb24: 0xc0cd0dc  jal         func_334370
    ctx->pc = 0x32FB24u;
    SET_GPR_U32(ctx, 31, 0x32FB2Cu);
    ctx->pc = 0x32FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB24u;
    // 0x32fb28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334370u, 0x32FB24u, 0x32FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB2Cu;
label_32fb2c:
    // 0x32fb2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32fb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32fb30:
    // 0x32fb30: 0xc0cd114  jal         func_334450
    ctx->pc = 0x32FB30u;
    SET_GPR_U32(ctx, 31, 0x32FB38u);
    ctx->pc = 0x32FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB30u;
    // 0x32fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334450u, 0x32FB30u, 0x32FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB38u;
label_32fb38:
    // 0x32fb38: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x32FB38u;
    {
        const bool branch_taken_0x32fb38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x32FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB38u;
        // 0x32fb3c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb38) {
            ctx->pc = 0x32FB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fb30;
        }
    }
    ctx->pc = 0x32FB40u;
    // 0x32fb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32fb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fb44: 0x3e00008  jr          $ra
    ctx->pc = 0x32FB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB44u;
        // 0x32fb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FB4Cu;
    // 0x32fb4c: 0x0  nop
    ctx->pc = 0x32fb4cu;
    // NOP
    ctx->pc = 0x32fb50u;
}
