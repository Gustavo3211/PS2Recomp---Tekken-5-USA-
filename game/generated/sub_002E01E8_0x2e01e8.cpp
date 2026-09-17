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

// Function: sub_002E01E8
// Address: 0x2e01e8 - 0x2e0238
void sub_002E01E8_0x2e01e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E01E8_0x2e01e8");
#endif

    switch (ctx->pc) {
        case 0x2e022cu: goto label_2e022c;
        default: break;
    }

    ctx->pc = 0x2e01e8u;

    // 0x2e01e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e01e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e01ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e01ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e01f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e01f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e01f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e01fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e0200: 0x2442eaa8  addiu       $v0, $v0, -0x1558
    ctx->pc = 0x2e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961832));
    // 0x2e0204: 0x2463fa00  addiu       $v1, $v1, -0x600
    ctx->pc = 0x2e0204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965760));
    // 0x2e0208: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x2e0208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x2e020c: 0xa207017a  sb          $a3, 0x17A($s0)
    ctx->pc = 0x2e020cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 378), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e0210: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x2e0210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2e0214: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e0214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e0218: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x2e0218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2e021c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2e021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2e0220: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x2e0220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2e0224: 0xc0b8098  jal         func_2E0260
    ctx->pc = 0x2E0224u;
    SET_GPR_U32(ctx, 31, 0x2E022Cu);
    ctx->pc = 0x2E0228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0224u;
    // 0x2e0228: 0xa200017b  sb          $zero, 0x17B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 379), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0260u, 0x2E0224u, 0x2E022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E022Cu;
label_2e022c:
    // 0x2e022c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E022Cu;
    {
        const bool branch_taken_0x2e022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E022Cu;
        // 0x2e0230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e022c) {
            ctx->pc = 0x2E0250u;
            return;
        }
    }
    ctx->pc = 0x2E0234u;
    // 0x2e0234: 0x0  nop
    ctx->pc = 0x2e0234u;
    // NOP
    ctx->pc = 0x2e0238u;
}
