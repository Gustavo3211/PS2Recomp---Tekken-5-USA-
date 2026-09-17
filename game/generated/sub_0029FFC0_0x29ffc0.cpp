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

// Function: sub_0029FFC0
// Address: 0x29ffc0 - 0x2a0000
void sub_0029FFC0_0x29ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FFC0_0x29ffc0");
#endif

    switch (ctx->pc) {
        case 0x29fffcu: goto label_29fffc;
        default: break;
    }

    ctx->pc = 0x29ffc0u;

    // 0x29ffc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ffc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ffc8: 0x8c830168  lw          $v1, 0x168($a0)
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x29ffcc: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x29ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x29ffd0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29FFD0u;
    {
        const bool branch_taken_0x29ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ffd0) {
            ctx->pc = 0x29FFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FFD0u;
            // 0x29ffd4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0000u;
            return;
        }
    }
    ctx->pc = 0x29FFD8u;
    // 0x29ffd8: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x29ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x29ffdc: 0xc48c0154  lwc1        $f12, 0x154($a0)
    ctx->pc = 0x29ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ffe0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x29ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29ffe4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29ffe8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29ffec: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x29ffecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x29fff0: 0x24217720  addiu       $at, $at, 0x7720
    ctx->pc = 0x29fff0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30496));
    // 0x29fff4: 0xc0a7f48  jal         func_29FD20
    ctx->pc = 0x29FFF4u;
    SET_GPR_U32(ctx, 31, 0x29FFFCu);
    ctx->pc = 0x29FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFF4u;
    // 0x29fff8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FD20u, 0x29FFF4u, 0x29FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFFCu;
label_29fffc:
    // 0x29fffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29fffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2a0000u;
}
