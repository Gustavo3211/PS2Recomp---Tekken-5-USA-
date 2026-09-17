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

// Function: sub_00215C40
// Address: 0x215c40 - 0x215cb0
void sub_00215C40_0x215c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215C40_0x215c40");
#endif

    switch (ctx->pc) {
        case 0x215c58u: goto label_215c58;
        case 0x215c60u: goto label_215c60;
        case 0x215c80u: goto label_215c80;
        case 0x215c90u: goto label_215c90;
        case 0x215c9cu: goto label_215c9c;
        default: break;
    }

    ctx->pc = 0x215c40u;

    // 0x215c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215c50: 0xc086308  jal         func_218C20
    ctx->pc = 0x215C50u;
    SET_GPR_U32(ctx, 31, 0x215C58u);
    ctx->pc = 0x215C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C50u;
    // 0x215c54: 0xa6050042  sh          $a1, 0x42($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C20u, 0x215C50u, 0x215C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C58u;
label_215c58:
    // 0x215c58: 0xc09d940  jal         func_276500
    ctx->pc = 0x215C58u;
    SET_GPR_U32(ctx, 31, 0x215C60u);
    ctx->pc = 0x215C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C58u;
    // 0x215c5c: 0xa6020040  sh          $v0, 0x40($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x215C58u, 0x215C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C60u;
label_215c60:
    // 0x215c60: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x215C60u;
    {
        const bool branch_taken_0x215c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C60u;
        // 0x215c64: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c60) {
            ctx->pc = 0x215C94u;
            goto label_215c94;
        }
    }
    ctx->pc = 0x215C68u;
    // 0x215c68: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x215c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215c6c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215C6Cu;
    {
        const bool branch_taken_0x215c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x215c6c) {
            ctx->pc = 0x215C88u;
            goto label_215c88;
        }
    }
    ctx->pc = 0x215C74u;
    // 0x215c74: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x215c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x215c78: 0xc086494  jal         func_219250
    ctx->pc = 0x215C78u;
    SET_GPR_U32(ctx, 31, 0x215C80u);
    ctx->pc = 0x215C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C78u;
    // 0x215c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219250u, 0x215C78u, 0x215C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C80u;
label_215c80:
    // 0x215c80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215C80u;
    {
        const bool branch_taken_0x215c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C80u;
        // 0x215c84: 0xa602003e  sh          $v0, 0x3E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c80) {
            ctx->pc = 0x215C94u;
            goto label_215c94;
        }
    }
    ctx->pc = 0x215C88u;
label_215c88:
    // 0x215c88: 0xc086316  jal         func_218C58
    ctx->pc = 0x215C88u;
    SET_GPR_U32(ctx, 31, 0x215C90u);
    ctx->pc = 0x215C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C88u;
    // 0x215c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C58u, 0x215C88u, 0x215C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C90u;
label_215c90:
    // 0x215c90: 0xa602003e  sh          $v0, 0x3E($s0)
    ctx->pc = 0x215c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
label_215c94:
    // 0x215c94: 0xc08632a  jal         func_218CA8
    ctx->pc = 0x215C94u;
    SET_GPR_U32(ctx, 31, 0x215C9Cu);
    ctx->pc = 0x215C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C94u;
    // 0x215c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CA8u, 0x215C94u, 0x215C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C9Cu;
label_215c9c:
    // 0x215c9c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x215c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x215ca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x215CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CA8u;
        // 0x215cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215CB0u;
}
