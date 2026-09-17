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

// Function: sub_0020BEB8
// Address: 0x20beb8 - 0x20bf20
void sub_0020BEB8_0x20beb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BEB8_0x20beb8");
#endif

    ctx->pc = 0x20beb8u;

    // 0x20beb8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x20beb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20bebc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20BEBCu;
    {
        const bool branch_taken_0x20bebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEBCu;
        // 0x20bec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bebc) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BEC4u;
    // 0x20bec4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bec8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20becc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bed0: 0x8c634520  lw          $v1, 0x4520($v1)
    ctx->pc = 0x20bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17696)));
    // 0x20bed4: 0x600008  jr          $v1
    ctx->pc = 0x20BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BEE0u: goto label_20bee0;
            case 0x20BEF0u: goto label_20bef0;
            case 0x20BF00u: goto label_20bf00;
            case 0x20BF10u: goto label_20bf10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BEDCu;
    // 0x20bedc: 0x0  nop
    ctx->pc = 0x20bedcu;
    // NOP
label_20bee0:
    // 0x20bee0: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20BEE4u;
    {
        const bool branch_taken_0x20bee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEE4u;
        // 0x20bee8: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bee4) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BEECu;
    // 0x20beec: 0x0  nop
    ctx->pc = 0x20beecu;
    // NOP
label_20bef0:
    // 0x20bef0: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bef4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20BEF4u;
    {
        const bool branch_taken_0x20bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEF4u;
        // 0x20bef8: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bef4) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BEFCu;
    // 0x20befc: 0x0  nop
    ctx->pc = 0x20befcu;
    // NOP
label_20bf00:
    // 0x20bf00: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bf04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20BF04u;
    {
        const bool branch_taken_0x20bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF04u;
        // 0x20bf08: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf04) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BF0Cu;
    // 0x20bf0c: 0x0  nop
    ctx->pc = 0x20bf0cu;
    // NOP
label_20bf10:
    // 0x20bf10: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bf14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20BF14u;
    {
        const bool branch_taken_0x20bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF14u;
        // 0x20bf18: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf14) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BF1Cu;
    // 0x20bf1c: 0x0  nop
    ctx->pc = 0x20bf1cu;
    // NOP
    ctx->pc = 0x20bf20u;
}
