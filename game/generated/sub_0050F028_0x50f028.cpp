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

// Function: sub_0050F028
// Address: 0x50f028 - 0x50f0c8
void sub_0050F028_0x50f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F028_0x50f028");
#endif

    switch (ctx->pc) {
        case 0x50f0a0u: goto label_50f0a0;
        case 0x50f0b0u: goto label_50f0b0;
        case 0x50f0c0u: goto label_50f0c0;
        default: break;
    }

    ctx->pc = 0x50f028u;

    // 0x50f028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50f02c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50f030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50f034: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50f034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50f038: 0x24a5c68c  addiu       $a1, $a1, -0x3974
    ctx->pc = 0x50f038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952588));
    // 0x50f03c: 0x2484f080  addiu       $a0, $a0, -0xF80
    ctx->pc = 0x50f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50f040: 0x84824cd6  lh          $v0, 0x4CD6($a0)
    ctx->pc = 0x50f040u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903D56u));
    // 0x50f044: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50f044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50f048: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50f048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC68Cu));
    // 0x50f04c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50f050: 0x84840096  lh          $a0, 0x96($a0)
    ctx->pc = 0x50f050u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8FF116u));
    // 0x50f054: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f05c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50f060: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50f060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50f064: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50F064u;
    {
        const bool branch_taken_0x50f064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x50F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F064u;
        // 0x50f068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f064) {
            ctx->pc = 0x50F078u;
            goto label_50f078;
        }
    }
    ctx->pc = 0x50F06Cu;
    // 0x50f06c: 0x8143b94  j           func_50EE50
    ctx->pc = 0x50F06Cu;
    ctx->pc = 0x50F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F06Cu;
    // 0x50f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50EE50u, 0x50F06Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F074u;
    // 0x50f074: 0x0  nop
    ctx->pc = 0x50f074u;
    // NOP
label_50f078:
    // 0x50f078: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x50f078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x50f07c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x50F07Cu;
    {
        const bool branch_taken_0x50f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F07Cu;
        // 0x50f080: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f07c) {
            ctx->pc = 0x50F0E4u;
            return;
        }
    }
    ctx->pc = 0x50F084u;
    // 0x50f084: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50f084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x50f088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50f08c: 0x8c63d380  lw          $v1, -0x2C80($v1)
    ctx->pc = 0x50f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955904)));
    // 0x50f090: 0x600008  jr          $v1
    ctx->pc = 0x50F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x50F098u: goto label_50f098;
            case 0x50F0A8u: goto label_50f0a8;
            case 0x50F0B8u: goto label_50f0b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F090u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50F098u;
label_50f098:
    // 0x50f098: 0xc142850  jal         func_50A140
    ctx->pc = 0x50F098u;
    SET_GPR_U32(ctx, 31, 0x50F0A0u);
    ctx->pc = 0x50A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A140u, 0x50F098u, 0x50F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F0A0u;
label_50f0a0:
    // 0x50f0a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x50F0A0u;
    {
        const bool branch_taken_0x50f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F0A0u;
        // 0x50f0a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f0a0) {
            ctx->pc = 0x50F0E4u;
            return;
        }
    }
    ctx->pc = 0x50F0A8u;
label_50f0a8:
    // 0x50f0a8: 0xc142936  jal         func_50A4D8
    ctx->pc = 0x50F0A8u;
    SET_GPR_U32(ctx, 31, 0x50F0B0u);
    ctx->pc = 0x50A4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A4D8u, 0x50F0A8u, 0x50F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F0B0u;
label_50f0b0:
    // 0x50f0b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x50F0B0u;
    {
        const bool branch_taken_0x50f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F0B0u;
        // 0x50f0b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f0b0) {
            ctx->pc = 0x50F0E4u;
            return;
        }
    }
    ctx->pc = 0x50F0B8u;
label_50f0b8:
    // 0x50f0b8: 0xc14293c  jal         func_50A4F0
    ctx->pc = 0x50F0B8u;
    SET_GPR_U32(ctx, 31, 0x50F0C0u);
    ctx->pc = 0x50A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A4F0u, 0x50F0B8u, 0x50F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F0C0u;
label_50f0c0:
    // 0x50f0c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x50F0C0u;
    {
        const bool branch_taken_0x50f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F0C0u;
        // 0x50f0c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f0c0) {
            ctx->pc = 0x50F0E4u;
            return;
        }
    }
    ctx->pc = 0x50F0C8u;
}
