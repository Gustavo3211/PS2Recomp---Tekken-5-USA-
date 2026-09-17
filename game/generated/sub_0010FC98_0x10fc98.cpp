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

// Function: sub_0010FC98
// Address: 0x10fc98 - 0x10fd30
void sub_0010FC98_0x10fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC98_0x10fc98");
#endif

    switch (ctx->pc) {
        case 0x10fcd0u: goto label_10fcd0;
        case 0x10fce4u: goto label_10fce4;
        default: break;
    }

    ctx->pc = 0x10fc98u;

    // 0x10fc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10fc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10fc9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10fc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10fca0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fca4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10fcac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10fcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fcb4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10fcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10fcb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10fcbc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10fcbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10fcc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FCC0u;
    {
        const bool branch_taken_0x10fcc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcc0) {
            ctx->pc = 0x10FCD0u;
            goto label_10fcd0;
        }
    }
    ctx->pc = 0x10FCC8u;
    // 0x10fcc8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FCC8u;
    SET_GPR_U32(ctx, 31, 0x10FCD0u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FCC8u, 0x10FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCD0u;
label_10fcd0:
    // 0x10fcd0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10fcd4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10fcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10fcd8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10fcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10fcdc: 0xc043efc  jal         func_10FBF0
    ctx->pc = 0x10FCDCu;
    SET_GPR_U32(ctx, 31, 0x10FCE4u);
    ctx->pc = 0x10FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCDCu;
    // 0x10fce0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBF0u, 0x10FCDCu, 0x10FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FCE4u;
    {
        const bool branch_taken_0x10fce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE4u;
        // 0x10fce8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce4) {
            ctx->pc = 0x10FD00u;
            goto label_10fd00;
        }
    }
    ctx->pc = 0x10FCECu;
    // 0x10fcec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fcecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fcf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fcf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fcf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fcf8: 0x804627e  j           func_1189F8
    ctx->pc = 0x10FCF8u;
    ctx->pc = 0x10FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCF8u;
    // 0x10fcfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10FD00u;
label_10fd00:
    // 0x10fd00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fd00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fd04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD0Cu;
        // 0x10fd10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FD14u;
    // 0x10fd14: 0x0  nop
    ctx->pc = 0x10fd14u;
    // NOP
    // 0x10fd18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10fd1c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10fd20: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10fd20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10fd24: 0x8043efc  j           func_10FBF0
    ctx->pc = 0x10FD24u;
    ctx->pc = 0x10FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD24u;
    // 0x10fd28: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBF0u;
    sub_0010FBF0_0x10fbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x10FD2Cu;
    // 0x10fd2c: 0x0  nop
    ctx->pc = 0x10fd2cu;
    // NOP
    ctx->pc = 0x10fd30u;
}
