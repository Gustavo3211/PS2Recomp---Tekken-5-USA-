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

// Function: sub_0035F208
// Address: 0x35f208 - 0x35f260
void sub_0035F208_0x35f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F208_0x35f208");
#endif

    switch (ctx->pc) {
        case 0x35f238u: goto label_35f238;
        default: break;
    }

    ctx->pc = 0x35f208u;

    // 0x35f208: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f20c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f210: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x35f210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35f214: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35f214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f21c: 0x2c840040  sltiu       $a0, $a0, 0x40
    ctx->pc = 0x35f21cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f224: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F224u;
    {
        const bool branch_taken_0x35f224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F224u;
        // 0x35f228: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f224) {
            ctx->pc = 0x35F248u;
            goto label_35f248;
        }
    }
    ctx->pc = 0x35F22Cu;
    // 0x35f22c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f230: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F230u;
    SET_GPR_U32(ctx, 31, 0x35F238u);
    ctx->pc = 0x35F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F230u;
    // 0x35f234: 0x24846858  addiu       $a0, $a0, 0x6858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F230u, 0x35F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F238u;
label_35f238:
    // 0x35f238: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f23c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35F23Cu;
    {
        const bool branch_taken_0x35f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F23Cu;
        // 0x35f240: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f23c) {
            ctx->pc = 0x35F254u;
            goto label_35f254;
        }
    }
    ctx->pc = 0x35F244u;
    // 0x35f244: 0x0  nop
    ctx->pc = 0x35f244u;
    // NOP
label_35f248:
    // 0x35f248: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35f248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35f24c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35f24cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35f250: 0x8c222ff0  lw          $v0, 0x2FF0($at)
    ctx->pc = 0x35f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12272)));
label_35f254:
    // 0x35f254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f258: 0x3e00008  jr          $ra
    ctx->pc = 0x35F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F258u;
        // 0x35f25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F260u;
}
