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

// Function: sub_0035C3F8
// Address: 0x35c3f8 - 0x35c470
void sub_0035C3F8_0x35c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C3F8_0x35c3f8");
#endif

    switch (ctx->pc) {
        case 0x35c424u: goto label_35c424;
        default: break;
    }

    ctx->pc = 0x35c3f8u;

    // 0x35c3f8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35c3fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c400: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c404: 0x2c830030  sltiu       $v1, $a0, 0x30
    ctx->pc = 0x35c404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c40c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c410: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C410u;
    {
        const bool branch_taken_0x35c410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C410u;
        // 0x35c414: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c410) {
            ctx->pc = 0x35C430u;
            goto label_35c430;
        }
    }
    ctx->pc = 0x35C418u;
    // 0x35c418: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c41c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C41Cu;
    SET_GPR_U32(ctx, 31, 0x35C424u);
    ctx->pc = 0x35C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C41Cu;
    // 0x35c420: 0x24845828  addiu       $a0, $a0, 0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C41Cu, 0x35C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C424u;
label_35c424:
    // 0x35c424: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35C424u;
    {
        const bool branch_taken_0x35c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C424u;
        // 0x35c428: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c424) {
            ctx->pc = 0x35C464u;
            goto label_35c464;
        }
    }
    ctx->pc = 0x35C42Cu;
    // 0x35c42c: 0x0  nop
    ctx->pc = 0x35c42cu;
    // NOP
label_35c430:
    // 0x35c430: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c434: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c43c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c440: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x35c440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x35c444: 0x24c61378  addiu       $a2, $a2, 0x1378
    ctx->pc = 0x35c444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4984));
    // 0x35c448: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x35c448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35c44c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x35c44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x35c450: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35C450u;
    {
        const bool branch_taken_0x35c450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C450u;
        // 0x35c454: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c450) {
            ctx->pc = 0x35C460u;
            goto label_35c460;
        }
    }
    ctx->pc = 0x35C458u;
    // 0x35c458: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c45c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x35c45cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
label_35c460:
    // 0x35c460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c464:
    // 0x35c464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c468: 0x3e00008  jr          $ra
    ctx->pc = 0x35C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C468u;
        // 0x35c46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C470u;
}
