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

// Function: sub_0024C410
// Address: 0x24c410 - 0x24c490
void sub_0024C410_0x24c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C410_0x24c410");
#endif

    switch (ctx->pc) {
        case 0x24c450u: goto label_24c450;
        case 0x24c478u: goto label_24c478;
        default: break;
    }

    ctx->pc = 0x24c410u;

    // 0x24c410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c41c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24c420: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x24c420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24c424: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x24C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C424u;
        // 0x24c428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C47Cu;
            goto label_24c47c;
        }
    }
    ctx->pc = 0x24C42Cu;
    // 0x24c42c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24c430: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c434: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24c434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24c438: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24c43c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x24c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x24c440: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24c448: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24C448u;
    SET_GPR_U32(ctx, 31, 0x24C450u);
    ctx->pc = 0x24C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C448u;
    // 0x24c44c: 0xae050040  sw          $a1, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24C448u, 0x24C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C450u;
label_24c450:
    // 0x24c450: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x24c450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24c454: 0x3844001f  xori        $a0, $v0, 0x1F
    ctx->pc = 0x24c454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x24c458: 0xde050028  ld          $a1, 0x28($s0)
    ctx->pc = 0x24c458u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c45c: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x24c45cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x24c460: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x24c460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24c464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c468: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x24c468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x24c46c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x24c46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x24c470: 0xc092940  jal         func_24A500
    ctx->pc = 0x24C470u;
    SET_GPR_U32(ctx, 31, 0x24C478u);
    ctx->pc = 0x24C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C470u;
    // 0x24c474: 0xfe050028  sd          $a1, 0x28($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24C470u, 0x24C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C478u;
label_24c478:
    // 0x24c478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24c478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c47c:
    // 0x24c47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24c480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c484: 0x3e00008  jr          $ra
    ctx->pc = 0x24C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C484u;
        // 0x24c488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C48Cu;
    // 0x24c48c: 0x0  nop
    ctx->pc = 0x24c48cu;
    // NOP
    ctx->pc = 0x24c490u;
}
