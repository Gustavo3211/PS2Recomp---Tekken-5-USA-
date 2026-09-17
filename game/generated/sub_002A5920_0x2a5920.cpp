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

// Function: sub_002A5920
// Address: 0x2a5920 - 0x2a5980
void sub_002A5920_0x2a5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5920_0x2a5920");
#endif

    ctx->pc = 0x2a5920u;

    // 0x2a5920: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a5924: 0x2ca50003  sltiu       $a1, $a1, 0x3
    ctx->pc = 0x2a5924u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a5928: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a5928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a592c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A592Cu;
    {
        const bool branch_taken_0x2a592c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A592Cu;
        // 0x2a5930: 0x463821  addu        $a3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a592c) {
            ctx->pc = 0x2A5978u;
            goto label_2a5978;
        }
    }
    ctx->pc = 0x2A5934u;
    // 0x2a5934: 0x8cc40148  lw          $a0, 0x148($a2)
    ctx->pc = 0x2a5934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x2a5938: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a5938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a593c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5940: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a5940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a5944: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a5948: 0x8cc3014c  lw          $v1, 0x14C($a2)
    ctx->pc = 0x2a5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 332)));
    // 0x2a594c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5950: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a5950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a5954: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a5954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a5958: 0x8cc40150  lw          $a0, 0x150($a2)
    ctx->pc = 0x2a5958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x2a595c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a5960: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a5960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a5964: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a5968: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x2a5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x2a596c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5970: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a5970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a5974: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a5974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a5978:
    // 0x2a5978: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5980u;
}
