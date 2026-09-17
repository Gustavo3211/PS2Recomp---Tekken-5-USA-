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

// Function: sub_0010ACE0
// Address: 0x10ace0 - 0x10add8
void sub_0010ACE0_0x10ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ACE0_0x10ace0");
#endif

    switch (ctx->pc) {
        case 0x10ad60u: goto label_10ad60;
        case 0x10ad68u: goto label_10ad68;
        case 0x10ad80u: goto label_10ad80;
        case 0x10ad90u: goto label_10ad90;
        case 0x10ada4u: goto label_10ada4;
        default: break;
    }

    ctx->pc = 0x10ace0u;

    // 0x10ace0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10ace4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ace8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10ace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10acec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10acecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acf0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10acf4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10acf8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10acfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ad00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ad00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ad04: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x10ad08: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10AD08u;
    {
        const bool branch_taken_0x10ad08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ad08) {
            ctx->pc = 0x10AD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD08u;
            // 0x10ad0c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD2Cu;
            goto label_10ad2c;
        }
    }
    ctx->pc = 0x10AD10u;
    // 0x10ad10: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x10ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x10ad14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10AD14u;
    {
        const bool branch_taken_0x10ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad14) {
            ctx->pc = 0x10AD38u;
            goto label_10ad38;
        }
    }
    ctx->pc = 0x10AD1Cu;
    // 0x10ad1c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x10ad20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ad24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10AD24u;
    {
        const bool branch_taken_0x10ad24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD24u;
        // 0x10ad28: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad24) {
            ctx->pc = 0x10AD48u;
            goto label_10ad48;
        }
    }
    ctx->pc = 0x10AD2Cu;
label_10ad2c:
    // 0x10ad2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ad30: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AD30u;
    {
        const bool branch_taken_0x10ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ad30) {
            ctx->pc = 0x10AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD30u;
            // 0x10ad34: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD40u;
            goto label_10ad40;
        }
    }
    ctx->pc = 0x10AD38u;
label_10ad38:
    // 0x10ad38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AD38u;
    {
        const bool branch_taken_0x10ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad38) {
            ctx->pc = 0x10AD48u;
            goto label_10ad48;
        }
    }
    ctx->pc = 0x10AD40u;
label_10ad40:
    // 0x10ad40: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ad44: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x10ad44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_10ad48:
    // 0x10ad48: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x10AD48u;
    {
        const bool branch_taken_0x10ad48 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad48) {
            ctx->pc = 0x10ADB0u;
            goto label_10adb0;
        }
    }
    ctx->pc = 0x10AD50u;
    // 0x10ad50: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x10ad50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x10ad54: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x10ad54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x10ad58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad5c: 0x0  nop
    ctx->pc = 0x10ad5cu;
    // NOP
label_10ad60:
    // 0x10ad60: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AD60u;
    SET_GPR_U32(ctx, 31, 0x10AD68u);
    ctx->pc = 0x10AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD60u;
    // 0x10ad64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AD60u, 0x10AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD68u;
label_10ad68:
    // 0x10ad68: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x10ad68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10ad6c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x10ad70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10ad78: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AD78u;
    SET_GPR_U32(ctx, 31, 0x10AD80u);
    ctx->pc = 0x10AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD78u;
    // 0x10ad7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AD78u, 0x10AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD80u;
label_10ad80:
    // 0x10ad80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10ad84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad88: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AD88u;
    SET_GPR_U32(ctx, 31, 0x10AD90u);
    ctx->pc = 0x10AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD88u;
    // 0x10ad8c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AD88u, 0x10AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD90u;
label_10ad90:
    // 0x10ad90: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x10ad90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10ad94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10ad9c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10AD9Cu;
    SET_GPR_U32(ctx, 31, 0x10ADA4u);
    ctx->pc = 0x10ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD9Cu;
    // 0x10ada0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10AD9Cu, 0x10ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ADA4u;
label_10ada4:
    // 0x10ada4: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x10ada4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10ada8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10ADA8u;
    {
        const bool branch_taken_0x10ada8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADA8u;
        // 0x10adac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ada8) {
            ctx->pc = 0x10AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ad60;
        }
    }
    ctx->pc = 0x10ADB0u;
label_10adb0:
    // 0x10adb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10adb4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10adb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10adb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10adb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10adbc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10adbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10adc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10adc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10adc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10adc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10adc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10adc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADCCu;
        // 0x10add0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADD4u;
    // 0x10add4: 0x0  nop
    ctx->pc = 0x10add4u;
    // NOP
    ctx->pc = 0x10add8u;
}
