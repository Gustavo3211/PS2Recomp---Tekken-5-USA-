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

// Function: sub_002A55B8
// Address: 0x2a55b8 - 0x2a5600
void sub_002A55B8_0x2a55b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A55B8_0x2a55b8");
#endif

    switch (ctx->pc) {
        case 0x2a55f8u: goto label_2a55f8;
        default: break;
    }

    ctx->pc = 0x2a55b8u;

    // 0x2a55b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a55b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a55bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a55bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a55c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a55c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a55c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a55cc: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x2a55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2a55d0: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x2a55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x2a55d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a55d8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2a55d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2a55dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a55e0: 0x24c6daf0  addiu       $a2, $a2, -0x2510
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957808));
    // 0x2a55e4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2a55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2a55e8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a55ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2a55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a55f0: 0xc0a958a  jal         func_2A5628
    ctx->pc = 0x2A55F0u;
    SET_GPR_U32(ctx, 31, 0x2A55F8u);
    ctx->pc = 0x2A55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A55F0u;
    // 0x2a55f4: 0xae060038  sw          $a2, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5628u, 0x2A55F0u, 0x2A55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55F8u;
label_2a55f8:
    // 0x2a55f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A55F8u;
    {
        const bool branch_taken_0x2a55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55F8u;
        // 0x2a55fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55f8) {
            ctx->pc = 0x2A5618u;
            return;
        }
    }
    ctx->pc = 0x2A5600u;
}
