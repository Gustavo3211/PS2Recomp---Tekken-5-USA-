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

// Function: sub_0021E170
// Address: 0x21e170 - 0x21e1c8
void sub_0021E170_0x21e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E170_0x21e170");
#endif

    switch (ctx->pc) {
        case 0x21e198u: goto label_21e198;
        default: break;
    }

    ctx->pc = 0x21e170u;

    // 0x21e170: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x21e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e174: 0x2402026b  addiu       $v0, $zero, 0x26B
    ctx->pc = 0x21e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x21e178: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x21e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21e17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e180: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21e180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e184: 0x44280b  movn        $a1, $v0, $a0
    ctx->pc = 0x21e184u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x21e188: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x21e188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21e18c: 0x808750c  j           func_21D430
    ctx->pc = 0x21E18Cu;
    ctx->pc = 0x21E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E18Cu;
    // 0x21e190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D430u;
    sub_0021D430_0x21d430(rdram, ctx, runtime); return;
    ctx->pc = 0x21E194u;
    // 0x21e194: 0x0  nop
    ctx->pc = 0x21e194u;
    // NOP
label_21e198:
    // 0x21e198: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e19c: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x21e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21e1a0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8878u));
    // 0x21e1a4: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x21E1A4u;
    {
        const bool branch_taken_0x21e1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1A4u;
        // 0x21e1a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1a4) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E1ACu;
    // 0x21e1ac: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x21e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21e1b0: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x21E1B0u;
    {
        const bool branch_taken_0x21e1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1B0u;
        // 0x21e1b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1b0) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E1B8u;
    // 0x21e1b8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x21e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21e1bc: 0x8087750  j           func_21DD40
    ctx->pc = 0x21E1BCu;
    ctx->pc = 0x21E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1BCu;
    // 0x21e1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DD40u, 0x21E1BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E1C4u;
    // 0x21e1c4: 0x0  nop
    ctx->pc = 0x21e1c4u;
    // NOP
    ctx->pc = 0x21e1c8u;
}
