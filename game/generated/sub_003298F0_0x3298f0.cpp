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

// Function: sub_003298F0
// Address: 0x3298f0 - 0x329950
void sub_003298F0_0x3298f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003298F0_0x3298f0");
#endif

    switch (ctx->pc) {
        case 0x3298f0u: goto label_3298f0;
        case 0x3298f4u: goto label_3298f4;
        case 0x3298f8u: goto label_3298f8;
        case 0x3298fcu: goto label_3298fc;
        case 0x329900u: goto label_329900;
        case 0x329904u: goto label_329904;
        case 0x329908u: goto label_329908;
        case 0x32990cu: goto label_32990c;
        case 0x329910u: goto label_329910;
        case 0x329914u: goto label_329914;
        case 0x329918u: goto label_329918;
        case 0x32991cu: goto label_32991c;
        case 0x329920u: goto label_329920;
        case 0x329924u: goto label_329924;
        case 0x329928u: goto label_329928;
        case 0x32992cu: goto label_32992c;
        case 0x329930u: goto label_329930;
        case 0x329934u: goto label_329934;
        case 0x329938u: goto label_329938;
        case 0x32993cu: goto label_32993c;
        case 0x329940u: goto label_329940;
        case 0x329944u: goto label_329944;
        case 0x329948u: goto label_329948;
        case 0x32994cu: goto label_32994c;
        default: break;
    }

    ctx->pc = 0x3298f0u;

label_3298f0:
    // 0x3298f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3298f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3298f4:
    // 0x3298f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3298f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3298f8:
    // 0x3298f8: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x3298f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_3298fc:
    // 0x3298fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3298fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329900:
    // 0x329900: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x329900u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_329904:
    // 0x329904: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_329908:
    if (ctx->pc == 0x329908u) {
        ctx->pc = 0x329908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329904u;
        // 0x329908: 0xe48e001c  swc1        $f14, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32990Cu;
        goto label_32990c;
    }
    ctx->pc = 0x329904u;
    {
        const bool branch_taken_0x329904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329904u;
        // 0x329908: 0xe48e001c  swc1        $f14, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x329904) {
            ctx->pc = 0x329940u;
            goto label_329940;
        }
    }
    ctx->pc = 0x32990Cu;
label_32990c:
    // 0x32990c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_329910:
    // 0x329910: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x329910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_329914:
    // 0x329914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_329918:
    // 0x329918: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x329918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_32991c:
    // 0x32991c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329920:
    // 0x329920: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x329920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_329924:
    // 0x329924: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_329928:
    // 0x329928: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_32992c:
    // 0x32992c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x32992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_329930:
    // 0x329930: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329934:
    // 0x329934: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329938:
    // 0x329938: 0x60f809  jalr        $v1
label_32993c:
    if (ctx->pc == 0x32993Cu) {
        ctx->pc = 0x32993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329938u;
        // 0x32993c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329940u;
        goto label_329940;
    }
    ctx->pc = 0x329938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329940u);
        ctx->pc = 0x32993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329938u;
        // 0x32993c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329938u, 0x329940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329940u;
label_329940:
    // 0x329940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329944:
    // 0x329944: 0x3e00008  jr          $ra
label_329948:
    if (ctx->pc == 0x329948u) {
        ctx->pc = 0x329948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329944u;
        // 0x329948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32994Cu;
        goto label_32994c;
    }
    ctx->pc = 0x329944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329944u;
        // 0x329948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32994Cu;
label_32994c:
    // 0x32994c: 0x0  nop
    ctx->pc = 0x32994cu;
    // NOP
    ctx->pc = 0x329950u;
}
