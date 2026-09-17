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

// Function: sub_0021C120
// Address: 0x21c120 - 0x21c178
void sub_0021C120_0x21c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C120_0x21c120");
#endif

    ctx->pc = 0x21c120u;

    // 0x21c120: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x21c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x21c124: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x21c124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x21c128: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x21c128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c12c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21c130: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21c134: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x21c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21c138: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x21c13c: 0x90a60013  lbu         $a2, 0x13($a1)
    ctx->pc = 0x21c13cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x21c140: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x21c140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21c144: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21c144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21c148: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21c148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21c14c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x21c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21c150: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c158: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21c158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21c15c: 0x90a30013  lbu         $v1, 0x13($a1)
    ctx->pc = 0x21c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x21c160: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x21c164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c168: 0xa0a30013  sb          $v1, 0x13($a1)
    ctx->pc = 0x21c168u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x21c16c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C16Cu;
        // 0x21c170: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C174u;
    // 0x21c174: 0x0  nop
    ctx->pc = 0x21c174u;
    // NOP
    ctx->pc = 0x21c178u;
}
