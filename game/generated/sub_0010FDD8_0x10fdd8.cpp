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

// Function: sub_0010FDD8
// Address: 0x10fdd8 - 0x10fe70
void sub_0010FDD8_0x10fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FDD8_0x10fdd8");
#endif

    switch (ctx->pc) {
        case 0x10fe10u: goto label_10fe10;
        case 0x10fe24u: goto label_10fe24;
        default: break;
    }

    ctx->pc = 0x10fdd8u;

    // 0x10fdd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10fddc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10fde0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fde4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10fde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fde8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10fdec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10fdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fdf4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10fdf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10fdfc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10fdfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10fe00: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FE00u;
    {
        const bool branch_taken_0x10fe00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fe00) {
            ctx->pc = 0x10FE10u;
            goto label_10fe10;
        }
    }
    ctx->pc = 0x10FE08u;
    // 0x10fe08: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FE08u;
    SET_GPR_U32(ctx, 31, 0x10FE10u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FE08u, 0x10FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE10u;
label_10fe10:
    // 0x10fe10: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10fe14: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10fe14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10fe18: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10fe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10fe1c: 0xc043f4c  jal         func_10FD30
    ctx->pc = 0x10FE1Cu;
    SET_GPR_U32(ctx, 31, 0x10FE24u);
    ctx->pc = 0x10FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE1Cu;
    // 0x10fe20: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FD30u, 0x10FE1Cu, 0x10FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE24u;
label_10fe24:
    // 0x10fe24: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FE24u;
    {
        const bool branch_taken_0x10fe24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE24u;
        // 0x10fe28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe24) {
            ctx->pc = 0x10FE40u;
            goto label_10fe40;
        }
    }
    ctx->pc = 0x10FE2Cu;
    // 0x10fe2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fe2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fe30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fe30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fe34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fe34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe38: 0x804627e  j           func_1189F8
    ctx->pc = 0x10FE38u;
    ctx->pc = 0x10FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE38u;
    // 0x10fe3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    sub_001189F8_0x1189f8(rdram, ctx, runtime); return;
    ctx->pc = 0x10FE40u;
label_10fe40:
    // 0x10fe40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fe40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fe44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fe44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fe48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fe48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE4Cu;
        // 0x10fe50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE54u;
    // 0x10fe54: 0x0  nop
    ctx->pc = 0x10fe54u;
    // NOP
    // 0x10fe58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10fe5c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10fe60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10fe60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10fe64: 0x8043f4c  j           func_10FD30
    ctx->pc = 0x10FE64u;
    ctx->pc = 0x10FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE64u;
    // 0x10fe68: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD30u;
    sub_0010FD30_0x10fd30(rdram, ctx, runtime); return;
    ctx->pc = 0x10FE6Cu;
    // 0x10fe6c: 0x0  nop
    ctx->pc = 0x10fe6cu;
    // NOP
    ctx->pc = 0x10fe70u;
}
