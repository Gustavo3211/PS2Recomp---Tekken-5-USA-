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

// Function: sub_00113EF8
// Address: 0x113ef8 - 0x113fa8
void sub_00113EF8_0x113ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113EF8_0x113ef8");
#endif

    switch (ctx->pc) {
        case 0x113f08u: goto label_113f08;
        case 0x113f3cu: goto label_113f3c;
        case 0x113f54u: goto label_113f54;
        case 0x113f5cu: goto label_113f5c;
        case 0x113f7cu: goto label_113f7c;
        case 0x113f84u: goto label_113f84;
        default: break;
    }

    ctx->pc = 0x113ef8u;

label_113ef8:
    // 0x113ef8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x113efc: 0x8043cf0  j           func_10F3C0
    ctx->pc = 0x113EFCu;
    ctx->pc = 0x113F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EFCu;
    // 0x113f00: 0x8c44119c  lw          $a0, 0x119C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    sub_0010F3C0_0x10f3c0(rdram, ctx, runtime); return;
    ctx->pc = 0x113F04u;
    // 0x113f04: 0x0  nop
    ctx->pc = 0x113f04u;
    // NOP
label_113f08:
    // 0x113f08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113f0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x113f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x113f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x113f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x113f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x113f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x113f1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x113f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113f24: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x113f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x113f28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x113f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x113f2c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x113f30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113f34: 0xc044fb2  jal         func_113EC8
    ctx->pc = 0x113F34u;
    SET_GPR_U32(ctx, 31, 0x113F3Cu);
    ctx->pc = 0x113F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F34u;
    // 0x113f38: 0x2614bac0  addiu       $s4, $s0, -0x4540 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EC8u, 0x113F34u, 0x113F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F3Cu;
label_113f3c:
    // 0x113f3c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x113f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x113f40: 0x8c431194  lw          $v1, 0x1194($v0)
    ctx->pc = 0x113f40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x131194u));
    // 0x113f44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113F44u;
    {
        const bool branch_taken_0x113f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113f44) {
            ctx->pc = 0x113F54u;
            goto label_113f54;
        }
    }
    ctx->pc = 0x113F4Cu;
    // 0x113f4c: 0xc044ffc  jal         func_113FF0
    ctx->pc = 0x113F4Cu;
    SET_GPR_U32(ctx, 31, 0x113F54u);
    ctx->pc = 0x113FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113FF0u, 0x113F4Cu, 0x113F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F54u;
label_113f54:
    // 0x113f54: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x113F54u;
    SET_GPR_U32(ctx, 31, 0x113F5Cu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x113F54u, 0x113F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F5Cu;
label_113f5c:
    // 0x113f5c: 0x8e11bac0  lw          $s1, -0x4540($s0)
    ctx->pc = 0x113f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949568)));
    // 0x113f60: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x113f64: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x113f64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x113f68: 0xae13bac0  sw          $s3, -0x4540($s0)
    ctx->pc = 0x113f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949568), GPR_U32(ctx, 19));
    // 0x113f6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113F6Cu;
    {
        const bool branch_taken_0x113f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F6Cu;
        // 0x113f70: 0xac7cbb00  sw          $gp, -0x4500($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949632), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f6c) {
            ctx->pc = 0x113F7Cu;
            goto label_113f7c;
        }
    }
    ctx->pc = 0x113F74u;
    // 0x113f74: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x113F74u;
    SET_GPR_U32(ctx, 31, 0x113F7Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x113F74u, 0x113F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F7Cu;
label_113f7c:
    // 0x113f7c: 0xc044fbe  jal         func_113EF8
    ctx->pc = 0x113F7Cu;
    SET_GPR_U32(ctx, 31, 0x113F84u);
    ctx->pc = 0x113EF8u;
    goto label_113ef8;
    ctx->pc = 0x113F84u;
label_113f84:
    // 0x113f84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x113f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113f8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x113f8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113f90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x113f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113f94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x113FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA0u;
        // 0x113fa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FA8u;
}
